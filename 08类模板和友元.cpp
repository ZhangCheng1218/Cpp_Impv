//#include<iostream>
//#include<string>
//
//using namespace std;
//
////全局函数类外实现，需要让编译器先知道模板类
//template <class T1, class T2>
//class Person;
////然后知道函数存在
//template <class T1, class T2>
//void ShowInfo(Person<T1, T2> p)
//{
//	cout << "姓名：" << p.m_Name
//		<< "\t年龄:：" << p.m_Age << endl;
//}
//
//template <class T1, class T2>
//class Person
//{
//	/*全局函数的类内实现
//	//friend void ShowInfo(Person<T1, T2> p)
//	//{
//	//	cout << "姓名：" << p.m_Name
//	//		<< "\t年龄:：" << p.m_Age << endl;
//	//}
//	*/
//	//全局函数的类外实现
//	//加空模板参数列表
//	//还需要让编译器提前知道这个函数存在
//	friend void ShowInfo<>(Person<T1, T2> p);
//public:
//	Person(T1 name, T2 age)
//	{
//		this->m_Age = age;
//		this->m_Name = name;
//	}
//private:
//	T1 m_Name;
//	T2 m_Age;
//};
//
//
//
//void test01()
//{
//	Person<string, int> p("张成", 88888);
//	ShowInfo(p);
//}
//int main()
//{
//	test01();
//	return 0;
//}