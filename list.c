#include <stdio.h>
#include <stdlib.h>
struct node
{
  int data;
  struct Node* next;
};
struct Node* top=NULL;
int is empty()
{
	return top == NULL;
}
void push(int value)
{
struct Node* newnode = (struct Node*)malloc(sizeof(struct Node));
if (newNode ==NULL){
	Printf("stack overflow!caanot push %d.\n",value);
	return;
}
newNode->data = value;
newNode->next = top;
top= newNode;
printf("%d pushed to stack.\n", values);
}
void pop()
{
	if (isEmpty())
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

