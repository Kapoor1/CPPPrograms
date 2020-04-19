// Stack_Implementation.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

struct ArrayStack {
	int Top;                 //Indicate top of stack
	int Capacity;            //indicate size of stack
	int* Array;              // point our array where stack is implementing
};

struct ArrayStack* createStack(int capacity)
{
	struct ArrayStack* myStack;
		myStack = (struct ArrayStack*)malloc(sizeof(struct ArrayStack));
		myStack->Top = -1;
		myStack->Capacity = capacity;
		myStack->Array = (int*)malloc(sizeof(capacity)); //myStack->Array = (int*)malloc(sizeof(*myStack->Capacity))
			return (myStack);
} 

int isFull(struct  ArrayStack* myStack)
{
	if (myStack->Top == myStack->Capacity-1) {
		return(1);
	}
	else
		return(0);
};

int isEmpty(struct ArrayStack* myStack)
{
	if (myStack->Top == -1) {
		return(1);
	}
	else
		return(0);
}

void Push(struct ArrayStack* myStack, int data) {
	if (!isFull(myStack)) {
		myStack->Top++;
		myStack->Array[myStack->Top] = data;
	}
	else
		std::cout << "stack is full No more data allowed" << "\n";
}

int Pop(struct ArrayStack* myStack) {
	if (!isEmpty(myStack)) {
		int item = myStack->Array[myStack->Top];
		myStack->Top--;
		return(item);
	}
	else
		std::cout << "stack is empty" << "\n";
	return(-1);
}

int main() {
	int choice, data, item;
	struct ArrayStack* myStack;
	myStack = createStack(2);

	while (1) {
		std::cout << "1 PUSH" << "\n";
		std::cout << "2 POP" << "\n";
		std::cout << "3 Exit" << "\n";

		std::cout << "Please enter your choice" << "\n";
		std::cin >> choice;

		switch (choice)
		{
		case(1):
			std::cout << "Please enter data to push" << "\n";
			std::cin >> data;


			Push(myStack, data);
			break;
		case(2):
			item = Pop(myStack);
			std::cout << "Item you Poped" << item << "\n";
			break;
		case(3):
			return(0);
		}
	}
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
