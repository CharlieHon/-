#include <iostream>

using namespace std;

void swap1(int x, int y);
void swap2(int *px, int *py);//��ָ��/��ַ 
void swap3(int &x, int &y);//������ 
#define swap4(x,y,t) ((t)=(x), (x)=(y), (y)=(t))//C���Ժ궨�庯�������Խ����������� 

int main()
{
	int a, b, tmp;
	
	a=1;
	b=10;
	cout << "a = " << a << ", " << "b = " << b << endl;
	
//	swap1(a, b);//��ֵ�Ŀ��������� 
//	swap2(&a, &b);//����ַ 
//	swap3(a, b);// ������
//	swap4(a, b, tmp);
	swap(a, b);//C++ģ�庯�� ��template<class T> void swap(T& x, T& y)�����Խ����������� 
	
	cout << "a = " << a << ", " << "b = " << b << endl;
	return 0;
}

void swap1(int x, int y)//����ֵ�Ŀ��� 
{
	int tmp;
	tmp = x;
	x = y;
	y = tmp;
}

void swap2(int *px, int *py)//�����ַ 
{
	int tmp = *px;
	*px = *py;
	*py = tmp;
}

void swap3(int &x, int &y)//���þ��Ǳ��� 
{
	int tmp = x;
	x = y;
	y = tmp;
}
