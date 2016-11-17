#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>

using namespace std;

int calc(int n){
	if(n < 10) return n;
	return n%10 + calc(n/10); 
}

int n;
int sum = 0;
int main(){
	cin >> n;
	int m = n;
	while(n > 0){
		int k = n%10;
		//cout << n << ' ' << k << endl;
		sum += k;
		n /= 10;
	}
	cout << sum << endl;
	cout << calc(m) << endl;
	return 0;
}
