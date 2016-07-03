/**************************************************************************


		   MENU DRIVEN PROGRAM FOR STACK AND QUEUE USING ARRAY
***************************************************************************/
#include<stdio.h>

#include<conio.h>

int top=-1;

int rear=-1;

int front=-1;

int max;

int size;

int s[20];

int q[30];

void stack(void);

void queue(void);

void push(void);

void pop(void);

void sdisplay(void);

void enq(void);

void deq(void);

void qdisplay(void);

int main()
{     
      int a,n;

      do
      {
           printf("\n \n\tMain Menu \n\n ");
           printf("\n \n\t\t 1.stack \n\n ");
           printf("\n \n\t\t 2.queue \n\n ");
           printf("\n \n\t\t 3.quit  \n\n ");
           printf("\n \n\t  Enter your choice \n\n ");
           scanf("%d",&n);
           switch(n)
           {
                     case 1: stack();
                             break;
                     case 2: queue();
                             break;
                     case 3: exit(1);
           }
                     a--;
      }while(1);
   getch();
} 



void stack(void)
   {
         int l;
    printf("\n Enter the size of stack \n");
    scanf("%d",&max);
    do
      { 
           printf("\n \n\tStack menu \n\n");
           printf("\n \n\t\t1.push\n\n"); 
           printf("\n \n\t\t2.pop \n\n"); 
           printf("\n \n\t\t3.display \n\n"); 
           printf("\n \n\t\t4.quit \n\n"); 
            printf("\n \nenter choice \n\n"); 
             
            scanf("%d",&l);
        switch(l)
         {
              case 1: push();
                      break;
              case 2: pop(); 
                      break;
              case 3: sdisplay();
                      break;
              case 4: return;
         }
      }while(1);      
       return;
   }            
   
   
                          
             void push(void)
             {
                   int f;
                   printf("\n Enter the item to be entered\n");
                   scanf("%d",&f);
                   
                   if(top==max-1)
                   {
                                printf("\n stack overflow\n");
                   }
                   else
                      {     
                            top=top+1;
                            
                            s[top]=f;
                      }
                   sdisplay();
                   return;
             } 
             
             
                            
              void pop(void)
              {   
                    int w;
                    if(top==-1)
                      {
                           printf("\nstack is empty\n" );
                      }
                    else
                      {
                           w=s[top];
                           top=top-1;                                                
                      }
                      
                  sdisplay();
                  return;
             }
          
          
          
              void sdisplay(void)
                  { 
                      int i;
                      if(top==-1)
                          {
                              printf("\n stack is empty\n");
                          }
                      else
                          {
                              printf("\nThe stack is\n");
                              for( i=top;i>=0;i--)
                                   { 
                                       printf("%d\n",s[i]);
                                    }
                         }
                      return;
                }
                
                
                
                void queue(void)
                     { 
                          printf("\n Enter the size of queue \n");
                          scanf("%d",&size);
                          
                          int k;
                          do
                            {
                                printf("\n \n \t Queue menu \n \n");
                                printf("\n \n \t \t 1.insert \n \n");
                                printf("\n \n \t \t 2.delete\n");
                                printf("\n \n \t \t  3.display\n");
                                printf("\n \n \t \t  4.quit\n");
                                printf("\n \n \t \t Enter your choice\n");
                                scanf("%d",&k);
                             switch(k)
                                {
                                      case 1: enq();
                                               break;
                                      case 2: deq();
                                              break;
                                      case 3: qdisplay();
                                              break;
                                      case 4: return;
                                 }    
                            }while(1);    
                           return;
                     }
                     
                     
                                void enq(void)
                                       { 
                                              int z;
                                              
                                              printf("\nenter the item to be entered\n");
                                              scanf("%d",&z);
                                              
                                              if(rear==size-1)
                                                   {
                                                         printf("\n queue is full\n");
                                                   }
                                              else
                                                    {
                                                         
                                                        if(rear==-1&&front==-1)
                                                             {
                                                               front=0;
                                                             }            
                                                        rear=rear+1;
                                                        q[rear]=z; 
                                                        
                                                    }
                                              qdisplay();
                                               return;
                                     }
                                                
                                                
                  void deq(void)
                  {
                       int x;
                       
                        if(front==-1)
                        
                        printf("\n queue is empty\n");
                        else
                        {
                             x=q[front];
                             
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
                      qdisplay();
                      
                      return;
                      }
                      
    void qdisplay(void)
           {  
                int m;
                
                if(front==-1)
                
                     {
                         printf("\n queue is empty\n");
                     }
                else
                     {
                         printf("\n queue is\n");
                         
                         for(m=front;m<=rear;m++)
                         
                              {
                                 printf("%d\n",q[m]);
                              }
                     }          
                return;
           }                    
                                                                                                                                     
/*************** OUTPUT  *************************************




        Main Menu



                 1.stack



                 2.queue



                 3.quit



          Enter your choice

 1

 Enter the size of stack
3


        Stack menu



                1.push



                2.pop



                3.display



                4.quit



enter choice

1

 Enter the item to be entered
1

The stack is
1


        Stack menu



                1.push



                2.pop



                3.display



                4.quit



enter choice

1

 Enter the item to be entered
2

The stack is
2
1


        Stack menu



                1.push



                2.pop



                3.display



                4.quit



enter choice

1

 Enter the item to be entered
3

The stack is
3
2
1


        Stack menu



                1.push



                2.pop



                3.display



                4.quit



enter choice

2

The stack is
2
1


        Stack menu



                1.push



                2.pop



                3.display



                4.quit



enter choice

2

The stack is
1


        Stack menu



                1.push



                2.pop



                3.display



                4.quit



enter choice

3

The stack is
1


        Stack menu



                1.push



                2.pop



                3.display



                4.quit



enter choice

4



        Main Menu



                 1.stack



                 2.queue



                 3.quit



          Enter your choice

 2

 Enter the size of queue
4


         Queue menu



                 1.insert



                 2.delete


                  3.display


                  4.quit


                 Enter your choice
1

enter the item to be entered
1

 queue is
1


         Queue menu



                 1.insert



                 2.delete


                  3.display


                  4.quit


                 Enter your choice
1

enter the item to be entered
2

 queue is
1
2


         Queue menu



                 1.insert



                 2.delete


                  3.display


                  4.quit


                 Enter your choice
1

enter the item to be entered
3

 queue is
1
2
3


         Queue menu



                 1.insert



                 2.delete


                  3.display


                  4.quit


                 Enter your choice
1

enter the item to be entered
4

 queue is
1
2
3
4


         Queue menu



                 1.insert



                 2.delete


                  3.display


                  4.quit


                 Enter your choice
1

enter the item to be entered
2

 queue is full

 queue is
1
2
3
4


         Queue menu



                 1.insert



                 2.delete


                  3.display


                  4.quit


                 Enter your choice
2

 queue is
2
3
4


         Queue menu



                 1.insert



                 2.delete


                  3.display


                  4.quit


                 Enter your choice
2

 queue is
3
4


         Queue menu



                 1.insert



                 2.delete


                  3.display


                  4.quit


                 Enter your choice
4


        Main Menu



                 1.stack



                 2.queue



                 3.quit



          Enter your choice

       


*************************************************************/
