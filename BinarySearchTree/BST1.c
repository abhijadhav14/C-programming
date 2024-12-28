#include <stdio.h>

struct tnode
{
    int data;
    struct tnode *right;
    struct tnode *left;
};

struct tnode *CreateBST(struct tnode *root, int item)
{
    if(root == NULL)
    {
        root = (struct tnode *)malloc(sizeof(struct tnode));
        root->left = root->right = NULL;
        root->data = item;
        return root;
    }
    else
    {
	if(item < root->data )
            root->left = CreateBST(root->left,item);
         if(item > root->data )
            root->right = CreateBST(root->right,item);
    }
 return(root);
}

void Preorder(struct tnode *root)
{
    if( root != NULL)
    {
        printf(" %d ",root->data);
        Preorder(root->left);
        Preorder(root->right);
    }
}

void Inorder(struct tnode *root)
{
    if( root != NULL)
    {
        Inorder(root->left);
        printf(" %d ",root->data);
        Inorder(root->right);
    }
}

void Postorder(struct tnode *root)
{
    if( root != NULL)
    {
        Postorder(root->left);
        Postorder(root->right);
        printf(" %d ",root->data);
    }
}




int main()
{
    struct tnode *root = NULL;
    int choice, item, n, i;

  do
  {

    printf("\n\nBinary Search Tree Operations\n");
    printf("\n1: Creation of Binary search tree\n");
    printf("2: Preorder of BST\n");
    printf("3: Inorder of BST\n");
    printf("4: Postorder of BST\n");
    printf("5: EXIT\n");


    printf("\nEnter choice:");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1: printf("\nEnter data for node :   ", i);
                scanf("%d",&item);

                root = CreateBST(root,item);
                break;

        case 2: printf("\nPREORDER Traversal of BST\n");
                Preorder(root);
                break;

        case 3: printf("\nINORDER Traversal of BST\n");
                Inorder(root);
                break;

        case 4: printf("\nPOSTORDER Traversal of BST\n");
                Postorder(root);
                break;

        case 5: break;

         default: printf("\n\nInvalid Option !!! Try Again !! \n\n");
                break;
    }
  }while(choice != 5);

    return 0;
}
