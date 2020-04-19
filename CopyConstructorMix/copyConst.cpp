//#include<iostream>
//#include<memory>
//#include<string>
//
//class M_Class {
//public:  char* m_String;
//public:	M_Class() {};
//		
//
//public: void copy(char* m_String, const char* Str) {
//	int i;
//	for (i = 0;i<=(sizeof(Str)+1);i++) {
//		m_String[i] = Str[i];
//	}
//}
//
//public: M_Class(const char* Str) {
//	char* m_String = new char(sizeof(Str + 1));
//	copy(m_String, Str);
//	}
//
//public: M_Class* operator=(const char* Str) {
//	char* m_String = new char(sizeof(Str + 1));
//	copy(m_String, Str);
//}
//		//friend std::ostream& operator<<(std::ostream& out, const M_Class& c)
//		//{
//		//	//M_Class* ptr = c;
//		//	out << c.m_String<<std::endl;
//		//	//out << "Address" << c << std::endl;
//		//	return out;
//		//}
//
//};
//
//int main() {
//	unsigned char buf[2];
//
//	//M_Class m_String1("GAURAV");
//	//M_Class m_String2(m_String1);
//	//M_Class str;
//	//str = m_String2;
//
//
//	M_Class* pInt = new M_Class("GAURAV");
//
//	M_Class* qInt = new M_Class("Kapoor");
//	M_Class* pBuf =new(buf) M_Class("vergo");
//	M_Class* qBuf = new (buf) M_Class("GAURAV");
//
//	std::cout << "Buff Addr             Int Addr" << std::endl;
//	std::cout << pBuf << "             " << pInt << std::endl;
//	std::cout << qBuf << "             " << qInt << std::endl;
//	std::cout << "------------------------------" << std::endl;
//	std::cout << "1st strin             2nd string" << std::endl;
//	std::cout << *pBuf << "                         "
//		<< *qBuf << std::endl;
//	//std::cout << *pBuf<< "  " << std::endl;
//}