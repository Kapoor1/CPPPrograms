//// C++ program to print all
//// permutations with duplicates allowed  
////#include <bits/stdc++.h>
//#include<iostream>
//using namespace std;
//
//
//// Function to print permutations of string  
//// This function takes three parameters:  
//// 1. String  
//// 2. Starting index of the string  
//// 3. Ending index of the string.  
//void permute(std::string a, int l, int r)
//{
//	// Base case  
//	if (l == r)
//		cout << a << endl;
//	else
//	{
//		// Permutations made  
//		for (int i = l; i <= r; i++)
//		{
//
//			// Swapping done  
//			swap(a[l], a[i]);
//
//			// Recursion called  
//			permute(a, l + 1, r);
//
//			//backtrack  
//			swap(a[l], a[i]);
//		}
//	}
//}
//
//// Driver Code  
//int main()
//{
//	string str = "ABC";
//	int n = str.size();
//	permute(str, 0, n - 1);
//	return 0;
//}
//
//// This is code is contributed by rathbhupendra 

#include <iostream>
using namespace std;
class ABC
{
public:virtual void fun1();
};

class XYZ :public ABC
{
public:virtual void fun2();
};

int
main()
{
	cout << "size of ABC  " << sizeof(ABC) << "\n";
	cout << "size of XYZ  " << sizeof(XYZ) << "\n";


	return 0;
}