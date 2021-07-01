//#include <iostream>
//#include<string>
//
//using namespace std;
////声明模板，告诉编译器后面代码中紧跟的T不要报错，T是一个通用数据类型
//template<typename T>
////实现俩数据交换
//
//void mySwap(T& a, T& b)
//{
//	T temp = a;
//	a = b;
//	b = temp;
//}
//
//int main()
//{
//	//int a = 10;
//	//int b = 1000;
//	string a = "aaaa";
//	string b = "bbbb";
//	//1、自动类型推导来实现模板
//	//mySwap(a, b);
//	//2、显示指定类型
//	//mySwap<int>(a, b);
//	mySwap<string>(a, b);
//	cout << "a= " << a << endl;
//	cout << "b= " << b << endl;
//}
