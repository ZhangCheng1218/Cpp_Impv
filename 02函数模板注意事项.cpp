//#include<iostream>
//#include<string>
//
//using namespace std;
////typename������class�滻
//template<typename T>
//void mySwap(T& a, T& b)
//{
//	T temp = a;
//	a = b;
//	b = temp;
//}
////1���Զ������Ƶ��������Ƶ���һ�µ�����T�ſ���ʹ��
//void test01()
//{
//	int a = 10;
//	int b = 20;
//	char c = 'c';
//	mySwap(a, b);
//	//mySwap(c,b);�Ƶ�����T���Ͳ�һ�£�����
//}
////2��ģ�����Ҫȷ����T���������ͣ�����ʹ��
//template<class T>
//void func()
//{
//	cout << "����func" << endl;
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