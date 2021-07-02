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
//		cout << "Person1调用" << endl;
//	}
//};
//
//class Person2
//{
//public:
//	void showPerson2()
//	{
//		cout << "Person2调用" << endl;
//	}
//};
//
//template <class T>
//class PP
//{
//public:
//	T m;
//	//类模板中的成员并不是一开始就创建的，而是在模板调用时候再生产
//	void show()
//	{
//		m.showPerson2();
//	}
//};
//
//void test01()
//{
//	//PP<Person1> p1;//定义的Person1,其中是没有showPerson2成员的，所以报错！
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