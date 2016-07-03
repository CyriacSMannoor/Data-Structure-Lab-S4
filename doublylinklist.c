/***********************************************************************************************

                         DOUBLY LINKED LIST
***********************************************************************************************/
#include<stdio.h>
void inbeg(void);
void inend(void);
void inbtw(void);
void debeg(void);
void deend(void);
void debtw(void);
void trav(void);
int c=0;
struct node
{
       int data;
       struct node *llink;
       struct node *rlink;
}*first,*ptr,*ptr1,*ptr2,*next,*tptr;
int main()
{
    int x;
first=(struct node *)malloc(sizeof (struct node));
    printf("enter first node\n");
    scanf("%d",&first->data);
    first->llink=0;
    first->rlink=0;
    ptr=first;
    c=1;
    do
    {
    printf("\nMENU\n1.In begin\n2.In end\n3.In between\n4.De begin\n5.De end\n6.De between\n7.Traverse\n8.Exit\n");
    printf("enter choice\n");
    scanf("%d",&x);
    switch(x)
    {
    case 1:inbeg();
            break;
    case 2:inend();
            break;
    case 3:inbtw();
            break;
    case 4:debeg();
            break;
    case 5:deend();
            break;
    case 6:debtw();
            break;
    case 7:trav();
            break;
    case 8:exit(0);
    }
    }while(x!=8);
    return 0;
}
         //INSERTION AT BEGINNING
void inbeg(void)
{
     next=(struct node *)malloc(sizeof(struct node));
     printf("\nenter element to be inserted\n");
     scanf("%d",&next->data);
     next->llink=0;
     next->rlink=first;
     first->llink=next;
     first=next;
     c=c+1;
     trav();
     return;
}
        //INSERTION AT END
void inend(void)
{
   next=(struct node *)malloc(sizeof(struct node));
     printf("\nenter element to be inserted\n");
     scanf("%d",&next->data);
     ptr=first;
     while(ptr->rlink!=0)
     {
                         ptr=ptr->rlink;
                         }
         ptr->rlink=next;
         next->llink=ptr;
         next->rlink=0;
         c++;
         trav();
        return;
}
           //INSERTION IN BETWEEN
void inbtw(void)
{
     int key;
   next=(struct node *)malloc(sizeof(struct node));
     printf("\nenter element to be inserted\n");
     scanf("%d",&next->data);
     printf("\nenter the node after which insertion to be done");
     scanf("%d",&key);
     ptr=first;
     while(ptr->data!=key)
     {
                          ptr=ptr->rlink;
                          }
       tptr=ptr->rlink;
       ptr->rlink=next;
       next->llink=ptr;
       next->rlink=tptr;
       tptr->llink=next;
       c++;
       trav();
       return;
}
        //DELETION FROM BEGINNING
void debeg(void)
{
     if(c==0)
     printf("\nlist empty");
     else
     {
          
          if(c==1)
          {
          free(ptr);
          c=0;
          }
          else
          {
              ptr=first;
          first=ptr->rlink;
          first->llink=0;
          free(ptr);
          c--;
          }
          }
          trav();
     return;
}
       //DELETION FROM END
void deend(void)
{
     if(c==0)
     printf("\nlist empty");
     else
     {
         if(c==1)
         {
         c=0;
         free(ptr);
         }
         else
         {
         ptr=first;
         while(ptr->rlink!=0)
         {
                         ptr=ptr->rlink;
                         }
          tptr=ptr->llink;
          tptr->rlink=0;
           free(ptr);
           c--;
           }
           }
           trav();
     return;
}
       //DELETION IN BETWEEN
void debtw(void)
{
     int key,f=0;
     printf("\nenter the node to be deleted\n");
     scanf("%d",&key);
     if(c==0)
     printf("\nlist empty");
     else
     {
         ptr=first;
         while(ptr!=0&&f==0)
         {
                            if(ptr->data==key)
                            {
                                              f=1;
                                              break;
                                              }
                           else
                            ptr=ptr->rlink;
                            }
             if(ptr==0&&f==0)
                   printf("\nkey not present");
                 else
                {                                         
                                ptr1=ptr->llink;
                                ptr2=ptr->rlink;
                                ptr1->rlink=ptr2;
                                ptr2->llink=ptr1;
                          free(ptr);
                          }      
           }
           trav();
           
       return;
}
         //FORWARD & BACKWARD TRAVERSAL
void trav(void)
{
     if(first==0)
     printf("\nlist empty");
     else
     {
            printf("\nforward: ");
            ptr=first;
            while(ptr!=0)
            {
                         printf("%d ",ptr->data);
                         ptr=ptr->rlink;
                         }
            printf("\nbackward: ");
            ptr=first;
            while(ptr->rlink!=0)
            {
                                ptr=ptr->rlink;
                                }
            while(ptr!=0)
            {
                         printf("%d ",ptr->data);
                         ptr=ptr->llink;
                         }
                         }
                         return;
}
/******************************OUTPUT************************************
enter first node
2

MENU
1.In begin
2.In end
3.In between
4.De begin
5.De end
6.De between
7.Traverse
8.Exit
enter choice
1

enter element to be inserted
3

forward: 3 2
backward: 2 3
MENU
1.In begin
2.In end
3.In between
4.De begin
5.De end
6.De between
7.Traverse
8.Exit
enter choice
1

enter element to be inserted
4

forward: 4 3 2
backward: 2 3 4
MENU
1.In begin
2.In end
3.In between
4.De begin
5.De end
6.De between
7.Traverse
8.Exit
enter choice
2

enter element to be inserted
6

forward: 4 3 2 6
backward: 6 2 3 4
MENU
1.In begin
2.In end
3.In between
4.De begin
5.De end
6.De between
7.Traverse
8.Exit
enter choice
3

enter element to be inserted
1

enter the node after which insertion to be done3

forward: 4 3 1 2 6
backward: 6 2 1 3 4
MENU
1.In begin
2.In end
3.In between
4.De begin
5.De end
6.De between
7.Traverse
8.Exit
enter choice
4

forward: 3 1 2 6
backward: 6 2 1 3
MENU
1.In begin
2.In end
3.In between
4.De begin
5.De end
6.De between
7.Traverse
8.Exit
enter choice
5

forward: 3 1 2
backward: 2 1 3
MENU
1.In begin
2.In end
3.In between
4.De begin
5.De end
6.De between
7.Traverse
8.Exit
enter choice
6

enter the node to be deleted
1

forward: 3 2
backward: 2 3
MENU
1.In begin
2.In end
3.In between
4.De begin
5.De end
6.De between
7.Traverse
8.Exit
enter choice
4

forward: 2
backward: 2
MENU
1.In begin
2.In end
3.In between
4.De begin
5.De end
6.De between
7.Traverse
8.Exit
enter choice
5
list empty
MENU
1.In begin
2.In end
3.In between
4.De begin
5.De end
6.De between
7.Traverse
8.Exit
enter choice
8
*/     
        
           


    
