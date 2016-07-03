/**********************************************************************


                 GRAPH
********************************************************************/
#include<stdio.h>
void bfs(int);
void dfs(int);
int adj[20][20],visit[20],vis[20];
int n;


int main()
{
    int i,j,op,v;
    printf("enter total no of vertices\n");
    scanf("%d",&n);
    printf("\nenter the adjacency matrix\n");
    for(i=1;i<=n;i++)
    {
         for(j=1;j<=n;j++)
         {
            scanf("%d",&adj[i][j]);
         }
         }
         printf("\nAdjacency matrix\n");
         for(i=1;i<=n;i++)
         {
            for(j=1;j<=n;j++)
            {
                printf("%d  ",adj[i][j]);
            }
            printf("\n");
         }
         do
         {
         printf("\nMENU\n1.BFS\n2.DFS\n3.EXIT\n");
         printf("\nenter your choice");
         scanf("%d",&op);
         switch(op)
         {
         case 1:printf("\nenter starting node\n");
                scanf("%d",&v);
                for(i=1;i<=n;i++)
                 {
                  visit[i]=0;
                  }
                printf("\ngraph:");
                bfs(v);
                break;
         case 2:printf("\nenter starting node\n");
                scanf("%d",&v);
                for(i=1;i<=n;i++)
                {
                vis[i]=0;
                }
                printf("\ngraph:");
                dfs(v);
                break;
         case 3:exit(0);
         }
         }while(op!=3);
         return 0;
}
         //BREADTH FIRST SEARCH-BFS
void bfs(int v)
{
    
    int q[20],i;
    int front=-1;
    int rear=-1;
    printf("%d  ",v);
    visit[v]=1;
    rear=rear+1;
    front=front+1;
    q[rear]=v;
    q[front]=v;
    while(front<=rear)
    {
          v=q[front];
          front=front+1;
          for(i=1;i<=n;i++)
          {
             if((adj[v][i]==1)&&(visit[i]==0))
             {
                  printf("%d  ",i);
                  visit[i]=1;
                  rear=rear+1;
                  q[rear]=i;
                  }
                  }
                  }
                  return;
}
       //DEPTH FIRST SEARCH-DFS
void dfs(int v)
{
     int i,u;
     int top=-1;
     int s[20];
     top=top+1;
     s[top]=v;
     while(top>=0)
     {
          u=s[top];
          top=top-1;
          if(vis[u]==0)
          {
              printf("%d  ",u);
              vis[u]=1;
              }
          for(i=1;i<=n;i++)
          {
               if(adj[u][i]==1&&vis[i]==0)
               {
                     top=top+1;
                     s[top]=i;
                     }
                     }
                     }
               return;
}
/***********************OUTPUT************************************
enter total no of vertices
7
enter the adjacency matrix
0
1
0
0
1
0
0
1
0
1
0
0
1
0
0
1
0
1
0
0
1
0
0
1
0
0
0
1
1
0
0
0
0
1
0
0
1
0
0
1
0
1
0
0
1
1
0
1
0

Adjacency matrix
0  1  0  0  1  0  0
1  0  1  0  0  1  0
0  1  0  1  0  0  1
0  0  1  0  0  0  1
1  0  0  0  0  1  0
0  1  0  0  1  0  1
0  0  1  1  0  1  0

MENU
1.BFS
2.DFS
3.EXIT
enter your choice
1
enter starting node
1
graph:1  2  5  3  6  4  7

MENU
1.BFS
2.DFS
3.EXIT
enter your choice
2
enter starting node
1
graph:1  5  6  7  4  3  2

MENU
1.BFS
2.DFS
3.EXIT
enter your choice
1
enter starting node
2
graph:2  1  3  6  5  4  7

MENU
1.BFS
2.DFS
3.EXIT
enter your choice
2
enter starting node
3

graph:3  7  6  5  1  2  4
MENU
1.BFS
2.DFS
3.EXIT
enter your choice
3
*/
     
                  
     
                 
         
                                    
