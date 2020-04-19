// MultiThreadIPC.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
//#include <iostream>
//#include<thread>
//#include<chrono>
//#include<algorithm>
//#include"ThreadsafeSingleton.h"
//
//void funThreading1() {
//	int i = 0;
//	for (i; i <2000; i++) {
//		Singleton* Thread1 = Singleton::getInstance();
//	    {
//			std::cout << "Thread :: ";
//			Thread1->LogMe();
//		}
//	}
//}
//
//void funThread2() {
//		Singleton* Thread2 = Singleton::getInstance();
//		if (Thread2) {
//			std::cout << "Thread2 :: ";
//			Thread2->LogMe();
//		}
//}
//
//int main()
//{
//	std::thread T1(funThreading1);
//	std::thread T2(funThreading1);
//	std::thread T3(funThreading1);
//	Singleton* value = Singleton::get_instance();
//
//
//	T1.join();
//	T2.join();
//	T3.join();
//    std::cout << "Hello World!\n"; 
//}
//
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
//
// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
