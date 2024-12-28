#include<stdio.h>
#include<stdlib.h>


main()
{
    int n,i,j,temp;
    int a[100];
    printf("Enter no of candidates:\n");
    scanf("%d",&n);
    printf("Enter candidate votes accordingly:\n");
    for(i=0; i<n; i++)
       scanf("%d",&a[i]);
    printf("Enter position to find rank:\n",j);
    scanf("%d",&j);
    temp=a[j-1];
    a[j-1] = a[n-1];
    a[n-1] = a[j-1];
    int p = partition(a,0,n-1);
    printf("Current position: %d\n",n-p);
}

int partition(int a[], int l, int v)
{
    int pivot = a[v];
    int i = l-1;
    int j = l;
    for(j=l; j<v; j++)
    {
        if(a[j]<=a[v])
        {
            i++;
            swap(&a[i],&a[j]);
        }
    }
    swap(&a[i+1],&a[v]);
    return i+1;
}

void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
