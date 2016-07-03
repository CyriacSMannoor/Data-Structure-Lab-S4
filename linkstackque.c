/**************************************************************************



     MENU DRIVEN PROGRAM FOR STACK AND QUEUE USING SINGLY LINKED LIST
***************************************************************************/
#include<stdio.h>

void stack(void);

void queue(void);

void push(void);

void pop(void);

void sdisplay(void);

void enq(void);

void deq(void);

void qdisplay(void);

void clearnode(void);

struct node
{
       int data;
       struct node *link;
}*top,*ptr,*next,*front,*rear;

int main()
{
    int op;
    do
    {
          printf("\nMENU\n");
    printf("1: STACK\n2: QUEUE\n3: EXIT\n");
    printf("Enter Your choice\n");
    scanf("%d",&op);
    switch(op)
    {
    case 1:stack();
            break;
    case 2:queue();
            break;
    case 3:exit(0);
    }
    }while(op!=3);
    
    return(0);
}
          //  STACK
void stack(void)
{
     int c;
     printf("enter first element of stack\n");
    top=(struct node *)malloc (sizeof(struct node));
    scanf("%d",&top->data);
    top->link=0;
    do
    {
     printf("\n STACK MENU \n 1.Push \n 2.Pop\n 3.Display\n 4.Quit \nEnter choice\n");
     scanf("%d",&c);
     switch(c)
     {
              case 1: push();break;
              case 2: pop(); break;
              case 3: sdisplay();break;
              case 4: return;
              }
              }while(c!=4);     
                    return;
}  
      //PUSH              
void push(void)
{
    next=(struct node  *)malloc(sizeof(struct node));
    printf("enter data\n");
    scanf("%d",&next->data);
    next->link=top;
    top=next;
     sdisplay();
  return;
}
      //POP    
void pop(void)
{
     ptr=top;
     if(top==0)
     {
                 printf("stack empty");
                 }
                 else
                 {
                     top=ptr->link;
                     free(ptr);
                     }
                     sdisplay();
                     return;
}
   //DISPLAY
void  sdisplay(void)
{
     ptr=top;
     if(top==0)
     printf("\nstack empty");
     else
     {
         printf("Stack: ");
         while(ptr!=0)
         {
                      printf("%d ",ptr->data);
                      ptr=ptr->link;
                      }
                      }
                      return;
}
         //   QUEUE
 void queue(void)
 {
      int d;
      rear=(struct node *)malloc(sizeof(struct node));
      printf("\nEnter first element of queue\n");
      scanf("%d",&rear->data);
      rear->link=0;
      front=rear;
      
  do 
   {
     printf("\n QUEUE MENU \n 1.Enque\n 2.Deque\n 3.Display\n 4.Quit\n Enter your choice\n");
      scanf("%d",&d);
      switch(d)
      {
       case 1: enq();break;
       case 2: deq();break;
       case 3: qdisplay();break;
       case 4: return;
       }    
       }while(d!=4);    
       return;
}
   //ENQUEUE
void enq(void)
{
    next=(struct node *)malloc(sizeof(struct node));
    printf("\nenter data");
    scanf("%d",&next->data);
    next->link=0;
    rear->link=next;
    rear=next;
    //ptr=front;
    //while(ptr->link!=0)
    //{
    //ptr=ptr->link;
    //}
    //ptr->link=next;
    qdisplay();
    return;
}
    //DEQUEUE
void deq(void)
{
     ptr=front;
     if(front==0)
     {
                 printf("queue empty");
                    
                 }
                 else
                 {
                     front=ptr->link;
                     free(ptr);
                     }
                   
                     qdisplay();
                     return;
}   
    //DISPLAY    
 void  qdisplay(void)
{
     ptr=front;
     if(front==0)
     printf("\nqueue empty");
     else
     {
         printf("Queue: ");
         while(ptr!=0)
         {
                      printf("%d ",ptr->data);
                      ptr=ptr->link;
                      }
                      }
                      return;
}                            


/**************************************************************************
                             OUTPUT        


MENU
1: STACK
2: QUEUE
3: EXIT
Enter Your choice
1
enter first element of stack
1

 STACK MENU
 1.Push
 2.Pop
 3.Display
 4.Quit
Enter choice
1
enter data
2
Stack: 2 1
 STACK MENU
 1.Push
 2.Pop
 3.Display
 4.Quit
Enter choice
1
enter data
3
Stack: 3 2 1
 STACK MENU
 1.Push
 2.Pop
 3.Display
 4.Quit
Enter choice
2
Stack: 2 1
 STACK MENU
 1.Push
 2.Pop
 3.Display
 4.Quit
Enter choice
2
Stack: 1
 STACK MENU
 1.Push
 2.Pop
 3.Display
 4.Quit
Enter choice
4

MENU
1: STACK
2: QUEUE
3: EXIT
Enter Your choice
2

Enter first element of queue
1

 QUEUE MENU
 1.Enque
 2.Deque
 3.Display
 4.Quit
 Enter your choice
1

enter data2
Queue: 1 2
 QUEUE MENU
 1.Enque
 2.Deque
 3.Display
 4.Quit
 Enter your choice
1

enter data3
Queue: 1 2 3
 QUEUE MENU
 1.Enque
 2.Deque
 3.Display
 4.Quit
 Enter your choice
2
Queue: 2 3
 QUEUE MENU
 1.Enque
 2.Deque
 3.Display
 4.Quit
 Enter your choice
2
Queue: 3
 QUEUE MENU
 1.Enque
 2.Deque
 3.Display
 4.Quit
 Enter your choice
4

MENU
1: STACK
2: QUEUE
3: EXIT
Enter Your choice
1
enter first element of stack
1

 STACK MENU
 1.Push
 2.Pop
 3.Display
 4.Quit
Enter choice
2

stack empty
 STACK MENU
 1.Push
 2.Pop
 3.Display
 4.Quit
Enter choice
4

MENU
1: STACK
2: QUEUE
3: EXIT
Enter Your choice
2

Enter first element of queue
1

 QUEUE MENU
 1.Enque
 2.Deque
 3.Display
 4.Quit
 Enter your choice
2

queue empty
 QUEUE MENU
 1.Enque
 2.Deque
 3.Display
 4.Quit
 Enter your choice
                                              

***************************************************************************/
