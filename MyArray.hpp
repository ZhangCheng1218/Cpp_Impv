#pragma once
#include<iostream>
#include<string>

using namespace std;

template <class T>
class MyArray
{
public:
	//构造函数
	MyArray(int capacity)
	{
		cout << "MyArray的构造函数！" << endl;
		this->m_Capacity = capacity;
		this->m_Size = 0;
		this->pAddress = new T[this->m_Capacity];
	}
	//拷贝构造
	MyArray(const MyArray& arr)
	{
		cout << "MyArray的拷贝构造函数！" << endl;
		this->m_Capacity = arr.m_Capacity;
		this->m_Size = arr.m_Size;
		//深拷贝
		this->pAddress = new T[this->m_Capacity];//数据new到堆区
		for (size_t i = 0; i < this->m_Size; ++i)
		{
			this->pAddress[i] = arr.pAddress[i];//把原来的数据放进来
		}
	}
	//重载operator= 放置浅拷贝问题
	MyArray& operator=(const MyArray& arr)
	{
		//先判断原来堆区是否有数据，有先释放
		cout << "MyArray的operator=重载！" << endl;
		if (this->pAddress != NULL)
		{
			delete[] this->pAddress;
			this->pAddress = NULL;
			this->m_Capacity = 0;
			this->m_Size = 0;
		}

		//深拷贝
		this->m_Size = arr.m_Size;
		this->m_Capacity = arr.m_Capacity;
		this->pAddress = new T[arr.m_Capacity];
		for (size_t i = 0; i < this->m_Size; ++i)
		{
			this->pAddress[i] = arr.pAddress[i];
		}
		return *this;

	}
	//尾插法
	void Push_Back(T a)
	{
		if (this->m_Capacity == this->m_Size)
		{
			return;
		}
		this->pAddress[this->m_Size] = a;
		this->m_Size++;
	}
	//尾删法
	void Del_Back()
	{
		if (this->m_Size == 0)
		{
			return;
		}
		this->m_Size --;
	}
	//自定义的类型，下标访问的话需要重载中括号
	T& operator[](int index) 
	{
		return this->pAddress[index];	
	}
	//获取容量
	int GetCapacity()
	{

		return this->m_Capacity;
	}
	//获取大小
	int GetSize() 
	{
		return this->m_Size;
	}

	T* GetArray() 
	{
		return pAddress;
	}
	//析构函数
	~MyArray()
	{
		cout << "MyArray的析构函数！" << endl;
		if (this->pAddress != NULL)
		{
			delete[] this->pAddress;
			this->pAddress = NULL;
		}
	}

private:
	T* pAddress;
	int m_Capacity;
	int m_Size;
};

