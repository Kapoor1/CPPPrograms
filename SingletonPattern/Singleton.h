//#pragma once
//#include<iostream>
//
//
//	class Singleton {
//	private:
//		static Singleton *s_Instance;  //static instance for class;
//	private:
//		Singleton();
//		Singleton(const Singleton &obj);
//	//	Singleton operator =(const Singleton& obj);
//	public:
//		static Singleton *getInstance()
//		{
//		if (NULL != s_Instance) {
//			s_Instance = new Singleton();
//			return s_Instance;
//		}
//		else
//		{
//			std::cout << "Sorry no more instance is allowed" << std::endl;
//			return NULL;
//		}
//		}
//	};
//
//	Singleton *Singleton::s_Instance = NULL;
//	/*Singleton *Singleton::getInstance()
//	{
//		if (NULL != s_Instance) {
//			s_Instance = new Singleton();
//			return s_Instance;
//		}
//		else
//		{
//			std::cout << "Sorry no more instance is allowed" << std::endl;
//			return NULL;
//		}
//	}*/