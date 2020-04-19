#include<iostream>

struct Node
{
	int m_data;
	struct Node *Next;
};

struct Node* Start = nullptr;

/*Creating Temp Node of Struct Node type;*/

struct Node* CreateNode()
{
	Node* temp = (struct Node*)malloc(sizeof(Node));

	return temp;
}

/*Insert Node in 1st or last place*/

void Insert_Node(){

	int data;
	struct Node* temp = CreateNode();

	std::cout << "enter number"<<"\n";
	std::cin >> temp->m_data;
	temp->Next = nullptr;
	
	if(!Start){
		Start = temp;
	}
	else {
		struct Node* T = CreateNode();
		T = Start;

		while (T->Next != NULL) {
			T = T->Next;
		}
		T->Next = temp;
	}

}

void DeleteNode(int data){

	if(Start->Next == NULL) {
		std::cout << "List is empty can't delete" << "\n";
		return;
	}
	else {
		/*delete 1st node;*/
		struct Node* temp = CreateNode();
		temp = Start;
		if (data == Start->m_data)
		{
			Start = Start->Next;
			free(temp);
		}
		else {
			while (temp->m_data != data) {
				temp = temp->Next;
			}
			temp->m_data = temp->Next->m_data;
			temp->Next = temp->Next->Next;

		}
	}

}
void Display() {
	std::cout << "Display() called"<<"\n";
	struct Node* Disp = CreateNode();
	Disp = Start;

	while (Disp != NULL) {

		std::cout << "Node Data =" << Disp->m_data << "  Next adderss  " << Disp->Next << "\n";
		Disp = Disp->Next;
	}
	std::cout << "Display() end" << "\n";
}

void DisplayAlternate(struct Node *Start)
{
	std::cout << "DisplayAlternate() called" << "\n";
	if(Start->Next!=NULL){
		Start = Start->Next;
		std::cout << Start->m_data <<"  ";
		DisplayAlternate(Start->Next);
		std::cout << "DisplayAlternate() end" << "\n";
	} 
	
}


int main() {
	std::cout << "Hello World";
	Insert_Node();
	Insert_Node();
	Insert_Node();
	Insert_Node();
	Insert_Node();
	Insert_Node();
	Insert_Node();
	Insert_Node();
	Insert_Node();
	Insert_Node();
	Insert_Node();

	Display();

	DisplayAlternate(Start);
	

}
