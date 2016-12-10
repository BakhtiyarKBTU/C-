#include <iostream>
#include <cmath>
#include <cstdio>
#include <map>

using namespace std;

map <string, int> Map;
int n;
string s;

int main(){
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> s;
		Map[s]++;
	}
	int mx = 0;
	string ans;
	for(map <string, int > :: iterator it = Map.begin(); it!= Map.end(); it++){
		//cout << it->first << ' ' << it->second << '\n';
		if(mx < it->second){
			mx = it->second;
			ans = it->first;
		}
	}
	cout << ans;
	return 0;
}


/*
#include <iostream>
using namespace std;

//sadsadsadsadsadsadsa
int main(){
	int n,k=0,l=0;
	cin>>n;
	string a[n];
	string f1,f2;
	
	for (int i=0;i<n;i++)
		cin>>a[i];

	f1=a[0];

	for (int i=0;i<n;i++){
		if (a[0]==a[i]){
			k++;
		} else {
			f2=a[i];
			l++;
		}
	}

	if (k>l)
		cout<<f1;

	if (l>k)
		cout<<f2;

	return 0;
}



*/
