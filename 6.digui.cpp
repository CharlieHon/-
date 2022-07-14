#include <iostream>

using namespace std;
long Fibo(int x);//求斐波那契序列 
long Fact(int x);//求阶乘n!
 
int main()
{
	int x;
	cout << "请输入斐波那契数列的下标：";
	cin >> x;
	cout << Fibo(x) << endl;
	
	int n;
	cout << "n!: ";
	cin >>n;
	cout << Fact(n) << endl; 
	return 0;
}

long Fibo(int x)
{
	if(x == 1 || x == 2)
		return 1;
	else
		return Fibo(x-1) + Fibo(x-2);
}

long Fact(int x)
{
	if(x == 0)
		return 1;
	else
		return x * Fact(x-1);
}
