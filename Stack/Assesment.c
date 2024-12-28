#include <stdio.h>
#include <stdlib.h>
#define bool int


struct sNode
{
	char data;
	struct sNode* next;
};



int validate(int character1, int character2)
{
	if (character1 == character2)
		return 1;
	else
		return 0;
}



int main()
{
    int exp[100];

    printf("Enter the Expression : ");
    scanf("%d", &exp);



	if (validate(&exp,&exp))
		printf("Valid\n");
	else
		printf("Not valid\n");
	return 0;
}


void push(struct sNode** top_ref, int new_data)
{

	struct sNode* new_node = (struct sNode*)malloc(sizeof(struct sNode));

	if (new_node == NULL) {
		printf("Stack overflow n");
		getchar();
		exit(0);
	}


	new_node->data = new_data;


	new_node->next = (*top_ref);


	(*top_ref) = new_node;
}


int pop(struct sNode** top_ref)
{
	char res;
	struct sNode* top;


	if (*top_ref == NULL) {
		printf("Stack overflow n");
		getchar();
		exit(0);
	}
	else {
		top = *top_ref;
		res = top->data;
		*top_ref = top->next;
		free(top);
		return res;
	}
}
