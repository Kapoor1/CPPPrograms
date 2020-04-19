#include<iostream>
#include<vector>
#include<iterator>

//struct M_serv {
//	std::string Name_Service;
//	time_t time_D;
//	time_t time_A;
//	M_serv(): time_D(),time_A() { }
//};

char* rev(char* s);
int main() {
	char s[1000];
	char* Rev;
	std::cout << "Enter a String";
	std::cin >> s;
	Rev=rev(s);
	
		std::cout << *Rev;
	
}

char* rev(char* str) {
	static int i = 0;
	static char Rev[1000];
	if(*str) {
		rev(str + 1);
		Rev[i++] = *str;
	}
	return Rev;
}



	/*std::string theServicename;
	struct M_serv serv;
	std::vector<struct M_serv> Services;
	

	std::cout << "Enter Bus serv and time" << "/n";
	std::cin >> serv.Name_Service >> serv.time_D >> serv.time_A ;

	theServicename = serv.Name_Service;

	if (theServicename != "NULL" || theServicename != "EOD") {
		Services.push_back(serv);
	}
	else {
		std::cout << "Thanks for data input";
	}

		typedef  std::vector<struct M_Serv>::iterator serItr;
	for(serItr itr = Services.begin() ; itr != Services.end(); itr++)

}*/