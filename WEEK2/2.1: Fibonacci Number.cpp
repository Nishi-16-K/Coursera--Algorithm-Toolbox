#include <iostream>
#include <vector>


typedef   long long int               ll;


using namespace std;
ll fibCalc(int n)
{
	vector<long long> fib(n + 1);
	fib[0] = 0;
	fib[1] = 1;
	for (int i = 2; i <= n; i++)
	{
		fib[i] = fib[i - 1] + fib[i - 2];
	}
	return fib[n];
}

int main()
{
	int n;
	cout<<"Enter number: ";
	cin >> n;
	cout<<"Sum of fibonacci number: ";
	cout << fibCalc(n) << endl;
}
