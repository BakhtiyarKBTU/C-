#include <bits/stdc++.h>

using namespace std;

#define frp freopen("ancestor.in", "r", stdin); freopen("ancestor.out", "w", stdout);
int n, m, tin[100010], tout[100010], timer;
vector <int> g[100100];

void dfs(int v, int p = -1){
	tin[v] = timer++;
	for(auto to: g[v]){
		if(p == to) continue;
		else if(p!=to) dfs(to, v);
	}	
	tout[v] = timer;
}

bool parent(int a, int b){
	return tin[a] <= tin[b] && tout[a] >= tout[b];
}

int main(){
	frp
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> n;
	int st;
	for(int i = 1; i <= n; i++){
		int pr; 
		cin >> pr;
		if(pr == 0) st = i;
		else{
			g[pr].push_back(i);
		} 
	}
	dfs(st);
	cin >> m;
	for(int i = 0, a, b; i < m; i++){
		cin >> a >> b;
		if(a == b) puts("0");
		else{
			if(a == st) puts("1");
			else if(b == st) puts("0");
			else if(parent(a, b)) puts("1");
			else puts("0");
		}
	}   	
	return 0;
}
