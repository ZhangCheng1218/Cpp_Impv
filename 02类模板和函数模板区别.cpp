//#include<iostream>
//#include<string>
//
//using namespace std;
///*************************************
//1、类模板没有自动类型推导的使用
//2、类模板在模板参数列表中可以有默认参数
//**************************************/
////ageType=int就是默认参数
//template<class nameType,class ageType=int>
//class Person 
//{
//public:
//	nameType m_Name;
//	ageType m_Age;
//
//	Person(nameType name,ageType age) 
//	{
//		this->m_Age = age;
//		this->m_Name = name;
//	}
//
//	void showInfo() 
//	{
//		cout << "姓名：" << this->m_Name
//			<< "\t年龄：" << this->m_Age << endl;
//	}
//};
//
//void test01() 
//{
//	//Person p1("msij", 99);//无法通过自动类型推导来使用
//	Person<string> p1("adfa",999);//类模板中，ageType已指定int了，可以不用写
//	p1.showInfo();
//}
//int  main() 
//{
//	test01();
//	return 0;
//}
