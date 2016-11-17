#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>

using namespace std;

int phi(int n){
	if(n == 0 || n == 1) return 1;	
	return phi(n-1) + phi(n - 2);
}

int main(){
    int n;
	cin >> n;
	long long f[100];
	f[0] = f[1] = 1;
	for(int i = 2; i <= n; i++){
		f[i] = f[i-1] + f[i-2];
	}
	cout << f[n] << '\n';
	cout << phi(n);
	return 0;   
}
