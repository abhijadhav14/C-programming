#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct stack
{
    int top;
    int a[10];

} ;

 void push(struct stack *s)
 {
     int value;

     printf("enter the value to push into stack");
     scanf("%d",&value);

          s->top=s->top+1;
         s->a[s->top]=value;





 }
 int pop(struct stack *s)
 {
   int pop_value;

   if(s->top==-1)
   {

      return 0;
   }
   else{
    pop_value=s->a[s->top];
    s->top--;
    return(pop_value);
   }
 }
 void main()
 {
     struct stack s;
     s.top=-1;
     int choice;

     for(;;)
     {
         printf("1.push \n 2.pop ");
        printf("\n enter your choice");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:push(&s);
                     break;
            case 2:printf("%d",pop(&s));
                    break;


            default:printf("wrong input");
        }

     }
 }
