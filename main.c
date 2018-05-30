#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int data;
    struct node* left;
    struct node* right;
}node;

node* initNode(int data)
{
    node* node;
    //node* node  = (node*)malloc(sizeof(node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;

    return node;

}
void addToTreeB(node* root,int data)
{
    if (data < root->data)
    {
        if (root->left == NULL)
        {
            root->left = initNode(data);
        }
        else
        {
            addToTreeB(root->left,data);
        }
    }
    else
    {
        if (root->right == NULL)
        {
            root->right = initNode(data);
        }
        else
        {
            addToTreeB(root->right,data);
        }
    }



}
int main()
{
    int i,k,j;
    node* root;
    scanf("%i", &k);
    root = initNode(k);
    scanf("%i", &k);
    for (i = 0; i<= k; i++)
    {
        scanf("%i", &j);
        addToTreeB(root,j);
    }

    printf("Hello world!\n");
    return 0;
}
