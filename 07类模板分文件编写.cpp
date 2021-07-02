//#include<iostream>
//#include<string>
//#include"Person.hpp"//.hpp为约定名称，
//
//using namespace std;
///**********************************************
//由于类模板的成员函数是在对象创建的时候才调用，
//会使文件编写时候链接不到
//
//解决方式1、直接包含.cpp文件
//解决方式2、将声明和实现写到同一个文件，更名为.hpp
//主流方法为2；
//*************************************************/
//void test01()
//{
//	Person <string, int > pp("阿巴巴巴",56146);
//	pp.showPerson();
//}
//int main()
//{
//	test01();
//	return 0;
//}