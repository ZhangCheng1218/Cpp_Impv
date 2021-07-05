#include"MyArray.hpp"
#include<iostream>
#include<string>

using namespace std;

void PrintArr(MyArray<int> ma)
{
	for (size_t i = 0; i < ma.GetSize(); ++i)
	{
		cout << ma[i] << endl;//重载[]
	}
}
void test01()
{
	MyArray <int> arr(5);
	//MyArray<int> arr1(arr);
	//MyArray<int > arr2(10);
	//arr = arr2;
	for (size_t i = 0; i < 4; ++i)
	{
		arr.Push_Back(i);
	}
	cout << "arr的元素：" << endl;
	PrintArr(arr);
	cout << "arr的容量：" << arr.GetCapacity() << endl;
	cout << "arr的大小：" << arr.GetSize() << endl;
	arr.Del_Back();
	PrintArr(arr);
	cout << "arr的容量：" << arr.GetCapacity() << endl;
	cout << "arr的大小：" << arr.GetSize() << endl;
}

//自定义类型测试模板函数
class Person
{
public:
	int m_Age;
	string m_Name;
	Person() 
	{
	
	}
	Person(string name, int age)
	{
		this->m_Age = age;
		this->m_Name = name;
	}

};

void PrintPerson(MyArray<Person> arr)
{
	for (size_t i = 0; i < arr.GetSize(); ++i)
	{
		cout << "姓名：" << arr[i].m_Name
			<< "\t年龄：" << arr[i].m_Age << endl;
	}
}
void test02()
{
	MyArray<Person> arrp(100);
	Person p1("张", 140);
	Person p2("成", 140);
	Person p3("赵", 12330);
	Person p4("钱", 1430);
	arrp.Push_Back(p1);
	arrp.Push_Back(p2);
	arrp.Push_Back(p3);
	arrp.Push_Back(p4);

	cout << "arrp的容量：" << arrp.GetCapacity() << endl;
	cout << "arrp的大小：" << arrp.GetSize() << endl;
	PrintPerson(arrp);
}


int main()
{
	//test01();
	test02();
	return 0;
}