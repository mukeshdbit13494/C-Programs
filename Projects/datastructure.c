
#include<stdio.h>
#include<conio.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
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
 void show(struct node *temp)
 {
 	struct node *pre=temp;
 	
 	if(pre)
 	{	
 		show(pre->left);
 		printf("%d\t\n",pre->data);
 		show(pre->right);
	}
 }
int main()
{
    int n,choice;
    while(choice!=3)
    {
        printf("********menu start********\n");
         printf("enter the choice\n");
        scanf("%d",&choice);  
        switch(choice)
        {
            case 1: printf("Enter the data element\n");
                    scanf("%d",&n); 
				        insert(n);
                    printf("data inserted\n");
                    break;
            case 2:show(root);
                         break;
            case 3:exit(0);
                         break;
            default :printf("enter right choice\n");
                          break;
        }
    }
}









