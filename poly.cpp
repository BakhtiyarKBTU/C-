/* Палиндром */
#include<bits/stdc++.h>

using namespace std;

int poly(string s){
	if(s.size() == 1) return 1;
	else if(s[0] == s[s.size() - 1]){
		if(s.size() == 2) return 1;
		else return poly(s.substr(1, s.size() - 2));
	}
	else return 0;
}

int main(){
	string s;
	cin >> s;
	if(poly(s)) cout << "YES";
	else cout << "NO";
}
