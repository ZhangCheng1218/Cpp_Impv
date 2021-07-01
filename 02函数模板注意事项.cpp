//#include<iostream>
//#include<string>
//
//using namespace std;
////typename可以用class替换
//template<typename T>
//void mySwap(T& a, T& b)
//{
//	T temp = a;
//	a = b;
//	b = temp;
//}
////1、自动类型推导，必须推导出一致的数据T才可以使用
//void test01()
//{
//	int a = 10;
//	int b = 20;
//	char c = 'c';
//	mySwap(a, b);
//	//mySwap(c,b);推导出的T类型不一致，报错
//}
////2、模板必须要确定出T的数据类型，才能使用
//template<class T>
//void func()
//{
//	cout << "调用func" << endl;
//}
//
//void test02()
//{
//	func<int>();
//}
//int main()
//{
//	//test01();
//	test02();
//}