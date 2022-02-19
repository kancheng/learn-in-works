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

    link ptr;

    ptr = (link) malloc(sizeof(node));
    ptr->data = 5;
    ptr->next = NULL;
    ptr->next = (link) malloc(sizeof(node));
    ptr->next->data = 10;
    ptr->next->next = NULL;
    printf("The first node is %d \n", ptr->data);
    printf("The second node is %d \n", ptr->next->data);

    system("pause");
    return 0;
}