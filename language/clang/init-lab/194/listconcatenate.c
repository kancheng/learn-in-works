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

link concatenate ( link pointer1, link pointer2)
{
    link tmp;
    tmp = pointer1;
    while ( tmp->next )
    {
        tmp = tmp->next;
    }
    tmp->next = pointer2;
    return pointer1;
}

int main()
{
    int arr1[] = { 3, 12, 8, 9, 11 };
    int arr2[] = { 21, 30, 33, 44, 38 };
    link ptr, ptr1, ptr2;

    ptr1 = create_list( arr1, 5);
    ptr2 = create_list( arr2, 5);
    ptr = concatenate( ptr1, ptr2);
    print_list(ptr);
    system("pause");
    return 0;
}