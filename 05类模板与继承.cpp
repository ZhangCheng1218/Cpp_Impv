//#include<iostream>
//#include<string>
//
//using namespace std;
///****************************************************
//��ģ�������̳�ʱ��ע�����¼���
//1��������̳еĸ�����һ����ģ��ʱ��������������ʱ��
//	Ҫָ����������T������
//2�������ָ�����������޷�����������ڴ�
//3����������ָ����������T�����ͣ�����Ҳ���Ϊ��ģ��
//*****************************************************/
//template <class T>
//class Father
//{
//public:
//	T m_A;
//};
////����̳�ģ����ʱ����Ҫָ�������T����
//class Son :public Father <int>
//{
//
//};
////�����Ϊģ���༴�����ָ�������T
//template <class T1, class T >
//class Son1 :public Father<T>
//{
//public:
//
//	Son1(T1 a ,T b)
//	{
//
//		cout << "T1���������ͣ� " << typeid(T1).name() << endl;
//		cout << "T���������ͣ� " << typeid(T).name() << endl;
//	}
//	T1 m_A;
//};
//void test01()
//{
//	Son1<int, char> ms(10,'a');
//
//}
//int main()
//{
//	test01();
//	return 0;
//}