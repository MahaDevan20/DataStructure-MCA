/* Implementation of stack using array
@Mahadevan Nair M P
23/07/2025 */

#include<stdio.h>
#define n 5  // Maximum size of the stack

int stack[n], top = -1; // Stack array and top pointer

// Function to push an element into the stack
void push(int value){
	if(top + 1 == n)
		printf("\n Stack Overflow");
	else{
		stack[++top] = value;
	}
}

// Function to pop an element from the stack
void pop(){
	if(top == -1)
		printf("\n Stack Underflow");
	else{
		printf("\n The element popped is %d", stack[top--]);
	}
}

// Function to view the top element of the stack
void peek(){
	if(top == -1)
		printf("\n Stack is empty");
	else{
		printf("\n The element at the top is %d", stack[top]);
	}
}

// Function to provide a menu to the user
void choice(){
	int ch;
	int value;
	
	while(ch != 4){
		printf("\n1. PUSH\n2. POP\n3. PEEK\n4. EXIT\nEnter your choice: ");
		scanf("%d", &ch);
		switch(ch){
			case 1: 
					printf("\n Enter the element to push: ");
					scanf("%d", &value);
					push(value);
					break;
			case 2:
					pop();
					break;
			case 3:
				 	peek();
				 	break;
			case 4:
					printf("\n The program ended!");
					break;
			default:
					printf("\n Invalid choice");
					break;
		}
	}
}

int main(){
	choice(); // Start the menu
	return 0;
}

