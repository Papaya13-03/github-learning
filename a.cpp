#include<bits/stdc++.h>
using namespace std;

int main() {
	long long n;
	cin >> n;
	long long a = 0, b = 1;
	while(b <= n) {
		long long tmp = a+b;
		a = b;
		b = tmp;
		if(b == n){
			cout << "La so Fibonacci" << '\n';
			return 0;
		}
	}

	cout << "Khong phai la so Fibonacci" << '\n';

	return 0;
}