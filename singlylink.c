/**************************************************************************



		   MENU DRIVEN PROGRAM FOR SINGLY LINKED LIST
***************************************************************************/
#include<stdio.h>
void inbegin(void);
void inend(void);
void inposition(void);
void debegin(void);
void deend(void);
void deposition(void);
void display(void);
void sort(void);
void search(void);
int item;
struct node
{
       int data;
       struct node *link;
}*first,*ptr,*next;
int main()
{
    int op;
    printf("\n\nEnter first node\n");
    first=(struct node *)malloc (sizeof(struct node));
    scanf("%d",&first->data);
    first->link=0;
    ptr=first;
    do
    {/*\n2.Inend\n3.Inposition\n4.Debegin\n5.Deend\n6.Deposition\n7.Display\n8.Sorting\n9.Searching\n10.Exit\n*/
    printf("\n\nMENU");
    printf("\n\n1.Insert at begin");
    printf("\n\n2.Insert at end");
    printf("\n\n3.Insert at any position");
    printf("\n\n4.Delete at begin");
    printf("\n\n5.Delete at end");
    printf("\n\n6.Delete at any position");
    printf("\n\n7.Display");
    printf("\n\n8.Sorting");
    printf("\n\n9.Searching");
    printf("\n\n10.Exit");
    printf("\n\nEnter your choice\n");
    scanf("%d",&op);
    switch(op)
    {
    case 1:inbegin();
            break;
    case 2:inend();
            break;
    case 3:inposition();
            break;
    case 4:debegin();
            break;
    case 5:deend();
            break;
    case 6:deposition();
            break;
    case 7:display();
            break;
    case 8:sort();
            break;
    case 9:search();
            break;
    case 10:exit(0);
    }
    }while(op!=10);
    return(0);
}
    //INSERTION AT BEGIN
void inbegin(void)
{
    next=(struct node  *)malloc(sizeof(struct node));
    printf("enter data\n");
    scanf("%d",&next->data);
    next->link=first;
    first=next;
  display();
  return;
}
   //INSERTION AT END
void inend (void)
{
    next=(struct node *)malloc(sizeof(struct node));
    printf("\nenter data");
    scanf("%d",&next->data);
    next->link=0;
    ptr=first;
    while(ptr->link!=0)
    {
    ptr=ptr->link;
    }
    ptr->link=next;
    
    display();
    return;
}
    //insertion at position
void inposition(void)
{
     int key;
     printf("enter the node after the data to be inserted\n");
     scanf("%d",&key);
     next=(struct node *)malloc(sizeof(struct node));
    printf("\nenter data");
    scanf("%d",&next->data);
    ptr=first;
    while(ptr->data!=key&&ptr->link!=0)
    {
                                       ptr=ptr->link;
                                       }
    if(ptr->link==0)
    printf("key not present\n");
    else
    {
        next->link=ptr->link;
        ptr->link=next;
        }
        display();
        return;
}
   //DELETION FROM BEGIN
void debegin(void)
{
     ptr=first;
     if(first==0)
     {
                 printf("list empty");
                 }
                 else
                 {
                     first=ptr->link;
                     free(ptr);
                     }
                     display();
                     return;
}
       //DELETION FROM END
void deend(void)
{
     struct node *ptr1;
     ptr=first;
     if(first==0)
     {
                 printf("list empty");
                 }
     else
     {
         while(ptr->link!=0)
         {
                            ptr1=ptr;
                            ptr=ptr->link;
                            }
                            ptr1->link=0;
                            free(ptr);
                            }
     display();
     return;
}
     //DELETION FROM ANY POSITION
void deposition(void)
{
       int key;
       struct node *ptr2;
       ptr=first;
       if(first==0)
       {
                   printf("\nlist empty");
                   }
                  else
                  {
                      printf("\nenter the key to be deleted");
                      scanf("%d",&key);
                      while(ptr!=0)
                      {
                                        if(ptr->data!=key)
                                        {
                                                          ptr2=ptr;
                                                          ptr=ptr->link;
                                                          }
                                 else
                                 {
                                     ptr2->link=ptr->link;
                                     free(ptr);
                                     }
                                     }
                                     }
                         display();
                         return;
}
        //DISPLAY
void display(void)
{
     ptr=first;
     if(first==0)
     printf("\nlist empty");
     else
     {
         printf("List:");
         while(ptr!=0)
         {
                      printf("%d ",ptr->data);
                      ptr=ptr->link;
                      }
                      }
                      return;
}
           //SORTING
void sort(void)
{
                struct node *tptr;
                int temp;
                ptr=first;
                while(ptr->link!=0)
                {
                         tptr=ptr->link;
                         while(tptr!=0)
                         {
                                       if(ptr->data>tptr->data)
                                       {
                                                               temp=ptr->data;
                                                               ptr->data=tptr->data;
                                                               tptr->data=temp;
                                                               }
                                         tptr=tptr->link;
                                         }
           ptr=ptr->link;
           }
           display();
           return;
}
        //searching
void search(void)
{
     int key,flag=0;
     printf("\nenter the node to be searched");
     scanf("%d",&key);
     ptr=first;
     while(ptr!=0&&flag==0)
     {
                          if(ptr->data==key)
                          {
                                            flag=1;
                                            break;
                                            }
                          else
                          {
                              ptr=ptr->link;
                              }
                              }
           if(ptr==0&&flag==0)
           {
           printf("\nunsuccessful search");
           }
           else
           {
               printf("\nnode is present");
               }
     return;
}

                               
 /*************************************************

                 OUTPUT
          
Enter first node
1


MENU

1.Insert at begin

2.Insert at end

3.Insert at any position

4.Delete at begin

5.Delete at end

6.Delete at any position

7.Display

8.Sorting

9.Searching

10.Exit

Enter your choice
1
enter data
2
List:2 1

MENU

1.Insert at begin

2.Insert at end

3.Insert at any position

4.Delete at begin

5.Delete at end

6.Delete at any position

7.Display

8.Sorting

9.Searching

10.Exit

Enter your choice
2

enter data3
List:2 1 3

MENU

1.Insert at begin

2.Insert at end

3.Insert at any position

4.Delete at begin

5.Delete at end

6.Delete at any position

7.Display

8.Sorting

9.Searching

10.Exit

Enter your choice
3
enter the node after the data to be inserted
2

enter data
4
List:2 4 1 3

MENU

1.Insert at begin

2.Insert at end

3.Insert at any position

4.Delete at begin

5.Delete at end

6.Delete at any position

7.Display

8.Sorting

9.Searching

10.Exit

Enter your choice
4
List:4 1 3

MENU

1.Insert at begin

2.Insert at end

3.Insert at any position

4.Delete at begin

5.Delete at end

6.Delete at any position

7.Display

8.Sorting

9.Searching

10.Exit

Enter your choice
5
List:4 1

MENU

1.Insert at begin

2.Insert at end

3.Insert at any position

4.Delete at begin

5.Delete at end

6.Delete at any position

7.Display

8.Sorting

9.Searching

10.Exit

Enter your choice
1
enter data
6
List:6 4 1

MENU

1.Insert at begin

2.Insert at end

3.Insert at any position

4.Delete at begin

5.Delete at end

6.Delete at any position

7.Display

8.Sorting

9.Searching

10.Exit

Enter your choice
6

enter the key to be deleted4
List:6 1

MENU

1.Insert at begin

2.Insert at end

3.Insert at any position

4.Delete at begin

5.Delete at end

6.Delete at any position

7.Display

8.Sorting

9.Searching

10.Exit

Enter your choice
8
List:1 6

MENU

1.Insert at begin

2.Insert at end

3.Insert at any position

4.Delete at begin

5.Delete at end

6.Delete at any position

7.Display

8.Sorting

9.Searching

10.Exit

Enter your choice
9

enter the node to be searched6

node is present

MENU

1.Insert at begin

2.Insert at end

3.Insert at any position

4.Delete at begin

5.Delete at end

6.Delete at any position

7.Display

8.Sorting

9.Searching

10.Exit

Enter your choice

*****************************************************************/                           
    
     
    
         
    
    
    
    
    
    
    
       
