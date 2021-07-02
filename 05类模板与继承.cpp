//#include<iostream>
//#include<string>
//
//using namespace std;
///****************************************************
//类模板碰到继承时，注意以下几点
//1、当子类继承的父类是一个类模板时，子类在声明的时候，
//	要指定出父类中T的类型
//2、如果不指定，编译器无法给子类分配内存
//3、如果想灵活指定出父类中T的类型，子类也需变为类模板
//*****************************************************/
//template <class T>
//class Father
//{
//public:
//	T m_A;
//};
////子类继承模板类时候，需要指明父类的T类型
//class Son :public Father <int>
//{
//
//};
////子类变为模板类即可灵活指出父类的T
//template <class T1, class T >
//class Son1 :public Father<T>
//{
//public:
//
//	Son1(T1 a ,T b)
//	{
//
//		cout << "T1的数据类型： " << typeid(T1).name() << endl;
//		cout << "T的数据类型： " << typeid(T).name() << endl;
//	}
//	T1 m_A;
//};
//void test01()
//{
//	Son1<int, char> ms(10,'a');
//
//}
//int main()
//{
//	test01();
//	return 0;
//}