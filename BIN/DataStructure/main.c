
#include<stdio.h>
#include<conio.h>
struct node
{
    int data;
    struct node left;
    struct node right;
};
struct node *root;
void insert( int data)
{
    struct node *temp,*parent;
    temp=(struct node*)malloc(sizeof(struct node*));
    temp->data=data;
    temp->left=NULL;
    temp->right=NULL;
    parent=root;
    if(root==NULL)
    {
        root=temp;
    }
    else
    {
        struct node *current;
        current=root;
        while(current)
        {
            parent=current;
            if(temp->data>current->data)
            current=current->right;
            else
                current=current->left;
        }
        if(parent->data>temp->data)
        {
            parent->left=temp;
        }
        else
            parent->right=temp;
    }
}

int main()
{
    int n,choise;
    while(choice!=3)
    {
        printf("********menu start********\n");
        printf("Enter the data element\n")
        scanf("%d",&n);
        printf("enter the choice\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: insert(n);
                          printf("data inserted");
                          break;
            case 2:show();
                         break;
            case 3:exit(0);
                         break;
            default :printf("enter right choice\n");
                          break;
        }
    }
}








