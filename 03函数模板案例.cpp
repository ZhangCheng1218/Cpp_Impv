//#include<iostream>
//#include<string>
//
//using namespace std;
///**************************************************************
//*���ú���ģ���װһ������ĺ��������ԶԲ�ͬ�������������������
//*�������Ҫ�Ӵ�С�������㷨Ϊѡ������
//*�ֱ�����char�����int�������
//****************************************************************/
//template<typename T>
//void mySwap(T& a, T& b)
//{
//	T temp = a;
//	a = b;
//	b = temp;
//}
//template<class T>
//void sortArr(T arr[], int len)
//{
//	for (int i = 0; i < len; ++i)
//	{
//		int max = i;
//		for (int j = i + 1; j < len; ++j)
//		{
//			if (arr[max] < arr[j])
//			{
//				max = j;
//			}
//		}
//		if (max != i)
//		{
//			mySwap<T>(arr[max], arr[i]);
//		}
//	}
//
//}
//template<class T>
//void printArr(T arr[], int len)
//{
//	for (size_t i = 0; i < len; ++i)
//	{
//		cout << arr[i] << " ";
//	}
//}
//void test01()
//{
//	char c[]= "ahdbxme";
//	int len = sizeof(c) / sizeof(char);
//	sortArr<char>(c,len);
//	printArr<char>(c,len);
//
//	//int num[] = { 5,4,8,2,1,0,9 };
//	//int len = sizeof(num) / sizeof(int);
//	//sortArr<int>(num, len);
//	//printArr<int >(num, len);
//}
//
//int main()
//{
//	test01();
//
//}