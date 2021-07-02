//#include<iostream>
//#include<string>
//
//using namespace std;
///*************************
//模板通用性不是万能的
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
//bool com(T a,T b) //无法比较数组啊，自定义的类等
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
////具体化模板实现com函数，或者利用等号的重载实现Person对象的比较
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
//		cout << "是同一个人" << endl;
//	}
//	else
//	{
//		cout << "不是是同一个人" << endl;
//	}
//}
//int main() 
//{
//	test01();
//	return 0;
//}