//#include<iostream>
//#include<string>
//
//using namespace std;
//
////ȫ�ֺ�������ʵ�֣���Ҫ�ñ�������֪��ģ����
//template <class T1, class T2>
//class Person;
////Ȼ��֪����������
//template <class T1, class T2>
//void ShowInfo(Person<T1, T2> p)
//{
//	cout << "������" << p.m_Name
//		<< "\t����:��" << p.m_Age << endl;
//}
//
//template <class T1, class T2>
//class Person
//{
//	/*ȫ�ֺ���������ʵ��
//	//friend void ShowInfo(Person<T1, T2> p)
//	//{
//	//	cout << "������" << p.m_Name
//	//		<< "\t����:��" << p.m_Age << endl;
//	//}
//	*/
//	//ȫ�ֺ���������ʵ��
//	//�ӿ�ģ������б�
//	//����Ҫ�ñ�������ǰ֪�������������
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
//	Person<string, int> p("�ų�", 88888);
//	ShowInfo(p);
//}
//int main()
//{
//	test01();
//	return 0;
//}