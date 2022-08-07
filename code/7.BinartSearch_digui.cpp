#include <iostream>

using namespace std;
int BinarySearch_I(int *a, const int n, const int x);//迭代的二分查找 
int BinarySearch_R(int *a, const int left, const int right, const int x);//递归的二分查找 

int main()
{
	int a[] = {4, 8, 9, 12, 15, 20, 22, 26, 28, 30};
	int target;
	cout << "Enter the num you want to search: ";
	cin >> target;
	
	cout << "========Diedai=======" << endl;
	int res = BinarySearch_I(a, sizeof(a)/sizeof(*a), target);
	if(res == -1)
		cout << "Not Found!" << endl;
	else
		cout << "a[" << res << "] = " << a[res] << endl;
		
	cout << "========Digui========" << endl;
	int res2 = BinarySearch_R(a, 0, 9, target);
	if(res2 == -1)
		cout << "Not Found!" << endl;
	else
		cout << "a[" << res2 << "] = " << a[res2] << endl;
	return 0;
}

int BinarySearch_I(int *a, const int n, const int x)
{
	int left=0, right=n-1, mid;
	while(left <= right){
		mid = (left + right) / 2;
		if(a[mid] == x)
			return mid;
		else if(a[mid] < x)
			left = mid + 1;
		else if(a[mid] > x)
			right = mid - 1;
	}
	return -1;
}

int BinarySearch_R(int *a, const int left, const int right, const int x)
{
	if(left <= right){
		int mid=(left+right)/2;
		if(a[mid] > x)	return BinarySearch_R(a, left, mid-1, x);
		else if(a[mid] < x)	return BinarySearch_R(a, mid+1, right, x);
		else if(a[mid == x])	return mid;
	}
	return -1;
}
