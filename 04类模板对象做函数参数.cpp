//#include<iostream>
//#include<string>
//
//using namespace std;
///********************
//��ģ���������������
//1��ָ����������
//2������ģ�廯
//3��������ģ�廯
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
//		cout << "������" << this->m_Name
//			<< "\t���䣺" << this->m_Age << endl;
//	}
//};
////1��ָ����������***********�õ����
//void print1(Person<string, int >&p)
//{
//	p.showPerson();
//}
//void test01() 
//{
//	Person<string, int > p1("ɳ��",55);
//	print1(p1);
//}
////2������ģ�廯
//template<class nameType,class ageType>
//void print2(Person<nameType, ageType >& p)
//{
//	p.showPerson();
//	//��ģ������
//	cout << "nameType��ģ������Ϊ��" << typeid(nameType).name() << endl;
//}
//void test02()
//{
//	Person<string, int > p2("ɳaffair��", 999);
//	print2(p2);
//
//}
////3��������ģ�廯
//template<class T>
//void print03(T &p)
//{
//	p.showPerson();
//}
//
//void test03()
//{
//	Person<string, int > p3("ɳafdfadffair��", 999);
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