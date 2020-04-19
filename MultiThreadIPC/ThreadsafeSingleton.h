//#pragma once
//#include<iostream>
//#include<thread>
//#include<mutex>
//
//std::mutex myMutex;
////std::unique_lock<std::mutex>mu;
//class Singleton {
//private:
//	static Singleton* m_instance;
//	Singleton() {};
//	Singleton(const Singleton&) = delete;
//	Singleton operator=(const Singleton&) = delete;
//public:
//	static Singleton* getInstance() {
//		std::lock_guard<std::mutex> myLock(myMutex);
//		if (!m_instance) {
//			m_instance = new Singleton();
//			return m_instance;
//		}
//	}
//
//	void LogMe() {
//		std::cout << "I Have thread" << "\n";
//	}
//};
//
//Singleton* Singleton::m_instance = NULL;