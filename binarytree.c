/***************************************************************************************


                  BINARY TREE
***************************************************************************************/
#include<stdio.h>
#include<stdlib.h>
struct bt
{
       int data;
       struct bt *lc;
       struct bt *rc;
}*ptr,*root,*lcptr,*rcptr,*ptr1,*lcptr1,*rcptr1,root1;
void build(struct bt *ptr);
void search(struct bt *ptr,int);
void preorder(struct bt *ptr);
void inorder(struct bt *ptr);
void postorder(struct bt *ptr);
void mirrorimg(struct bt *ptr);
int flag;
int main()
{
    int op,item;
    root=(struct bt *)malloc(sizeof(struct bt));
    ptr=root;
    do
    {
    printf("\nMENU\n1.Build Tree\n2.Search\n3.Preorder Traverse\n4.Inorder Traverse\n5.Postorder Traverse\n6.mirror\n7.Exit\n");
    printf("enter your choice\n");
    scanf("%d",&op);
    switch(op)
    {
    case 1:build(ptr);
            break;
    case 2:printf("\nenter node to be searched\n");
            scanf("%d",&item);
            flag=0;
             search(root,item);
             if(flag==0)
             printf("item not present");
            break;
    case 3:printf("\nPreorder traversal:");
         preorder(root);
           break;
    case 4:printf("\nInorder traverse:");
         inorder(root);
           break;
    case 5:printf("Post order traverse:");
         postorder(root);
           break;
    case 6:ptr1=root;
            ptr=root;
           mirrorimg(root);
           preorder(root);
           break;
    case 7:exit(0);
    }
    }while(op!=7);
     return 0;
}
       //CREATION OF BINARY TREE
void build(struct bt *ptr)
{
     char ch,c;
     if(ptr!=0)
     {
               printf("\nenter data\n");
               scanf("%d",&ptr->data);
               printf("\nnode has a left subtree(y/n)?");
                      scanf("%c",&ch);
                     //printf("%c",ch);
                      
                      if((ch=='y')||(ch=='Y'))
                      {
                       lcptr=(struct bt *)malloc(sizeof(struct bt));
                                   ptr->lc=lcptr;
                                    build(lcptr);
                     }
                     else
                     {
                       lcptr=0;
                       ptr->lc=0;
                       build(lcptr);
                       }
               printf("\nnode has a right subtree(y/n)?");
                      scanf("%c",&c);
                    //  printf("%c",c);
                       if((c=='y')||(c=='Y'))
                       {
                       rcptr=(struct bt *)malloc(sizeof(struct bt));
                       ptr->rc=rcptr;
                       build(rcptr);
                       }
                       else
                       {
                        rcptr=0;
                        ptr->rc=0;
                        build(rcptr);
                        }
                        }
          return;
}
        //SEARCH AN ITEM IN BINARY TREE
void search(struct bt *ptr,int item)
{

     if((ptr!=0)&&flag==0)
     {
          if(ptr->data==item)
          {
               flag=1;
          printf("item present");
               }
          else
          {
              search(ptr->lc,item);
              search(ptr->rc,item);
              }
     }
     return ;
}
       //PREORDR TRAVERSAL
void preorder(struct bt *ptr)
{
     if(ptr!=0)
    {
              printf("%d ",ptr->data);
              preorder(ptr->lc);
              preorder(ptr->rc);
              }
    return;
}
       //INORDER TRAVERSAL
void inorder(struct bt *ptr)
{
     if(ptr!=0)
     {
               inorder(ptr->lc);
               printf("%d ",ptr->data);
               inorder(ptr->rc);
               }
     return;
}
      //POSTORDER TRAVERSAL
void postorder(struct bt *ptr)
{
      if(ptr!=0)
     {
               postorder(ptr->lc);
               postorder(ptr->rc);
               printf("%d ",ptr->data);
               }
     return;
}
void mirrorimg(struct bt *ptr)
{
      if(ptr->lc!=0)
       {
        rcptr1=(struct bt *)malloc(sizeof(struct bt));
        rcptr1=ptr->lc;
        ptr1->rc=rcptr1;
        mirrorimg(ptr->lc);
        }
        else
        {
            rcptr1=0;
            ptr1->rc=0;
            }
        if(ptr->rc!=0)
        {
                      lcptr1=(struct bt *)malloc(sizeof(struct bt));
                      lcptr1=ptr->rc;
                      ptr1->lc=lcptr1;
                      }
        else
        {
            lcptr1=0;
            ptr1->lc=0;
            }
         return;
}
        
     
/*************************************OUTPUT************************************
MENU
1.Build Tree
2.Search
3.Preorder Traverse
4.Inorder Traverse
5.Postorder Traverse
6.Exit
enter your choice
1
enter data
5
node has a left subtree(y/n)?y
enter data
4
node has a left subtree(y/n)?y
enter data
1
node has a left subtree(y/n)?n
node has a right subtree(y/n)?n
node has a right subtree(y/n)?y
enter data
3
node has a left subtree(y/n)?n
node has a right subtree(y/n)?n
node has a right subtree(y/n)?y
enter data
9
node has a left subtree(y/n)?y
enter data
6
node has a left subtree(y/n)?n
node has a right subtree(y/n)?n
node has a right subtree(y/n)?y
enter data
8
node has a left subtree(y/n)?n
node has a right subtree(y/n)?n

MENU
1.Build Tree
2.Search
3.Preorder Traverse
4.Inorder Traverse
5.Postorder Traverse
6.Exit
enter your choice
3
Preorder traversal:5 4 1 3 9 6 8

 MENU
1.Build Tree
2.Search
3.Preorder Traverse
4.Inorder Traverse
5.Postorder Traverse
6.Exit
enter your choice
4
Inorder traverse:1 4 3 5 6 9 8 

MENU
1.Build Tree
2.Search
3.Preorder Traverse
4.Inorder Traverse
5.Postorder Traverse
6.Exit
enter your choice
5
Post order traverse:1 3 4 6 8 9 5 

MENU
1.Build Tree
2.Search
3.Preorder Traverse
4.Inorder Traverse
5.Postorder Traverse
6.Exit
enter your choice
2

enter node to be searched
6
item present

MENU
1.Build Tree
2.Search
3.Preorder Traverse
4.Inorder Traverse
5.Postorder Traverse
6.Exit
enter your choice
2

enter node to be searched
2
item not present

MENU
1.Build Tree
2.Search
3.Preorder Traverse
4.Inorder Traverse
5.Postorder Traverse
6.Exit
enter your choice
6
*/
               
              
               
         
               
    
            
