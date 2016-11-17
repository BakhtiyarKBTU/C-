#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>

using namespace std;
                 
bool prime(int x){
	for(int i = 2; i <= sqrt(x); i++){
		if(x % i == 0) return 0;	
	}
	return 1;
}

bool primeRec(int n, int i){
	if(n < 2) return 0;
	if(n == 2) return 1;
	if(n % i == 0) return 0;
	if(i < n/2) return primeRec(n, i + 1);
	return 1;
}


int main(){
	int n;
	cin >> n;
	if(prime(n)) cout << "YES\n";
	else cout << "NO\n";

	if(primeRec(n, 2)) cout << "YES\n";
	else cout << "NO\n";
	return 0;
}
