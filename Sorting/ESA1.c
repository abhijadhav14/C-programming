#include<stdio.h>
#include<stdlib.h>

int main()
{
   int W[15][15],D[15][15];
   int i,j,k,m,n;
   int sum=0;
   printf("\n Enter the size of the adjacency matrix form of the graph n*m: ");
   scanf("%d%d",&n,&m);
   printf("\n Enter the directed matrix in the adjacency matrix:\n");

   for(i=0;i<n;i++)
   {
     for(j=0;j<m;j++)
     {
       scanf("%d ",&W[i][j]);
     }
   }

   printf("\n The input directed weighted matrix is :\n");
   for(i=0;i<n;i++)
   {
     for(j=0;j<m;j++)
     {
       printf("%d\t",W[i][j]);
     }
     printf("\n");
   }
   for(i=0;i<n;i++)
   {
     for(j=0;j<m;j++)
     {
      D[i][j]=W[i][j];
     }
   }

   for(k=0;k<n;k++)
   {
      for(i=0;i<n;i++)
      {
        for(j=0;j<m;j++)
        {
          if(D[i][j]<D[i][k]+D[k][j])
             D[i][j]=D[i][j];
          else
             D[i][j]=D[i][k]+D[k][j];
        }
      }
   }

   printf("\n The output all node shortest path matrix is :\n");
   for(i=0;i<n;i++)
   {
     for(j=0;j<m;j++)
     {
       printf("%d\t ",D[i][j]);
       sum=sum+D[i][j];
     }
      printf("\n");
   }
printf("%d",sum);

}
