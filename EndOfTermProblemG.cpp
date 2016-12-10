#include <iostream>

using namespace std;

long long bp(int a, int n){
	if(n == 0) return 1;
	if(n == 1) return a;
	long long x = bp(a, n/2), y = bp(a, n%2);
	return x * x * y;
}

int n;

int main(){
	cin >> n;
	n++;
	cout << bp(2, n) - 2;
}
