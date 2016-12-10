#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

string s;
vector <char> v;
int main(){
	cin >> s;
	for(int i = 0; i < s.size(); i++){
		if(s[i] >= '0' && s[i] <= '9'){
			v.push_back(s[i]);	
		}
	}
	sort(v.begin(), v.end());
	for(int i = 0; i < v.size(); i++){
		cout << v[i];
		if(i != v.size() - 1) cout << "+";
	}
}

/*
  #include <iostream>

using namespace std;

int main(){

	string s;
	cin>>s;

	for (int i=0; i<s.size()-1;i++)
		for (int j=i+1; j<s.size();j++)
			if (s[i]>=49 and s[j]>=49)
				if (int(s[i])>=int(s[j])){
					char y=s[i];
					s[i]=s[j];
					s[j]=y;
				}


	cout<<s;

	return 0;

}

*/
