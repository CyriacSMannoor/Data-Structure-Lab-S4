/*****************************************************************************


			
               PROGRAM FOR INFIX TO POSTFIX CONVERSION
******************************************************************************/
#include<stdio.h>
#include<string.h>
const int max=20;
void push(char);
char pop(void);
int isop(char);
int preced(char);
int top=-1;
char inexp[20],postexp[20],s[20];
char a;
int main()
{
    int i=0,j=0,x,item;
    printf("enter infix expression\n");
    gets(inexp);
   // puts(inexp);
    item=inexp[i];i++;
    while(item!='\0')
    {
                  if(item=='(')
                  {
                               push(item);
                               }
                  else if((item>='A'&&item<='Z')||(item>='a'&&item<='z'))
                  {
                       postexp[j]=item;j++;
                       }
                  else if(isop(item)==1)
                  {
                       x=pop();
                     while(isop(x)==1&&(preced(x)>=preced(item)))
                     {
                          postexp[j]=x;j++;
                          x=pop();
                          }
                         push(x);
                         push(item);
                         }
                  else if(item==')')
                  {
                                   x=pop();
                                   while(x!='(')
                                   {
                                                postexp[j]=x;
                                                j++;
                                                x=pop();
                                                }
                                                }
                      else
                      {
                          printf("\ninvalid arithmetic expression");
                          }
                  item=inexp[i];
                  i++;
                  }
                  x=pop();
                  while(x!='a')
                  {
                               postexp[j]=x;
                               j++;
                               x=pop();
                               }
                  postexp[j++]='\0';
                  printf("\npostfix expression\n");
                  puts(postexp);
                  getch();
                  return 0;
}
void push(char c)
{
     
     if(top>=(max-1))
     {
                  }
     else
     {
         top=top+1;
         s[top]=c;
         }
         return;
}
char pop(void)
{
     char item;
     if(top<=-1)
     {
                return('a');
                }
                else
                {
                    item=s[top];
                    s[top]=0;
                    top=top-1;
                    }
              return(item);
}
int isop(char symb)
{
    if(symb=='^'||symb=='*'||symb=='/'||symb=='+'||symb=='-')
    return(1);
    else
    return(0);
}
int preced(char symb)
{
    if(symb=='^')
    return(3);
    else if(symb=='*'||symb=='/')
    return(2);
    else if(symb=='+'||symb=='-')
    return(1);
    else
    return(0);
}               
                          
  /*****
enter infix expression
(d+r*t+q)

postfix expression
drt*+q+


enter infix expression
h/f*d-w+(d/f*g+e)

postfix expression
hf/d*w-df/g*e++

  
 ****** */  

