// HacketEarthTest.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
//#include<string>
//
//int main()
//{
//    char str[20];
//    int i = 0;
//    int countZ = 0;
//        int countO = 0;
//    std::cout << "enter the string" << std::endl;
//    std::cin>>str;
//
//    while (str[i] != '\0') {
//        if (str[i] == 'z' or str[i] == 'Z') countZ++; else
//            if (str[i] == 'o' or str[i] == 'O') countO++;
//
//        i++;
//    }
//
//    if (countZ * 2 == countO) {
//        std::cout << "TRUE" << std::endl;
//    }else
//        std::cout << "FALSE" << std::endl;
//
//
//    std::cout << "Hello World!\n";
//}

//#include <bits/stdc++.h>
//using namespace std;
//const int maxn = 5e5 + 17;
//string s;
//int main() {
//	ios::sync_with_stdio(0), cin.tie(0);
//	cin >> s;
//	cout << (count(s.begin(), s.end(), 'z') * 2 == count(s.begin(), s.end(), 'o') ? "Yes" : "No") << '\n';
//}

unsigned int fact(unsigned int num) {
	if (num == 0)
		return 1;

	return (num * fact(num - 1));
}

int main() {
	unsigned int num, value;
	std::cin >> num;

	value = fact(num);

	std::cout << value;

}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
