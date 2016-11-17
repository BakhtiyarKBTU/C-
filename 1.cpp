#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>

using namespace std;

bool ispoly(string s){
	for(int i = 0; i < s.size()/2; i++){
		if(s[i] != s[s.size()-i-1]) return false;
	}
	return true;
}

bool ispolyRec(string s){
	if(s.size() == 1) return 1;
	else if(s[0] == s[s.size() - 1]){ // aa a == a
		if(s.size() == 2) return 1;.//  aa len = 2
		return ispolyRec(s.substr(1, s.size() -2)); // abba ispolyRec(bb);
	}
	else return 0;
	
}


string s;

int main(){
	ios_base :: sync_with_stdio(0);
	cin.tie(0);
	cin >> s;
	if(ispoly(s)) cout << "YES\n";
	else cout << "NO\n";

	if(ispolyRec(s)) cout << "YES\n";
	else cout << "NO\n";
	return 0;
}
