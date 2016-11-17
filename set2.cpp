#include <iostream>
#include <set>

using namespace std;

set <int> st;
int n;

int main(){
	cin >> n;
	for(int i = 0; i < n; i++){
		int x;
		cin >> x;
		st.insert(x);
	}
	for(set <int> :: iterator it = st.begin(); it != st.end(); it++){
		cout << (*it) << ' ';
	} 
	return 0;
}
