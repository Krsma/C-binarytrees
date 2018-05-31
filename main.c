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
    //node* node;
    node* cvor  = (node*) malloc(sizeof(struct node));
    cvor->data = data;
    cvor->left = NULL;
    cvor->right = NULL;

    return cvor;

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
    printf("give the value of root node");
    scanf("%i", &k);
    root = initNode(k);
    printf("give number of wanted nodes");
    scanf("%i", &k);
    for (i = 0; i < k; i++)
    {
        printf("give the value node");
        scanf("%i", &j);
        addToTreeB(root,j);
    }

    printf("Hello world!\n");
    return 0;
}
