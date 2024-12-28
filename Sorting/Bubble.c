#include <stdio.h>


int main()
{

  int array[100], n, c, d, swap;

    int q,stop;
  do{
   printf("1)Vote A\n2)Vote B\n3)Vote C\n");
   scanf("%d",&q);
   if(q>0&&q<=3)
   {
    Vote(q);
   }
   else{
    printf("Enter Valid input\n");
   }
  printf("Enter 1 or any number to continue else 0 to finish Voting and find who won the Vote\n");
  scanf("%d",&stop);
  }while(stop);
  Vote(stop);

   bubblesort();

  return 0;
}


void Vote(int choice)
{
 static int a,b,c;
 int array[100],i,j,swap,n;
 if(choice==1)
 {
  a++;
 }
 if(choice==2)
 {
  b++;
 }
 if(choice==3)
 {
  c++;
 }
 printf("Votes for A=%d\n",a);
 printf("Votes for B=%d\n",b);
 printf("Votes for C=%d\n",c);




 if(choice==0)
 {
  if(a>b&&a>c)
  {
   printf("A won with votes of %d\n",a);
  }
  if(b>a&&b>c)
  {
   printf("B won with votes of %d\n",b);
  }
  if(c>b&&c>a)
  {
   printf("C won with votes of %d\n",c);
  }

 }
}


void bubblesort(int array[],int c,int d,int n,int swap)
{
      for (c = 0 ; c < n - 1; c++)
  {
    for (d = 0 ; d < n - c - 1; d++)
    {
      if (array[d] > array[d+1])
      {
        swap       = array[d];
        array[d]   = array[d+1];
        array[d+1] = swap;
      }
    }
  }

   printf("Sorted list in ascending order:\n");

  for (c = 0; c < n; c++)
     printf("%d\n", array[c]);

}
