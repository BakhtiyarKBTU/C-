#include<bits/stdc++.h>

using namespace std;


int prime(int n, int i){
	if(n < 2) return 0;
	if(n == 2) return 1;
	if(n % i == 0) return 0;
	if(i < n/2) return prime(n, i + 1);
	return 1;

}

int main(){
	int n;
	cin >> n;
	if(prime(n, 2))cout <<"prime";
	else cout << "composite";
}
