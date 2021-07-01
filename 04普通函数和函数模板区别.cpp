//#include<iostream>
//
//using namespace std;
///**************************************************
//* 1、普通函数调用可以发生隐式类型转换
//* 2、函数模板 用自动类型推导，不可以发生隐式类型转换
//* 3、函数模板 用显示指定类型，可以发生隐式类型转换
//****************************************************/
////使用函数模板建议说那个显示指定类型的方式
//int add01(int a, int b)
//{
//	return a + b;
//}
//void test01()
//{
//	int a = 1;
//	int b = 2;
//	char c = 'a';
//	cout << "a+b= " << add01(a, b) << endl;
//	cout << "a+c= " << add01(a, c) << endl;//普通函数会隐式类型转换
//}
//
//template<class T>
//T add02(T a,T b) 
//{
//	return a + b;
//
//}
//
//void test02() 
//{
//	int a = 1;
//	int b = 2;
//	char c = 'a';
//	cout << "a+b= " << add02(a, b) << endl;
//	//cout << "a+c= " << add02(a, c) << endl;//函数模板，自动类型推导不含隐式类型转换
//	cout << "a+c= " << add02<int>(a, c) << endl;//函数模板，显示指定类型含隐式类型转换
//
//}
//int main()
//{
//	//test01();
//	test02();
//
//	return 0;
//
//}