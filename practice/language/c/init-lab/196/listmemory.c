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

link delete_node (link pointer, link tmp)
{
    link deletenode;
    if (tmp == NULL)
    {
        tmp = pointer-> next;
        free(pointer);
        return tmp;
    }
    else
    {
        if ( tmp->next->next == NULL)
        {
            deletenode = tmp->next;
            tmp->next = NULL;
            free(deletenode);
        }
        else
        {
            deletenode = tmp->next;
            tmp->next = tmp->next->next;
            free(deletenode);
        }
        return pointer;
    }
}
void selection_sort(link pointer, int num)
{
    link tmp, btmp;
    int i, min;
    for ( i = 0; i < num; i++ )
    {
        tmp = pointer;
        min = tmp->data;
        btmp = NULL;
        while ( tmp->next )
        {
            if ( min > tmp->next->data )
            {
                min = tmp->next->data;
                btmp = tmp;
            }
            tmp = tmp->next;
        }
        printf("%d\n", min);
        pointer = delete_node( pointer, btmp);
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
    selection_sort( ptr, 5);
    system("pause");
    return 0;
}