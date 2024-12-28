#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct stack
{
    int atop;
    int btop;
    int a[10];
    int b[10];

} ;

 void sort(struct stack *s)
 {

     int value,temp,i;
     printf("enter the element\n");
     scanf("%d",&value);
     if(s->a[s->atop]==-1)
     {
         s->atop=s->atop+1;
         s->a[s->atop]=value;

     }
     else{
        while(s->a[s->atop]>value)
        {
            temp=s->a[s->atop];
            s->atop--;
            s->btop++;
           s->b[s->btop] =temp;
        }
          s->atop=s->atop+1;
          s->a[s->atop]=value;
            for(i=s->btop;i>-1;i--)
        {
            s->atop++;
         s->a[s->atop]=s->b[s->btop];
          s->btop--;
        }
     }
     for(i=0;i<=s->atop;i++)
     {
         printf("%d ",s->a[i]);
     }
//      for(i=0;i<=s->btop;i++)
//     {
//         printf("%d",s->b[i]);
//     }

 }





void main()
 {
     struct stack s;
     s.atop=-1;
     s.btop=-1;
     int choice,x=1;

     while(x)
     {
         printf("\n1.sort");
        printf("\nenter your choice\n");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:sort(&s);
                    break;

         default:printf("wrong input");
        }

     }
 }
