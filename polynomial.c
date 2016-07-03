/*****************************************************************************


			
                     PROGRAM FOR POLYNOMIAL ADDITION 
******************************************************************************/
#include<stdio.h>

struct element
       {
              int coeff;
              int exp;
       }p[20],q[20],r[20];
 
 int main()
      {
            int i,j,k,n1,n2;
           
            printf("\n\n\tEnter the number of terms in the first polynomial expression\n\n \t\t");
            scanf("%d",&n1);
            printf("\n\n\tEnter the number of terms in the second polynomial expression\n\n\t\t ");
            scanf("%d",&n2);
            printf("\n\n\tEnter the coefficients for the first polynomial \n\n\t\t");
            for(i=0;i<n1;i++)
                {
                    scanf("%d",&p[i].coeff);
                }
            printf("\n\n\tEnter the exponents of the first polynomial \n\n\t\t");
            for(i=0;i<n1;i++)
                {
                     scanf("%d",&p[i].exp);
                }    
            printf("\n\n\tEnter the coefficents for the second polynomial\n\n\t\t");
            for(j=0;j<n2;j++)
                {
                     scanf("%d",&q[j].coeff);         
                }          
            printf("\n\n\tEnter the exponents for the second polynomial\n\n\t\t");
            for(j=0;j<n2;j++)
               {
                      scanf("%d",&q[j].exp);
               }  
            i=0;
            j=0;
            k=0;
            while((i<n1)&&(j<n2))
                  {
                       if(p[i].exp==q[j].exp)
                             {
                                  r[k].exp=p[i].coeff;
                                  r[k].coeff=p[i].coeff+q[j].coeff;
                                  i++;
                                  j++;
                                  k++;
                                  
                             }
                       
                       else if(p[i].exp>q[j].exp)
                             {
                                  r[k].exp=p[i].exp;
                                  r[k].coeff=p[i].coeff;
                                  i++;
                                  k++;             
                             }      
                       else
                             {
                                    if(p[i].exp<q[j].exp)
                                          {
                                              r[k].exp=q[j].exp;          
                                              r[k].coeff=q[j].coeff;
                                              j++;
                                              k++;
                                          }     
                             }     
                  } 
           while(i<n1)
                  {
                     r[k].coeff=p[i].coeff;
                     r[k].exp=p[i].exp;
                     i++;
                     k++;
                  } 
          while(j<n2)
                  {
                     r[k].coeff=q[j].coeff;
                     r[k].exp=q[j].exp;
                     j++;
                     k++;  
                  } 
          
          printf("The resultend plynomial is\n\n\t\t");
          
          for(i=0;i<=k;i++)
            {
                  if(r[i].exp!=0)
                      {
                          printf("%dX^%d+",r[i].coeff,r[i].exp);
                      }    
                  else
                      {
                           printf("%d",r[i].coeff); 
                      }        
            } 
            
                             
      }      
/******


        Enter the number of terms in the first polynomial expression

                3


        Enter the number of terms in the second polynomial expression

                 3


        Enter the coefficients for the first polynomial

                1
2
3


        Enter the exponents of the first polynomial

                1
2
3


        Enter the coefficents for the second polynomial

                1
2
3


        Enter the exponents for the second polynomial

                1
2
3
The resultend plynomial is

                2X^1+4X^2+6X^3+0
*/
