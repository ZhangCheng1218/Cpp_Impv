//#include<iostream>
//#include<string>
//
//using namespace std;
////模板函数类外实现
//template<class T1,class T2>
//class Person 
//{
//public:
//	Person(T1 name,T2 age);
//	T1 m_Name;
//	T2 m_Age;
//	void showPerson();
//};
////模板构造函数的类外实现
//template<class T1,class T2>
//Person<T1,T2>::Person(T1 name, T2 age) 
//{
//	this->m_Age = age;
//	this->m_Name = name;
//}
////成员函数的类外实现
//template<class T1, class T2>
//void Person<T1,T2>:: showPerson() 
//{
//	cout << "姓名："<<this->m_Name
//		<<"\t年龄:："<<this->m_Age << endl;
//}
//
//void test01()
//{
//	Person<string, int> pp("张成",10);
//	pp.showPerson();
//}
//int main()
//{
//	test01();
//	return 0;
//}