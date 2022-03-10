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

link insert_node(link pointer, link tmp, int value)
{
    link newnode;
    if ( tmp == NULL )
    {
        newnode = (link) malloc(sizeof(node));
        newnode->data = value;
        newnode->next = pointer;
        return newnode;
    }
    else
    {
        if ( tmp->next == NULL)
        {
            newnode = (link) malloc(sizeof(node));
            newnode->data = value;
            tmp->next = newnode;
            newnode->next = NULL;
        }
        else
        {
            newnode = (link) malloc(sizeof(node));
            newnode->data = value;
            newnode->next = tmp->next;
            tmp->next = newnode;
        }
        return pointer;
    }
}

link search_insert_loaction (link pointer, int value)
{
    link tmp, btmp;
    int i, min;
    int OTRUE = 1;
    tmp = pointer;
    btmp = NULL;
    while ( tmp && OTRUE )
    {
        if ( value < tmp->data)
        {
            OTRUE = 0;
        }
        if (OTRUE)
        {
            btmp = tmp;
            tmp = tmp->next;
        }
    }
    pointer = insert_node( pointer, btmp, value);
    return pointer;
}

void bubble_sort (link pointer, int num) 
{
    link tmp;
    int i, j, value;

    for ( i = 1; i < num; i++ )
    {
        tmp = pointer;
        for ( j = 1; j < num; j++ )
        {
            if ( tmp->data > tmp->next->data )
            {
                value = tmp->data;
                tmp->data = tmp->next->data;
                tmp->next->data = value;
            }
            tmp = tmp->next;
        }
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

void print_list (link pointer)
{
    while (pointer)
    {
        printf("%d\n", pointer->data);
        pointer = pointer->next;
    }
}

int main()
{
    int arr[] = { 3, 12, 8, 9, 11 };
    link ptr;

    ptr = create_list( arr, 5);
    bubble_sort( ptr, 5);
    printf("Before the nodes will add, It needs to print the data of lists. \n");
    print_list(ptr);
    ptr = search_insert_loaction( ptr, 15);
    printf("After No. 15 of the node joined, the results print again. \n");
    print_list(ptr);
    ptr = search_insert_loaction( ptr, 7);
    printf("After No. 7 of the node joined, the results print again. \n");
    print_list(ptr);
    system("pause");
    return 0;
}
                            


