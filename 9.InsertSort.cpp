#include <iostream>

using namespace std;

template<class T>//����ģ�壬���Զ�������ֵ�������� 
void InsertSort(T *a, const int n);
int main()
{
	double a[] = {5.2, 4.6, 9.0, 6.8, 3.1, 1.0, 7.2, 8.6, 0, 2.4};
	size_t len = sizeof(a) / sizeof(*a);
	
	InsertSort(a, len);
	for(size_t i=0; i != len; ++i)
		cout << a[i] << "  ";
	cout << endl;
	
	return 0;
}
template<class T>
void InsertSort(T *a, const int n)
{
	int i, j;
	for(j=1; j<n; ++j){
		T tmp = a[j];
		i = j;
		while(i>0 && a[i-1]>tmp){
			a[i] = a[i-1];
			--i;
		}
		a[i] = tmp;
	}
}
