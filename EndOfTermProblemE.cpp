#include <iostream>
#include <cmath>

using namespace std;

int n, m, a, b;

int main(){
	cin >> n >> m >> a >> b;
//	cout << n * a << endl << n / m * b << endl << n%m * a << ' ' << b << endl;
	cout << min(n * a, n/m * b + min(n%m*a, b));
}
