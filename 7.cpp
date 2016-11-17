#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>

using namespace std;


int f(int a, int b, int c, int d){
	if(a <= b && a <= c && a <= d) return a;
	else if(b <=a && b <= c && b <= d) return b;
	else if(c <= a && c <= b && c <= d) return c;
	else return d;
}

int a, b, c, d;

int main(){
	cin >> a >> b >> c >> d;
	cout << min(a, min(b, min(c, d))) << endl;
	cout << f(a, b, c, d) << endl;
	return 0;
}
