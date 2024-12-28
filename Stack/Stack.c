#include<stdio.h>
struct stack
{
    int a[10];
    int top;
};

void main()
{
    struct stack s;
    int ch;
    s.top=-1;
    for(;;)
    {
        printf("Enter the element \n");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1: push(&s);
                    break;

            case 2: printf("%d",pop(&s));
                    break;
                
            case 3: display(&s); 
                    break;
                    
            
        }
    }while(ch!=5);
}

 void push(struct stack *s)
 {
     int num;
     printf("Enter the element to be inserted\n");
     scanf("%d",&num);
     s->top=s->top+1;
     s->a[s->top]=num;
 }

 int pop(struct stack *s)
 {
     int temp;
     temp=s->a[s->top];
     s->top--;
     return temp;
 }
 
 void display (struct stack *s)
{
    int i,top;
    if (s->top == -1)
    {
         printf ("Stack is empty\n");
        return;
    }
    else
    {
        printf ("\n The status of the stack is \n");
        for (i = s->top; i >= 0; i--)
        {
            printf ("%d\n", s->a[i]);
        }
    }
    printf ("\n");
}
