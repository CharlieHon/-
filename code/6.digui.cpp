#include <iostream>

using namespace std;
long Fibo(int x);//��쳲��������� 
long Fact(int x);//��׳�n!
 
int main()
{
	int x;
	cout << "������쳲��������е��±꣺";
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
