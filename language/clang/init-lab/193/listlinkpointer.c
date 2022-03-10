# include <ctype.h>
# include <stdio.h>
# include <stdlib.h>
# include <conio.h>

struct list
{
    int data;
    struct list *next;
};
typedef struct list node;
typedef node *link;
void print_list(link pointer)
{
    while (pointer)
    {
        printf("%d\n", pointer->data);
        pointer = pointer->next;
    }
}
link create_list(int array[], int num)
{
    link tmp1, tmp2, pointer;
    int i;
    pointer = (link) malloc(sizeof(node));
    pointer->data = array[0];
    tmp1 = pointer;
    for (i = 1; i < num; i++)
    {
        tmp2 = (link) malloc(sizeof(node));
        tmp2->next = NULL;
        tmp2->data = array[i];
        tmp1->next = tmp2;
        tmp1 = tmp1->next;
    }
    return pointer;
}

int main()
{
    int arr[] = { 3, 12, 8, 9, 11 };
    link ptr;

    ptr = create_list( arr, 5);
    print_list(ptr);
    system("pause");
    return 0;
}