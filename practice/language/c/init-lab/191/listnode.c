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
    link ptr, head;
    int num, i;
    head = (link) malloc(sizeof(node));
    ptr = head;
    printf("Please enter five data. \n");

    for ( i = 0; i <= 4; i++ )
    {
        scanf("%d", &num);
        ptr->data = num;
        ptr->next = (link) malloc(sizeof(node));
        if ( i == 4 )
        {
            ptr->next = NULL;
        }
        else
        {
            ptr = ptr->next;
        }
    }
    printf("The result of lists according to the order printing. \n");
    ptr = head;
    while (  ptr != NULL)
    {
        printf( "The data in lists : %d \n", ptr->data);
        ptr = ptr->next;
    }
    system("pause");
    return 0;
}