#include<bits/stdc++.h>

using namespace std;

void primeDiv(int n, int d){
	if(d > n/2){
		cout << n << ' ';
		return;
	}
	if(n % d == 0){
		cout << d << ' ';
		primeDiv(n/d, d);
	}
	else
		return primeDiv(n, ++d);
}

int main(){
	int n;
	cin>>n;
	primeDiv(n, 2);
	return 0;
}
