#include <stdio.h>
#include <stdlib.h>
void beginsert();
void randominsert();
void lastinsert();
void deletefirst();
void deletespacify();
void deletelast();
void show();
void voo();
struct node
{
    int data;
    struct node *next;
};
struct node *head;
//main function start
int main()
{
    int choice;
    while(choice!=7)
    {
        void voo();
        printf("\n****************main menu start*********************\n");
        printf("1.Insert data at starting node.\n");
          printf("2.Insert data at random.\n");
            printf("3.for Exit.\n");
              printf("Enter the choice\n");
              scanf("%d",&choice);
              switch(choice)
              {
                  case 1: beginsert();
                  break;
                  case 2: randominsert();
                  break;
                  case 3: show();
                  break;
                  case 4: deletefirst();
                  break;
                  case 5: deletespacify();
                  break;
                  case 6: deletelast();
                  break;
                  case 7: exit(0);
                  break;
                  default :
                  printf("Enter right choice");
                  break;
              }
    }
}
void beginsert()
{
     struct node *ptr;
   ptr=(struct node*)malloc(sizeof(struct node*));
   if(ptr==NULL)
   {
       printf("Overflow condition");
   }
   else
   {
      int n;
      printf("Enter the data\n");
      scanf("%d",&n);
      ptr->data=n;
      ptr->next=head;
      head=ptr;
   }

}
//This is for random insert
void randominsert()
{
    int n,item, i;
    struct node *ptr,*current;
    ptr=(struct node*)malloc(sizeof(struct mode*));
    if(head==NULL)
    {
        printf("there is no elements\n");
         printf("Enter the data\n");
        scanf("%d",&item);
        head=ptr;
        ptr->data=item;
        ptr->next=NULL;
    }
    else
    {
         printf("Enter the specify position and data\n");
         scanf("%d",&n);
         scanf("%d",&item);
         current=head;
        for(i=1;i<n-1;i++)
        {
           current=current->next;
           if(current==NULL)
           {
               printf("Can't be add at that position");
               return 0;
           }
        }
       ptr->next=current->next;
       current->next=ptr;
       ptr->data=item;
        printf("data inserted\n");
    }
}
//show  function start
void show()
{
    struct node *ptr;
    ptr=head;
    while(ptr!=NULL)
    {
          printf("%d\t",ptr->data);
        ptr=ptr->next;
    }
}
// delete first position
void deletefirst()
{
    struct node *ptr;
    ptr=(struct node*)malloc(sizeof(struct node*));
    if(head==NULL)
        printf("underflow condition\n");
    else
    {
        ptr=head;
        head=ptr->next;
        free(ptr);
        printf("node would be deleted\n");
    }

}
// this for delete a node at specified position
void deletespacify()
{
    struct node *ptr,*temp;
    int i ,n;
    ptr=(struct node*)malloc(sizeof(struct node*));
    if(head==NULL)
        printf("underflow condition\n");
    else
    {
        printf("Enter position\n");
        scanf("%d",&n);
        temp=head;
        for(i=1;i<n-1;i++)
        {
            temp=temp->next;
        }
        ptr=temp->next;
        temp->next=temp->next->next;
        free(ptr);
        printf("node would be deleted\n");
    }

}

void deletelast()
{
    struct node *ptr,*temp;
    int i ,n;
    ptr=(struct node*)malloc(sizeof(struct node*));
    if(head==NULL)
        printf("underflow condition\n");
    else
    {
        temp=head;
       while(temp->next!=NULL)
        {
            ptr=temp;
            temp=temp->next;
        }
        ptr->next=NULL;
        free(temp);
        printf("node would be deleted\n");
    }

}
