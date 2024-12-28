#include<stdio.h>
#include<conio.h>
#define max 5


int top=-1;
int stack[max];

int main()
{
	int loop=1,ch;

	printf("Stack Menu\n");
	while(loop==1)
	{
		printf("1.push\n2.pop\n3.display\n4.exit\n");
		printf("Enter your choice\n");
		scanf("%d",&ch);

		switch(ch)
		{
			case 1: push();
				break;

			case 2: pop();
				break;

			case 3: display();
				break;

			case 4: return;

			default: printf("Invalid choice\n");
				break;

		}
	}
	return 0;
}

push()
{
	if(top==max-1)
	{
		printf("Stack is full\n");
	}
	else
	{
		int temp;
		printf("Enter a number to push\n");
		scanf("%d",&temp);
		stack[++top]=temp;
		printf("%d is pushed in stack\n",stack[top]);
	}
	return;

}

pop()
{
	if(top==-1)
	{
		printf("Stack is empty\n");
	}
	else
	{
		printf("%d is poped from stack\n",stack[top--]);

	}
	return;
}

display()
{
	if(top==-1)
	{
		printf("Stack is empty\n");
	}
	else
	{
		int i,j,temp;
		printf("stack element before sorting:\n");
		for(i=0;i<=top;i++)
		{
			printf("%d\n",stack[i]);
		}


		for(i=0;i<=top;i++)
		{
			for(j=i;j<=top;j++)
			{
				if(stack[i]>stack[j])
				{
					temp=stack[i];
					stack[i]=stack[j];
					stack[j]=temp;
				}
			}
		}
		printf("Sorted stack is\n");
		for(i=0;i<=top;i++)
		{
			printf("%d\n",stack[i]);
		}


	}
	return;
}

