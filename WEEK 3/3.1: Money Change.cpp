#include <iostream>

typedef   long long int  ll;

using namespace std;
int GCD(int a , int b) {
	if (a == 0)
		return b;
		else
	return GCD (b%a,a);
}
int main() {
	int a, b;
	cin >> a >> b;
	cout << GCD(a, b) << endl;
}
