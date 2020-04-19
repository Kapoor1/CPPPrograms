#include <iostream>


class Singleton {
	static Singleton* instance;
	// Private constructor so that no objects can be created.
	Singleton() { std::cout << "Instance created " << "\n"; }    //need to give defination to constructor else linker error.  
public:
	static Singleton* getInstance() {
		if (!instance) {
			instance = new Singleton;
			return instance;
		}
		else {
			std::cout << "Can't create any new instance"<<"\n";
		}
	}

};

//Initialize pointer to zero so that it can be initialized in first call to getInstance
Singleton* Singleton::instance = 0;

int main() {
	Singleton* s = s->getInstance();

	Singleton* s1 = s1->getInstance();
	
	//s->setData(100);
	//cout << s->getData() << endl;
	return 0;
}