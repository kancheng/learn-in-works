# include <ctype.h>
# include <stdio.h>
# include <stdlib.h>
# include <conio.h>

struct list
{
    int data;
    struct list *front;
    struct list *back;
};
typedef struct list node;
typedef node *link;

int main()
{
    link ptr, tail, head;
    int num, i;
    tail = (link) malloc(sizeof(node));
    tail->back = NULL;
    tail->front = NULL;
    ptr = tail;
    printf("Please enter five datas \n");
    for ( i = 0; i < 5; i++ )
    {
        scanf("%d", &num);
        ptr->data = num;
        head = (link) malloc (sizeof(node));
        if ( i != 4 )
        {
            head->back = ptr;
            head->front = NULL;
            ptr->front = head;
            ptr = head;
        } 
    }

    printf("It is to print a Doubly linked list sequence in reverse order. \n");
    while(ptr)
    {
        printf(" The value of the list : %d \n", ptr->data);
        ptr = ptr->back;
    }
    printf("It is to print a Doubly linked list sequence in order. \n");
    ptr = tail;
    while(ptr)
    {
        printf(" The value of the list : %d \n", ptr->data);
        ptr = ptr->front;
    }
    system("pause");
    return 0;
}
                            


