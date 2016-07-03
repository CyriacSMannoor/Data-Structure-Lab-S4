/************************************************************************************************************


                         CIRCULAR QUEUE
*************************************************************************************************************/
#include<stdio.h>
void encq(void);
void decq(void);
void display(void);
int a[8];
int front=-1,rear=-1,n;
int main()
{
     int c;
     printf("enter size of circular queue\n");
     scanf("%d",&n);
     do
     {
     printf("\nMENU\n1.ENCQ\n2.DECQ\n3.DISPLAY\n4.EXIT\n");
     printf("enter your choice\n");
     scanf("%d",&c);
     switch(c)
     {
     case 1:encq();
             break;
     case 2:decq();
             break;
     case 3:display();
             break;
     case 4:break;
     }
     }while(c!=4);
     scanf("%d",&c);
     
}
void encq(void)
{
     int b;
     printf("\nenter the element to be inserted\n");
     scanf("%d",&b);
     if(front==(rear+1)%n)
     {
                         printf("\ncq full");
                         }
                         else
                         {
                             rear=(rear+1)%n;
                             a[rear]=b;
                             if(front==-1)
                             front=0;
                             }
     display();
}
void decq(void)
{
     int b;
     if(front==-1&&rear==-1)
     printf("\ncq empty");
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
                            front=(front+1)%n;
                            }
                            }
         display();
}
void display(void)
{
     int i;
     if(front==-1&&rear==-1)
     printf("\ncq empty");
     else
     {
         printf("\n cq is ");
         if(front<=rear)
         {
                        for(i=front;i<=rear;i++)
                        printf("%d ",a[i]);
                        }
                        else
                        {
                            for(i=front;i<=(n-1);i++)
                            printf("\n%d",a[i]);
                            for(i=0;i<=rear;i++)
                            printf("\n%d",a[i]);
                            }
                            }
}

 /***********************************OUTPUT*********************************************
enter size of circular queue
4

MENU
1.ENCQ
2.DECQ
3.DISPLAY
4.EXIT
enter your choice
1

enter the element to be inserted
5

 cq is
5
MENU
1.ENCQ
2.DECQ
3.DISPLAY
4.EXIT
enter your choice
1

enter the element to be inserted
6

 cq is
5
6
MENU
1.ENCQ
2.DECQ
3.DISPLAY
4.EXIT
enter your choice
1

enter the element to be inserted
7

 cq is
5
6
7
MENU
1.ENCQ
2.DECQ
3.DISPLAY
4.EXIT
enter your choice
1

enter the element to be inserted
8

 cq is
5
6
7
8
MENU
1.ENCQ
2.DECQ
3.DISPLAY
4.EXIT
enter your choice
1

enter the element to be inserted
9

cq full
 cq is
5
6
7
8
MENU
1.ENCQ
2.DECQ
3.DISPLAY
4.EXIT
enter your choice
2

 cq is
6
7
8
MENU
1.ENCQ
2.DECQ
3.DISPLAY
4.EXIT
enter your choice
2

 cq is
7
8
MENU
1.ENCQ
2.DECQ
3.DISPLAY
4.EXIT
enter your choice
2

 cq is
8
MENU
1.ENCQ
2.DECQ
3.DISPLAY
4.EXIT
enter your choice
2

cq empty
MENU
1.ENCQ
2.DECQ
3.DISPLAY
4.EXIT
enter your choice
2

cq empty
cq empty
MENU
1.ENCQ
2.DECQ
3.DISPLAY
4.EXIT
enter your choice
1

enter the element to be inserted
5

 cq is
5
MENU
1.ENCQ
2.DECQ
3.DISPLAY
4.EXIT
enter your choice
1

enter the element to be inserted
3

 cq is
5
3
MENU
1.ENCQ
2.DECQ
3.DISPLAY
4.EXIT
enter your choice
3

 cq is
5
3
MENU
1.ENCQ
2.DECQ
3.DISPLAY
4.EXIT
enter your choice
4
*/    
