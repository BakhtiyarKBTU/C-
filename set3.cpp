#include <iostream>
#include <cmath>
#include <set>

using namespace std;
set <int> s;

int n;
int a[101010];


int main(){	
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	for(int i = 0; i < n; i++){
		s.insert(a[i]);
	}
	for(set <int> :: iterator i = s.begin(); i!= s.end(); i++){
		cout << (*i) << ' ';
	}
	cout << endl;
	cout << s.size() << endl;
}
