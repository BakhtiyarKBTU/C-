#include <iostream>

using namespace std;


int level[111];

int n, q, r;

int main(){
	cin >> n;
	cin >> q;
	for(int i = 0; i < q; i++){
		int x;
		cin >> x;
		level[x] = 1;
	}
	cin >> r;
	for(int i = 0; i < r; i++){
		int x;
		cin >> x;
		level[x] = 1;
	}
	for(int i = 1; i <= n; i++){
		if(level[i] == 0){   	
		//	cout << i << ' ';
			cout << "Oh, my keyboard!";
			return 0;
		}
	}
	cout << "I become the guy."; 
}
