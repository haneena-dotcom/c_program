#include <stdio.h>
#include <stdlib.h>
struct Node
{
  int data;
  struct Node* next;
};
struct Node* top=NULL;
int isEmpty()
{
	return top == NULL;
}
void push(int value)
{
struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
if (newNode ==NULL){
printf("stack overflow!caanot push %d.\n",value);
	return;
}
newNode->data = value;
newNode->next = top;
top= newNode;
printf("%d pushed to stack.\n", value);
}
void pop()
{
	if(isEmpty())
	{
		printf("stack underflow! the stack is empt.\n");
		return;
	}
	struct Node* temp = top;
	printf("Popped element:%d\n",top->data);
	top=top->next;
	free(temp);
}
void peek()
{
	if(isEmpty())
		printf("stack is empty.\n");
	else
		printf("top element is:%d\n",top->data);
}
void display()
{
	if(isEmpty())
	{printf("stack is empty.\n");
		return;
	}
	struct Node* temp=top;printf("stck elements(top to bottom):");
	while(temp !=NULL)
	{
		printf("%d->",temp->data);
		temp=temp->next;
	}
	printf("NULL\n");
}
int main()
{
	int choice, value;
	printf("---stack operations using linked list ---\n");
	while (1)
	{
	printf("\n1.push\n2.pop\n3.peek\n4.display\n5.exit\n");
	printf("enter your choice:");
	scanf("%d",&choice);
	switch(choice)
{
	case 1:
	printf("enter value to push:");
	scanf("%d",&value);
	push(value);
	break;
	case 2:
	pop();
	break;
	case 3:
	peek();
	break;
	case 4:
	display();
	break;
	case 5:
	printf("existing program....\n");
	while(!isEmpty()){
	pop();
	}
	exit(0);
	default:
	printf("invalid choice! please choose between 1 and 5.\n");
}
}
return 0;
}
