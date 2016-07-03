/*******************************************************************************

                BINARY SEARCH TREE
********************************************************************************/
#include<stdio.h>
struct bst
{
       int data;
       struct bst *lc;
       struct bst *rc;
}*ptr,*ptr1,*root,*next,*parent;
void ins(struct bst *ptr,int);
void search(struct bst *ptr,int);
void pre(struct bst *ptr);
void in(struct bst *ptr);
void post(struct bst *ptr);
void del(int);
struct bst * succ(struct bst *ptr);
int flag;
int item;
int main()
{
    int op;
    root=(struct bst*)malloc(sizeof(struct bst));
    root->data=0;
    do
    {
    printf("\nMENU\n1.Insertion\n2.Search\n3.Preorder traverse\n4.Inorder traverse\n5.Postorder traverse\n6.Deletion\n7.Exit\n");
    printf("enter your choice\n");
    scanf("%d",&op);
    switch(op)
    {
    case 1:printf("enter item to be inserted\n");
           scanf("%d",&item);
           flag=0;
           ins(root,item);
           break;
    case 2:printf("enter item to be searched\n");
           scanf("%d",&item);
           flag=0;
           search(root,item);
           break;
    case 3:printf("\npreorder:");
           pre(root);
           break;
    case 4:printf("\ninorder:");
           in(root);
            break;
    case 5:printf("postorder:");
           post(root);
            break;
    case 6:printf("\nenter item to be deleted\n");
           scanf("%d",&item);
           del(item);
           break;
    case 7:exit(0);
         }
         }while(op!=7);
         return(0);
}
           //INSERTION
void ins(struct bst *ptr,int item)
{
     if(ptr->data==0)
     {
        ptr->data=item;
        ptr->lc=0;
        ptr->rc=0;
        }
     else
     {
         while((ptr!=0)&&(flag==0))
         {
            if(item<ptr->data)
            {
              ptr1=ptr;
              ptr=ptr->lc;
              }
            else if(item>ptr->data)
            {
               ptr1=ptr;
               ptr=ptr->rc;
               }
            else
            {
                flag=1;
                printf("item already exist");
                }
                }
                }
     if(ptr==0)
     {
               next=(struct bst *)malloc(sizeof(struct bst));
               next->data=item;
               next->lc=0;
               next->rc=0;
               if(ptr1->data<item)
                 ptr1->rc=next;
               else
                  ptr1->lc=next;
                  }
    return;
}
     //SEARCH
void search(struct bst *ptr,int item)
{
     while((ptr!=0)&&(flag==0))
     {
           if(item<ptr->data)
           ptr=ptr->lc;
           else if(item>ptr->data)
           ptr=ptr->rc;
           else
           flag=1;
           }
     if(flag==1)
     printf("\nitem is present");
     else
     printf("\nitem not present");
     return;
}
       //PREORDER TRAVERSE
void pre(struct bst *ptr)
{
     if(ptr!=0)
     {
               printf("%d ",ptr->data);
               pre(ptr->lc);
               pre(ptr->rc);
               }
     return;
}
        //INORDER TRAVERSE
void in(struct bst *ptr)
{
     if(ptr!=0)
     {
               in(ptr->lc);
               printf("%d ",ptr->data);
               in(ptr->rc);
               }
     return;
}
       //POSTORDER TRAVERSE
void post(struct bst *ptr)
{
     if(ptr!=0)
     {
               post(ptr->lc);
               post(ptr->rc);
               printf("%d ",ptr->data);
               }
     return;
}
       //DELETION
void del(int item)
{    struct bst *temp;
     int  c,item1;
     ptr=root;
     flag=0;
     while((ptr!=0)&&(flag==0))
     {
          if(item<ptr->data)
          {
             parent=ptr;
             ptr=ptr->lc;
             }
          else if(item>ptr->data)
          {
               parent=ptr;
               ptr=ptr->rc;
               }
          else
          {
              flag=1;
              }
              }
     if(flag==0)
     {
     printf("\nitem does not exist");
     }
     else
     {
     if((ptr->lc==0)&&(ptr->rc==0))
     {
         c=1;
         }
     else if((ptr->lc!=0)&&(ptr->rc!=0))
     {
          c=3;
          temp=ptr;
          
          }
     else
     {
         c=2;
         }
     if(c==1)
     {
             if(parent->lc==ptr)
             parent->lc=0;
             else
             parent->rc=0;
             }
     if(c==2)
     {
          if(parent->lc==ptr)
          {
              if(ptr->lc==0)
              {
                parent->lc=ptr->rc;
                }
              else
              {
                  parent->lc=ptr->lc;
                  }
                  }
          else
          {
              if(parent->rc==ptr)
              {
                 if(ptr->lc==0)
                 {
                    parent->rc=ptr->rc;
                    }
                 else
                 {
                     parent->rc=ptr->lc;
                     }
                     }
                     }
                     } 
         if(c==3)
         {
                 ptr1=succ(ptr);
                 item1=ptr1->data;
                 del(item1);
                 temp->data=item1;
                 }
                 }
                 return;
}
         //INORDER SUCCESSOR
struct bst * succ(struct bst *ptr)
{
       struct bst *tptr;
       tptr=ptr->rc;
       if(tptr!=0)
       {
             while(tptr->lc!=0)
             {
             tptr=tptr->lc;
             }
             }
         return(tptr);
}
           
/********************************OUTPUT**********************************
 
MENU
1.Insertion
2.Search
3.Preorder traverse
4.Inorder traverse
5.Postorder traverse
6.Deletion
7.Exit
enter your choice
1
enter item to be inserted
10

MENU
1.Insertion
2.Search
3.Preorder traverse
4.Inorder traverse
5.Postorder traverse
6.Deletion
7.Exit
enter your choice
1
enter item to be inserted
5

MENU
1.Insertion
2.Search
3.Preorder traverse
4.Inorder traverse
5.Postorder traverse
6.Deletion
7.Exit
enter your choice
1
enter item to be inserted
11

MENU
1.Insertion
2.Search
3.Preorder traverse
4.Inorder traverse
5.Postorder traverse
6.Deletion
7.Exit
enter your choice
1
enter item to be inserted
15

MENU
1.Insertion
2.Search
3.Preorder traverse
4.Inorder traverse
5.Postorder traverse
6.Deletion
7.Exit
enter your choice
1
enter item to be inserted
12

MENU
1.Insertion
2.Search
3.Preorder traverse
4.Inorder traverse
5.Postorder traverse
6.Deletion
7.Exit
enter your choice
6

enter item to be deleted
11

MENU
1.Insertion
2.Search
3.Preorder traverse
4.Inorder traverse
5.Postorder traverse
6.Deletion
7.Exit
enter your choice
3

preorder:10 5 15 12
MENU
1.Insertion
2.Search
3.Preorder traverse
4.Inorder traverse
5.Postorder traverse
6.Deletion
7.Exit
enter your choice
4

inorder:5 10 12 15
MENU
1.Insertion
2.Search
3.Preorder traverse
4.Inorder traverse
5.Postorder traverse
6.Deletion
7.Exit
enter your choice
5
postorder:5 12 15 10
MENU
1.Insertion
2.Search
3.Preorder traverse
4.Inorder traverse
5.Postorder traverse
6.Deletion
7.Exit
enter your choice
6

enter item to be deleted
15

MENU
1.Insertion
2.Search
3.Preorder traverse
4.Inorder traverse
5.Postorder traverse
6.Deletion
7.Exit
enter your choice
4

inorder:5 10 12
MENU
1.Insertion
2.Search
3.Preorder traverse
4.Inorder traverse
5.Postorder traverse
6.Deletion
7.Exit
enter your choice
2
enter item to be searched
12

item is present
MENU
1.Insertion
2.Search
3.Preorder traverse
4.Inorder traverse
5.Postorder traverse
6.Deletion
7.Exit
enter your choice
2
enter item to be searched
6

item not present
MENU
1.Insertion
2.Search
3.Preorder traverse
4.Inorder traverse
5.Postorder traverse
6.Deletion
7.Exit
enter your choice
6

enter item to be deleted
12

MENU
1.Insertion
2.Search
3.Preorder traverse
4.Inorder traverse
5.Postorder traverse
6.Deletion
7.Exit
enter your choice
4

inorder:5 10
MENU
1.Insertion
2.Search
3.Preorder traverse
4.Inorder traverse
5.Postorder traverse
6.Deletion
7.Exit
enter your choice
6

enter item to be deleted
10

MENU
1.Insertion
2.Search
3.Preorder traverse
4.Inorder traverse
5.Postorder traverse
6.Deletion
7.Exit
enter your choice
4

inorder:5
MENU
1.Insertion
2.Search
3.Preorder traverse
4.Inorder traverse
5.Postorder traverse
6.Deletion
7.Exit
enter your choice
6
enter item to be deleted 
5
 
MENU
1.Insertion
2.Search
3.Preorder traverse
4.Inorder traverse
5.Postorder traverse
6.Deletion
7.Exit
enter your choice
4

inorder:Binary search tree is empty        
MENU
1.Insertion
2.Search
3.Preorder traverse
4.Inorder traverse
5.Postorder traverse
6.Deletion
7.Exit
enter your choice
7
*/               
               
     
               
         
