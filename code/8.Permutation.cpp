#include <iostream>
#include <string>

using namespace std;
int cnt = 0;
void show(char *p, const int n)
{
	for(int i=0; i<=n; ++i)
		cout << p[i] << " ";
	cout << endl;
}
void Permutations(char *p, const int m, const int n)
{
	cout << "µ÷ÓÃµÝ¹é£º" << ++cnt << " ´Î" <<endl;
	if(m == n){
		for(int i=0; i<=n; ++i)
			cout << p[i] << " ";
		cout << endl;
	}
	else{
		for(int i=m; i<=n; ++i){
		swap(p[m], p[i]);
		Permutations(p, m+1, n);
		swap(p[m], p[i]);
		}
	}
}
int main()
{
	char a[] = "abc";
	Permutations(a, 0, 2);
	return 0;
} 
