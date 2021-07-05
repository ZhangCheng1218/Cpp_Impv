#pragma once
#include<iostream>
#include<string>

using namespace std;

template <class T>
class MyArray
{
public:
	//���캯��
	MyArray(int capacity)
	{
		cout << "MyArray�Ĺ��캯����" << endl;
		this->m_Capacity = capacity;
		this->m_Size = 0;
		this->pAddress = new T[this->m_Capacity];
	}
	//��������
	MyArray(const MyArray& arr)
	{
		cout << "MyArray�Ŀ������캯����" << endl;
		this->m_Capacity = arr.m_Capacity;
		this->m_Size = arr.m_Size;
		//���
		this->pAddress = new T[this->m_Capacity];//����new������
		for (size_t i = 0; i < this->m_Size; ++i)
		{
			this->pAddress[i] = arr.pAddress[i];//��ԭ�������ݷŽ���
		}
	}
	//����operator= ����ǳ��������
	MyArray& operator=(const MyArray& arr)
	{
		//���ж�ԭ�������Ƿ������ݣ������ͷ�
		cout << "MyArray��operator=���أ�" << endl;
		if (this->pAddress != NULL)
		{
			delete[] this->pAddress;
			this->pAddress = NULL;
			this->m_Capacity = 0;
			this->m_Size = 0;
		}

		//���
		this->m_Size = arr.m_Size;
		this->m_Capacity = arr.m_Capacity;
		this->pAddress = new T[arr.m_Capacity];
		for (size_t i = 0; i < this->m_Size; ++i)
		{
			this->pAddress[i] = arr.pAddress[i];
		}
		return *this;

	}
	//β�巨
	void Push_Back(T a)
	{
		if (this->m_Capacity == this->m_Size)
		{
			return;
		}
		this->pAddress[this->m_Size] = a;
		this->m_Size++;
	}
	//βɾ��
	void Del_Back()
	{
		if (this->m_Size == 0)
		{
			return;
		}
		this->m_Size --;
	}
	//�Զ�������ͣ��±���ʵĻ���Ҫ����������
	T& operator[](int index) 
	{
		return this->pAddress[index];	
	}
	//��ȡ����
	int GetCapacity()
	{

		return this->m_Capacity;
	}
	//��ȡ��С
	int GetSize() 
	{
		return this->m_Size;
	}

	T* GetArray() 
	{
		return pAddress;
	}
	//��������
	~MyArray()
	{
		cout << "MyArray������������" << endl;
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

