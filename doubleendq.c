/*****************************************************************************


			
                   MENU DRIVEN PROGRAM FOR DOUBLEENDED QUEUE
******************************************************************************/
#include<stdio.h>
void infr(void);
void defr(void);
void inre(void);
void dere(void);
void display(void);
int a[100];
int front=-1,rear=-1,n;
int main()
{
          int c;
          printf("\n\nenter the size of double ended queue\n\n");
          scanf("%d",&n);
          do
          {
          printf("\nMENU\n\n1.INFRONT\n\n2.DEFRONT\n\n3.INREAR\n\n4.DEREAR\n\n5.DISPLAY\n\n6.EXIT\n\n");
          printf("\n\nEnter your choice\n\n");
          scanf("%d",&c);
          switch(c)
              {
                      case 1:infr();
                              break;
                      case 2:defr();
                              break;
                      case 3:inre();
                              break;
                      case 4:dere();
                              break;
                      case 5:display();
                              break;
                      case 6:return;
              }
          }while(c!=6);
          
}
void infr(void)
{
               int b,i;
               printf("\n\n\nEnter element to be inserted\n\n\n");
               scanf("%d",&b);
               if(front==0&&rear==(n-1))
                  {
                     printf("\n\n\nDouble Ended Queue is full\n\n\n");
                  }
               else
               {
                   if(front==-1&&rear==-1)
                   {
                        front=0;
                        rear=0;
                        a[front]=b;
                   }
                        else
                        {
                            if(front==0&&rear<(n-1))
                            {
                                for(i=rear;i>=0;i--)
                                a[i+1]=a[i];
                                rear=rear+1;
                                a[front]=b;
                            }
                            else
                              {
                                front=front-1;
                                a[front]=b;
                              }
                        }
               }
                   display();
}
void defr(void)
{
     int b;
     if(front==-1&&rear==-1)
        printf("\n\n\nDouble Ended Queue is empty\n\n\n");
     else
     {
         b=a[front];
         if(front==rear)
         {
                        front=-1;
                        rear=-1;
                        }
                        else
                        {
                            front=front+1;
                            }
                            }
     display();
}
void inre(void)
{
     int b,i;
     printf("\n\n\nEnter element to be inserted\n\n\n");
     scanf("%d",&b);
     if(front==0&&rear==(n-1))
        {
            printf("\n\n\nDouble Ended Queue is full\n\n\n");
        }
     else
     {
         if(front==-1&&rear==-1)
             {
                    front=0;
                    rear=0;
                    a[rear]=b;
              }
         else
              {
                    if(front>0&&rear==(n-1))
                          {
                               for(i=front;i<=rear;i++)
                                       {
                                            a[i-1]=a[i];
                                       }
                                front=front-1;
                                a[rear]=b;
                          }
                   else
                          {
                                rear=rear+1;
                                a[rear]=b;
                          }
              }
     }
     display();
}
void dere(void)
{
     int b;
     if(front==-1&&rear==-1)
     printf("\n\n\nDouble Ended Queue is empty\n\n\n");
     else
     {
         b=a[rear];
         if(front==rear)
             {
                  front=-1;
                  rear=-1;
             }
         else
             {
                  rear=rear-1;
             }
         display();
     }   
}
void display(void)
{
     int i;
     if(front==-1&&rear==-1)
          {
              printf("\n\n\nDouble Ended Queue is empty\n\n\n");
          } 
     else
          {
              printf("\n Double Ended Queue is\n\n\n");
              for(i=front;i<=rear;i++)
              printf("%d",a[i]);
          }
     
}
                             
/**************************************************************************
                                OUTPUT

enter the size of double ended queue

7

MENU

1.INFRONT

2.DEFRONT

3.INREAR

4.DEREAR

5.DISPLAY

6.EXIT



Enter your choice

1



Enter element to be inserted


2

 Double Ended Queue is


2
MENU

1.INFRONT

2.DEFRONT

3.INREAR

4.DEREAR

5.DISPLAY

6.EXIT



Enter your choice

1



Enter element to be inserted


2

 Double Ended Queue is


22
MENU

1.INFRONT

2.DEFRONT

3.INREAR

4.DEREAR

5.DISPLAY

6.EXIT



Enter your choice

1



Enter element to be inserted


3

 Double Ended Queue is


322
MENU

1.INFRONT

2.DEFRONT

3.INREAR

4.DEREAR

5.DISPLAY

6.EXIT



Enter your choice

2

 Double Ended Queue is


22
MENU

1.INFRONT

2.DEFRONT

3.INREAR

4.DEREAR

5.DISPLAY

6.EXIT



Enter your choice

3



Enter element to be inserted


3

 Double Ended Queue is


223
MENU

1.INFRONT

2.DEFRONT

3.INREAR

4.DEREAR

5.DISPLAY

6.EXIT



Enter your choice

3



Enter element to be inserted


4

 Double Ended Queue is


2234
MENU

1.INFRONT

2.DEFRONT

3.INREAR

4.DEREAR

5.DISPLAY

6.EXIT



Enter your choice

4

 Double Ended Queue is


223
MENU

1.INFRONT

2.DEFRONT

3.INREAR

4.DEREAR

5.DISPLAY

6.EXIT



Enter your choice

4

 Double Ended Queue is


22
MENU

1.INFRONT

2.DEFRONT

3.INREAR

4.DEREAR

5.DISPLAY

6.EXIT



Enter your choice

4

 Double Ended Queue is


2
MENU

1.INFRONT

2.DEFRONT

3.INREAR

4.DEREAR

5.DISPLAY

6.EXIT



Enter your choice

4



Double Ended Queue is empty



MENU

1.INFRONT

2.DEFRONT

3.INREAR

4.DEREAR

5.DISPLAY

6.EXIT



Enter your choice





*************************************************************************/
