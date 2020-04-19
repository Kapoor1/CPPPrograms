//#include<iostream>
//
//struct D_LinkList {
//	struct D_LinkList* Previous;
//	int m_data;
//	struct D_LinkList* Next;
//};
//
//struct D_LinkList* Start = NULL;
//
//struct D_LinkList* CreateNode() {
//	struct D_LinkList* temp = (struct D_LinkList*)malloc(sizeof(struct D_LinkList));
//	return temp;
//}
//
//void InsertNode(int data)
//{
//	struct D_LinkList* temp = CreateNode();
//	//std::cout << "enter data" << "/n";
//	temp->m_data = data;
//	temp->Previous = NULL;
//	temp->Next = NULL;
//	if (Start = NULL) {
//		Start = temp;
//		free(temp);
//	}
//	else {
//		if (temp->m_data < Start->m_data)
//			temp->Next = Start;
//		Start = temp;
//		free(temp);
//	}
//	struct D_LinkList* Temp1 = CreateNode();
//	Temp1 = Start;
//
//	if (data != Temp1->m_data) {
//
//	}
//
//
//}
//
//
//int main()
//{
//	char value = 'a';
//	char value1 = 'b';
//
//	const char* val = &value;  
//	char const *Alpha = &value;  
//
//	const char *const Beta = &value;
//
//	std::cout << *val << "  address  " << val << "\n";
//	std::cout << *Alpha << "  address  " << Alpha << "\n";
//	std::cout << *Beta << "  address  " << Beta << "\n";
//
//	val = &value1;
//	//*val = 'c';
//
//	//*Alpha = 'C';
//	Alpha = &value1;
//
//	//*Beta = 'C';
//	//Beta = &value1;
//
//	std::cout << *val << "  address  " << val << "\n";
//	std::cout << *Alpha << "  address  " << Alpha << "\n";
//	std::cout << *Beta << "  address  " << Beta << "\n";
//}