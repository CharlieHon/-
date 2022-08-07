#include <iostream>

using namespace std;
//顺序查找 
int SequentialSearch(int *a, const int n, const int x);
int main()
{
	int a[] = {2, 4, 3, 1, 0, 8, 9, 7, 6, 5};
	int res;
	int num;
	cout << "input the num you want to search:" ;
	cin >> num;
	res = SequentialSearch(a, 10, num);
	if(res < 0)
		cout << "Not Found!" << endl;
	else
		cout << "a[" << res << "]: " << num << endl;
	return 0;
}

int SequentialSearch(int *a, const int n, const int x)
{
	int i;
	for(i=0; i<n; ++i){
		if(a[i] == x)
			return i;//找到，返回下标 
	}
	if(i == n)
		return -1;//没找到 
}
