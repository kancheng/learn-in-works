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
int main()
{
    link ptr, head, tail;
    int num, i;
    tail = (link) malloc(sizeof(node));
    tail->next = NULL;
    ptr = tail;
    printf("Please enter five data. \n");

    for ( i = 0; i <= 4; i++ )
    {
        scanf("%d", &num);
        ptr->data = num;
        head = (link) malloc(sizeof(node));
        head->next = ptr;
        ptr = head;
    }
    ptr = ptr->next;
    printf("The results reverse order to print. \n");
    while (  ptr != NULL)
    {
        printf( "The data in lists : %d \n", ptr->data);
        ptr = ptr->next;
    }
    system("pause");
    return 0;
}