//#include<iostream>
//#include<string>
//
//using namespace std;
//
//class Person1
//{
//public:
//	void showPerson1()
//	{
//		cout << "Person1����" << endl;
//	}
//};
//
//class Person2
//{
//public:
//	void showPerson2()
//	{
//		cout << "Person2����" << endl;
//	}
//};
//
//template <class T>
//class PP
//{
//public:
//	T m;
//	//��ģ���еĳ�Ա������һ��ʼ�ʹ����ģ�������ģ�����ʱ��������
//	void show()
//	{
//		m.showPerson2();
//	}
//};
//
//void test01()
//{
//	//PP<Person1> p1;//�����Person1,������û��showPerson2��Ա�ģ����Ա���
//	//p1.show();
//	PP<Person2> p2;
//	p2.show();
//
//}
//int main()
//{
//	test01();
//	return 0;
//}