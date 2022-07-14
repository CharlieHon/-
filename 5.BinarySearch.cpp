#include <iostream>

using namespace std;
int BinarySearch(int *a, const int n, const int x);
int main()
{	
	int a[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 12, 56, 89};
	int num;
	cout << "entry the num you want to search: ";
	cin >> num;
	int res;
	res = BinarySearch(a, 14, num);
	if(res < 0)
		cout << "Not Found!" << endl;
	else
		cout << "a[" << res << "]: " << num << endl;
	return 0;
 }
 
 int BinarySearch(int *a, const int n, const int x)
 {
 	int low, mid, high;
 	low = 0, high = n-1;
 	while(low <= high){
 		mid = (low + high) / 2;
 		if(a[mid] == x)
 			return mid;
 		else if(a[mid] < x)
 			low = mid + 1;
		 else if(a[mid] > x)
		 	high = mid - 1;
	 }
	 return -1;//循环结束没有找到，返回-1 
 }
