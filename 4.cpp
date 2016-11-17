#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>

using namespace std;

const int N = 1000;

int a[N][N], b[N][N], c[N][N];
int n;

int main(){
	cin >> n;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cin >> a[i][j];
		}
	}

	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cin >> b[i][j];
		}
	}

	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			c[i][j] = a[i][j] + b[i][j];
		}
	}

	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cout << c[i][j] << ' ';
		}
		cout << endl;
	}


	return 0;
}
