#include <stdio.h>
#define MAX 10
int que[MAX],rear=-1,front=-1;
void enqueue(int value){
	
		if(rear==MAX-1)
			printf("\nThe Queue is full\n");
		else
			que[++rear]=value;
	if(front==-1)
		front++;
}
void deque(){
	
		if(front==-1)
			printf("\nThere is nothing to delete\n");
		else
			printf("The deleted element is: %d \n",que[front++]);
			if(front==rear)
				front=rear=-1;
				
}
void display(){
	int i;
	printf("\nThe queue is:");
	for(i=front;i<=rear;i++)
	{
		printf("%d ",que[i]);
	}
	printf("\n");
}
void choices(){
	int cho;
	int value;
	while(cho!=4)
	{
		printf("1.Enqueue\n2.Dequeue\n3.Display\n4.Exit \nEnter your choice:");
		scanf("%d",&cho);	
		switch(cho){
			case 1:
					printf("\nEnter the element you want to add:");
					scanf("%d",&value);
					enqueue(value);
					break;
			case 2:
					deque();
					break;
					
			case 3:
					display();
					break;
			default:
					printf("\ninvalid choice\n");
		}
	}
}
int main(){
	choices();
	return 0;
}
