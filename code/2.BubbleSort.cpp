#include <iostream>

using namespace std;

void BubbleSort(int list[], int n);
int main()
{
	int a[] = {1, 47, 12, 63, 7, 10, 5, 12, 45, 8};
	BubbleSort(a, 10);
	for(size_t i=0; i != 10; ++i)
		cout << a[i] << " ";
	cout << endl;
	return 0;
 } 
 
void BubbleSort(int list[], int n)
{
	for(int i=0; i < n-1; ++i){
		for(int j=0; j < n-1-i; ++j){
			if(list[j] > list[j+1]){
				int tmp = list[j];
				list[j] = list[j+1];
				list[j+1] = tmp;
			}
		}
	}
}
