# include <ctype.h>
# include <stdio.h>
# include <stdlib.h>
# include <conio.h>
struct list
{
    int data;
    struct list *left, *right;
};
typedef struct list node;
typedef node *btree;

btree create_btree(btree root, int val)
{
    btree newnode, current, back;
    newnode = (btree) malloc(sizeof(node));
    newnode->data = val;
    newnode->left = NULL;
    newnode->right = NULL;
    if ( root == NULL)
    {
        root = newnode;
        return root;
    }
    else
    {
        current = root;
        while (current != NULL)
        {
            back = current;
            if ( current->data > val ) 
            {
                current = current->left;
            }
            else
            {
                current = current->right;
            }
        }
        if ( back->data > val )
        {
            back->left = newnode;
        }
        else
        {
            back->right = newnode;
        }
    }
    return root;
}

void inorder(btree root)
{
    if (root != NULL)
    {
        inorder(root->left);
        printf("%d\n", root->data);
        inorder(root->right);
    }
}

void preorder(btree root)
{
    if (root != NULL)
    {

        printf("%d\n", root->data);
        preorder(root->left);        
        preorder(root->right);
    }
}

int main()
{
    int arr[] = { 7, 4, 1, 5, 12, 8, 13, 11};
    btree ptr;
    int val, i;

    ptr = NULL;

    printf("It is to use array building binary tree. \n");

    for ( i = 0; i < 8 ; i++)
    {
        ptr = create_btree( ptr, arr[i]);
        printf("%d\n", arr[i]);
    }

    printf("It is to use preorder printing binary tree. \n");
    preorder(ptr);
    system("pause");
    return 0;
}
                            


