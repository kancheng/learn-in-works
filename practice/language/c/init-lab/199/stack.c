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

link push (link stack, int value)
{
    link newnode;
    newnode = (link) malloc(sizeof(node));
    newnode->data = value;
    newnode->next = stack;
    stack = newnode;
    return stack;
}

link pop (link stack, int *value)
{
    link top;
    top = stack;
    stack = stack->next;
    *value = top->data;
    free(top);
    return stack;
}

int main()
{
    int arr[] = { 3, 12, 8, 9, 11};
    link ptr;
    int val, i;

    ptr = NULL;

    printf("It is to print array in order. \n");

    for ( i = 0; i < 5 ; i++)
    {
        ptr = push( ptr, arr[i]);
        printf("%d\n", arr[i]);
    }

    printf("It is to print array in reverse order. \n");

    for ( i = 0; i < 5 ; i++)
    {
        ptr = pop( ptr, &val);
        printf("%d\n", val);
    }

    system("pause");
    return 0;
}
                            


