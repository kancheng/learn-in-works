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

link enqueue(link queue, int value)
{
    link newnode;
    newnode = (link) malloc(sizeof(node));
    newnode->data = value;
    newnode->next = NULL;
    if ( queue != NULL )
    {
        queue->next = newnode;
        queue = queue->next;
    }
    else
    {
        queue = newnode;
    }
    return queue;
}

link dequeue(link queue, int *value)
{
    link dequeuenode;
    dequeuenode = queue;
    *value = dequeuenode->data;
    queue = queue->next;
    free(dequeuenode);
    return queue;
}

int main()
{
    int arr[] = { 3, 12, 8, 9, 11};
    link ptrb, ptrf;
    int val, i;

    ptrf = NULL;
    ptrb = ptrf;

    printf("It is to use enqueue building queue. \n");

    for ( i = 0; i < 5 ; i++)
    {
        ptrb = enqueue(ptrb, arr[i]);
        if ( ptrf == NULL )
        {
            ptrf = ptrb;
        }
        printf("%d\n", arr[i]);
    }

    printf("It is to use dequeue building queue. \n");

    for ( i = 0; i < 5 ; i++)
    {
        ptrf = dequeue(ptrf, &val);
        printf("%d\n", val);
    }

    system("pause");
    return 0;
}
                            


