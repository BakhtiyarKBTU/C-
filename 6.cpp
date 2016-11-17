#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>

using namespace std;

const int N = 10000;
int a[N], n, q, l, r;

int main(){
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	cin >> q;
	while(q--){
		cin >> l >> r;
		l--;
		for(int i = l; i < r; i++){
			cout << a[i] << ' ';
		}
		cout << endl;
	}
	return 0;
}
