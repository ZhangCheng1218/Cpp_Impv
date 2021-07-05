#include"MyArray.hpp"
#include<iostream>
#include<string>

using namespace std;

void PrintArr(MyArray<int> ma)
{
	for (size_t i = 0; i < ma.GetSize(); ++i)
	{
		cout << ma[i] << endl;//����[]
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
	cout << "arr��Ԫ�أ�" << endl;
	PrintArr(arr);
	cout << "arr��������" << arr.GetCapacity() << endl;
	cout << "arr�Ĵ�С��" << arr.GetSize() << endl;
	arr.Del_Back();
	PrintArr(arr);
	cout << "arr��������" << arr.GetCapacity() << endl;
	cout << "arr�Ĵ�С��" << arr.GetSize() << endl;
}

//�Զ������Ͳ���ģ�庯��
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
		cout << "������" << arr[i].m_Name
			<< "\t���䣺" << arr[i].m_Age << endl;
	}
}
void test02()
{
	MyArray<Person> arrp(100);
	Person p1("��", 140);
	Person p2("��", 140);
	Person p3("��", 12330);
	Person p4("Ǯ", 1430);
	arrp.Push_Back(p1);
	arrp.Push_Back(p2);
	arrp.Push_Back(p3);
	arrp.Push_Back(p4);

	cout << "arrp��������" << arrp.GetCapacity() << endl;
	cout << "arrp�Ĵ�С��" << arrp.GetSize() << endl;
	PrintPerson(arrp);
}


int main()
{
	//test01();
	test02();
	return 0;
}