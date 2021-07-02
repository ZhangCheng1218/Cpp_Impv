//#include<iostream>
//#include<string>
//
//using namespace std;
///********************
//类模板对象做函数参数
//1、指定传入类型
//2、参数模板化
//3、整个类模板化
//*********************/
//
//template <class nameType,class ageType>
//class Person 
//{
//public:
//	nameType m_Name;
//	ageType m_Age;
//	Person(nameType name,ageType age) 
//	{
//		this->m_Age = age;
//		this->m_Name = name;
//	}
//	void showPerson() 
//	{
//		cout << "姓名：" << this->m_Name
//			<< "\t年龄：" << this->m_Age << endl;
//	}
//};
////1、指定传入类型***********用的最多
//void print1(Person<string, int >&p)
//{
//	p.showPerson();
//}
//void test01() 
//{
//	Person<string, int > p1("沙发",55);
//	print1(p1);
//}
////2、参数模板化
//template<class nameType,class ageType>
//void print2(Person<nameType, ageType >& p)
//{
//	p.showPerson();
//	//看模板类型
//	cout << "nameType的模板类型为：" << typeid(nameType).name() << endl;
//}
//void test02()
//{
//	Person<string, int > p2("沙affair发", 999);
//	print2(p2);
//
//}
////3、整个类模板化
//template<class T>
//void print03(T &p)
//{
//	p.showPerson();
//}
//
//void test03()
//{
//	Person<string, int > p3("沙afdfadffair发", 999);
//	print03(p3);
//
//}
//int main() 
//{	
//	//test01();
//	//test02();
//	test03();
//	return 0;
//}