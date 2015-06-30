#include<stdio.h>
#include<stdlib.h>
struct node
{
    struct node *rightChild;
    struct node *leftChild;
    int value;
};
typedef struct node Node;
Node *root;
Node *parent;

main()
{
    int choice,val;
    while(1)
    {
        printf("what do you want to do?\n 1.Insert \n 2.Search \n 3.exit \n");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            printf("enter the value you want to insert");
            scanf("%d",&val);
            insert(root,val);
            break;
        case 2:
            printf("enter the value you want to search");
            scanf("%d",&val);
            search(root,val);
            break;
        case 3:
            printf("exiting");
            return 0;
            break;
        default:
            printf("wrong choice");
        }
    }
}
void insert(Node *parent,int val)
{
    if(root==NULL)
    {
        root=(Node*)malloc(sizeof(Node));
        root->value=val;
        parent=root;
        parent->leftChild=NULL;
        parent->rightChild=NULL;
    }
    else if(val<parent->value)
    {
        if(parent->leftChild!=NULL)
        {
            printf("\nleft\n");
            insert(parent->leftChild,val);
        }
        parent->leftChild=(Node*)malloc(sizeof(Node));
        parent->leftChild->value=val;
        parent->leftChild->leftChild=NULL;
        parent->leftChild->rightChild=NULL;
        parent=root;
    }

    else if(val>parent->value)
    {

        if(parent->rightChild!=NULL)
        {
            printf("\nright\n");
            insert(parent->rightChild,val);
        }
        parent->rightChild=(Node*)malloc(sizeof(Node));
        parent->rightChild->value=val;
        parent->rightChild->rightChild=NULL;
        parent->rightChild->leftChild=NULL;
        parent=root;
    }
}
void search(Node *parent, int val)
{
    if(root==NULL)
    {
        printf("\nthere is no element present\n");
    }
    else if(val<parent->value)
    {
        if(parent->leftChild!=NULL)
        {
            printf("\nleft\n");
            search(parent->leftChild,val);
        }
        else
        {
            printf("\nthere is no left element present\n");
        }
    }
    else if(val>parent->value)
    {

        if(parent->rightChild!=NULL)
        {
            printf("\nright\n");
            search(parent->rightChild,val);
        }
        else
        {
            printf("\nthere is no right element present\n");
        }
    }
    else if(parent->value==val)
    {
        printf("\nelement found\n");
    }
}
