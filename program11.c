#include<stdio.h>
#include<stdlib.h>
#define SIZE 5
int items[SIZE];
int front=-1;
int rear=-1;
int isfull(){
	if((front==0&&rear==SIZE-1)||(rear+1==front)){
		return 1;
	}
	return 0;
}
int isempty(){
	if (front == -1){
		return 1;
	}
	return 0;
}
void enqueue(int value){
	if (isfull()){
		printf("\nQueue Overflow! cannot insert %d.\n",value);
	}else{
		if(front==-1){
			front=0;
		}
		rear=(rear + 1)% SIZE;
		items[rear]=value;
		printf("\ninserted -> %d\n",value);
	}
}
int dequeue(){
	int element;
	if (isempty()){
		printf("\nQueue Underflow! nothing to delete.\n");
		return -1;
	}else{
		element = items[front];
		if(front == rear){
			front = -1;
			rear = -1;
		}else{
			front=(front+1)%SIZE;
		}
		return element;
	}
}
void display(){
	int i;
	if (isempty()){
		printf("\nQueue is empty!\n");
	}else{
		printf("\nfront -> %d",front);
		printf("\nitems ->");
		for(i=front;i!=rear;i=(i+1)%SIZE){
			printf("%d",items[i]);
		}
		printf("\n%d",items[i]);
		printf("\nrear-> %d\n",rear);
	}
}
int main(){
	int choice,value;
	while(1)
	{
		printf("\n***CIRCULAR QUEUE MENU ***\n");
		printf("1.enqueue\n");
		printf("2.dequeue\n");
		printf("3.display\n");
                printf("4.exit\n");
		printf("enter your choice:");
		scanf("%d",&choice);

		switch(choice){
			case 1:
				printf("enter the value to insert:");
				scanf("%d",&value);
				enqueue(value);
				break;
			case 2:
				value=dequeue();
				if(value!=-1){
					printf("\ndeleted element -> %d\n",value);
				}
				break;
			case 3:
				display();
				break;
			case 4:
				printf("\nexiting program...\n");
				exit(0);
			default:
				printf("\ninvalid choice! please select a valid option.\n");
		}
	}
	return 0;
}






