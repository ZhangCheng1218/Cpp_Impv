//#include<iostream>
//#include<string>
//
//using namespace std;
///*************************
//ģ��ͨ���Բ������ܵ�
//***********************/
//class Person 
//{
//public :
//	string m_Name;
//	int m_Age;
//
//	Person( string name,int age) 
//	{
//		this->m_Age = age;
//		this->m_Name = name;
//	}
//};
//
//template <class T>
//bool com(T a,T b) //�޷��Ƚ����鰡���Զ�������
//{
//	if (a==b)
//	{
//		return true;
//	}
//	else
//	{
//		return false;
//	}
//}
////���廯ģ��ʵ��com�������������õȺŵ�����ʵ��Person����ıȽ�
//template<> bool com(Person a, Person b)
//{
//	if ((a.m_Age==b.m_Age) && (a.m_Name==b.m_Name))
//	{
//		return true;
//	}
//	else
//	{
//		return false;
//	}
//}
//void test01() 
//{
//	Person p1("aa",99);
//	Person p2("aa", 99);
//	if (com(p1,p2))
//	{
//		cout << "��ͬһ����" << endl;
//	}
//	else
//	{
//		cout << "������ͬһ����" << endl;
//	}
//}
//int main() 
//{
//	test01();
//	return 0;
//}