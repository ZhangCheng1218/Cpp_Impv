//#include<iostream>
//#include<string>
//
//using namespace std;
///*************************************
//1����ģ��û���Զ������Ƶ���ʹ��
//2����ģ����ģ������б��п�����Ĭ�ϲ���
//**************************************/
////ageType=int����Ĭ�ϲ���
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
//		cout << "������" << this->m_Name
//			<< "\t���䣺" << this->m_Age << endl;
//	}
//};
//
//void test01() 
//{
//	//Person p1("msij", 99);//�޷�ͨ���Զ������Ƶ���ʹ��
//	Person<string> p1("adfa",999);//��ģ���У�ageType��ָ��int�ˣ����Բ���д
//	p1.showInfo();
//}
//int  main() 
//{
//	test01();
//	return 0;
//}
