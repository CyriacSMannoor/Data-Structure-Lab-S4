/**************************************************************************



               MENU DRIVEN PROGRAM FOR DOUBLY LINKED LIST
***************************************************************************/
#include<stdio.h>
#include<conio.h>

struct node
{
       int info;
       struct node *rlink,*llink;
}*first=NULL,*ptr,*t;

int disp();
int insbeg();
int delbeg();
int insend();
int delend();
int insany();
int delany();
int search();

int key;

int main(){
    int c;
    printf("\n\t\t\t\t Doubly linked list\n\n");
    do{
             
             printf("\n\t\t1.Insert At Begining\n\t\t2.Insert At End\n\t\t3.Insert At any Position\n\t\t4.Delete from End\n\t\t5.Delete from Begining\n\t\t6.Delete From Any POsition\n\t\t7.Search\n\t\t8.display\n\t\t9.Exit");
             printf("\nEnter your Choice: ");
             scanf("%d",&c);
             switch(c)
             {
                       case 1: insbeg();break;
                       
                       case 2: insend();break;
                       
                       case 3: insany();break;
                       
                       case 4: delend();break;
                       
                       case 5: delbeg();break;
                       
                       case 6: delany();break;
                       
                       case 7: search();break;
                       
                       case 8: disp();break;
             }
    }while(c!=9);
    
    return 0;
}

int insbeg()
{
    ptr=(struct node *)malloc(sizeof(struct node));
    
    printf("\n\nEnter the data:");
    
    scanf("%d",&ptr->info);
    
    ptr->rlink=first;
    
    ptr->llink=NULL;
    
    if(first!=NULL)
    
           first->llink=ptr;
           
    first=ptr;
    
    return 0;
}
int insend()
{
    ptr=(struct node *)malloc(sizeof(struct node));
    
    printf("\n\nEnter the data:");
    
    scanf("%d",&ptr->info);
    
    ptr->rlink=NULL;
    
    t=first;
    
    if(t==NULL)
    {
               first=ptr;
               
               ptr->llink=NULL;
    }
    else
    {
         while(t->rlink!=NULL)
         {
                      t=t->rlink;
         }
         t->rlink=ptr;
         
         ptr->llink=t;
    }
    return 0;
}
int insany()
{
    printf("\nEnter the Key:");
    
    scanf("%d",&key);
    
    ptr=first;
    
    while(ptr!=NULL&&ptr->info!=key)
    {
            ptr=ptr->rlink;
    }
    if(ptr==NULL)
    {
                 printf("\nKey not Found");
                 
                 return 0;
    }
    else
    {
         t=(struct node *)malloc(sizeof(struct node));
         
         printf("\n\nEnter the data:");
         
         scanf("%d",&t->info);
         
         t->rlink=ptr->rlink;
         
         t->llink=ptr;
         
         ptr->rlink=t;
         
         ptr=t->rlink;
         
         if(ptr!=NULL)
         
                      ptr->llink=t;
    }
    return 0;
}
int disp()
{
    if(first==NULL)
    {
             printf("\nList is Empty");
             
             return 0;
    }
    else
    {
         ptr=first;
         while(ptr!=NULL)
         {
                   printf(" %d",ptr->info);
                   
                   ptr=ptr->rlink;
         }
    }
    return 0;
}
int delbeg()
{
    if(first==NULL)
    {
          printf("\nList is Empty");
          return 0;
    }
    else
    {
         t=first;
         
         first=first->rlink;
         
         free(t);
         
         first->llink=NULL;
         
         printf("\nDeleted Successfully");
    }
    return 0;
}
int delend()
{
    if(first==NULL)
    {
                    printf("\nList is Empty");
                    
                    return 0;
    }
    else
    {
         ptr=first;
         
         while(ptr->rlink!=NULL)
         {
                                ptr=ptr->rlink;
         }
         if(ptr==first)
         {
                        first=NULL;
                        
                        free(ptr);
                        
                        printf("\nDeleted Successfully");
                        
                        return 0;
         }
         t=ptr->llink;
         
         t->rlink=NULL;
         
         free(ptr);
         
         printf("\nDeleted Successfully");
    }
    return 0;
}
int delany()
{
    if(first==NULL)
    {
             printf("\nList is Empty");
    }
    else
    {
         printf("\nEnter the Key:");
         scanf("%d",&key);
         ptr=first;
         while(ptr!=NULL&&ptr->info!=key)
         {
                ptr=ptr->rlink;
         }
         if(ptr==first&&ptr->info==key)
         {
                        first=ptr->rlink;
                        
                        free(ptr);
                        
                        first->llink=NULL;
                        
                        printf("\nDeleted Successfully");
                        return 0;
         }
                        
         if(ptr==NULL)
         {
                  printf("\nKey not Found");
                  return 0;
         }
         else
         {
              t=ptr->llink;
              
              t->rlink=ptr->rlink;
              
              free(ptr);
              
              ptr=t->rlink;
              
              ptr->llink=t;
              
              printf("\nDeleted Successfully");
         }
    }
    return 0;
}
int search()
{
    printf("\nEnter the Key:");
    
    scanf("%d",&key);
    ptr=first;
    while(ptr!=NULL&&ptr->info!=key)
    {
             ptr=ptr->rlink;
    }
    if(ptr==NULL)
    {
             printf("\nKey not Found");
             return 0;
    }
    else{
         printf("\n%d is Found",key);
    }
    return 0;
}
/****************************************************************************
                             OUTPUT

                                 Doubly linked list


                1.Insert At Begining
                2.Insert At End
                3.Insert At any Position
                4.Delete from End
                5.Delete from Begining
                6.Delete From Any POsition
                7.Search
                8.display
                9.Exit
Enter your Choice: 1


Enter the data:1

                1.Insert At Begining
                2.Insert At End
                3.Insert At any Position
                4.Delete from End
                5.Delete from Begining
                6.Delete From Any POsition
                7.Search
                8.display
                9.Exit
Enter your Choice: 1


Enter the data:2

                1.Insert At Begining
                2.Insert At End
                3.Insert At any Position
                4.Delete from End
                5.Delete from Begining
                6.Delete From Any POsition
                7.Search
                8.display
                9.Exit
Enter your Choice: 8
 2 1
                1.Insert At Begining
                2.Insert At End
                3.Insert At any Position
                4.Delete from End
                5.Delete from Begining
                6.Delete From Any POsition
                7.Search
                8.display
                9.Exit
Enter your Choice: 2


Enter the data:3

                1.Insert At Begining
                2.Insert At End
                3.Insert At any Position
                4.Delete from End
                5.Delete from Begining
                6.Delete From Any POsition
                7.Search
                8.display
                9.Exit
Enter your Choice: 8
 2 1 3
                1.Insert At Begining
                2.Insert At End
                3.Insert At any Position
                4.Delete from End
                5.Delete from Begining
                6.Delete From Any POsition
                7.Search
                8.display
                9.Exit
Enter your Choice: 3

Enter the Key:2


Enter the data:4

                1.Insert At Begining
                2.Insert At End
                3.Insert At any Position
                4.Delete from End
                5.Delete from Begining
                6.Delete From Any POsition
                7.Search
                8.display
                9.Exit
Enter your Choice: 8
 2 4 1 3
                1.Insert At Begining
                2.Insert At End
                3.Insert At any Position
                4.Delete from End
                5.Delete from Begining
                6.Delete From Any POsition
                7.Search
                8.display
                9.Exit
Enter your Choice: 4

Deleted Successfully
                1.Insert At Begining
                2.Insert At End
                3.Insert At any Position
                4.Delete from End
                5.Delete from Begining
                6.Delete From Any POsition
                7.Search
                8.display
                9.Exit
Enter your Choice: 8
 2 4 1
                1.Insert At Begining
                2.Insert At End
                3.Insert At any Position
                4.Delete from End
                5.Delete from Begining
                6.Delete From Any POsition
                7.Search
                8.display
                9.Exit
Enter your Choice: 5

Deleted Successfully
                1.Insert At Begining
                2.Insert At End
                3.Insert At any Position
                4.Delete from End
                5.Delete from Begining
                6.Delete From Any POsition
                7.Search
                8.display
                9.Exit
Enter your Choice: 8
 4 1
                1.Insert At Begining
                2.Insert At End
                3.Insert At any Position
                4.Delete from End
                5.Delete from Begining
                6.Delete From Any POsition
                7.Search
                8.display
                9.Exit
Enter your Choice: 1


Enter the data:6

                1.Insert At Begining
                2.Insert At End
                3.Insert At any Position
                4.Delete from End
                5.Delete from Begining
                6.Delete From Any POsition
                7.Search
                8.display
                9.Exit
Enter your Choice: 8
 6 4 1
                1.Insert At Begining
                2.Insert At End
                3.Insert At any Position
                4.Delete from End
                5.Delete from Begining
                6.Delete From Any POsition
                7.Search
                8.display
                9.Exit
Enter your Choice: 6

Enter the Key:4

Deleted Successfully
                1.Insert At Begining
                2.Insert At End
                3.Insert At any Position
                4.Delete from End
                5.Delete from Begining
                6.Delete From Any POsition
                7.Search
                8.display
                9.Exit
Enter your Choice: 7

Enter the Key:1

1 is Found
                1.Insert At Begining
                2.Insert At End
                3.Insert At any Position
                4.Delete from End
                5.Delete from Begining
                6.Delete From Any POsition
                7.Search
                8.display
                9.Exit
Enter your Choice: 8
 6 1
                1.Insert At Begining
                2.Insert At End
                3.Insert At any Position
                4.Delete from End
                5.Delete from Begining
                6.Delete From Any POsition
                7.Search
                8.display
                9.Exit
Enter your Choice: 5

Deleted Successfully
                1.Insert At Begining
                2.Insert At End
                3.Insert At any Position
                4.Delete from End
                5.Delete from Begining
                6.Delete From Any POsition
                7.Search
                8.display
                9.Exit
Enter your Choice: 5

**********************************************************************/
