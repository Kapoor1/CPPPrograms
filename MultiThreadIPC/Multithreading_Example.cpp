#include<iostream>
#include<thread>

void function(int x) {
	for (int i = 0; i <= 10; i++)
	{
		std::cout << "Thread using function pointer as callable \n";
	}
}

class thread_obj {
public:
	void operator()(int x)
	{
		for (int i = 0; i < x; i++)
			std::cout << "Thread using function object as  callable<<\n";
	}
};



int main() {

	std::cout << "Threads 1 and 2 and 3  operating independently" << std::endl;

	void (*func)(int x, void(*function1)(int x));

	// This thread is launched by using  
	// function pointer as callable 
	std::thread t1(function,100);

	// This thread is launched by using 
	// function object as callable 
	std::thread t2(thread_obj(), 100);

	auto f = [](int x) {for (int i = 0; i < x; i++) { std::cout << "calling in thread by lamda as thread"; } };

	std::thread t3(f, 100);

	//std::thread t4(func,100,function,100);

	t1.join();
	t2.join();
	t3.join();
	//t4.join();
	return 0;
}