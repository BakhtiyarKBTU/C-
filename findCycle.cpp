#include <bits/stdc++.h>

using namespace std;

#define frp freopen("cycle2.in", "r", stdin); freopen("cycle2.out", "w", stdout);

int n, cl[100010], m, p[100010];
vector <int> g[100100], ans;

int cycle_st, cycle_end;

bool dfs (int v) {
	cl[v] = 1;
	for (size_t i=0; i<g[v].size(); ++i) {
		int to = g[v][i];
		if (cl[to] == 0) {
			p[to] = v;
			if (dfs (to))  return true;
		}
		else if (cl[to] == 1) {
			cycle_end = v;
			cycle_st = to;
			return true;
		}
	}
	cl[v] = 2;
	return false;
}


int main(){
	frp
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> n >> m;
	memset(p, -1, sizeof p);
	for(int i = 1; i <= m; i++){
		int a,b;
		cin >> a >> b;
		g[a].push_back(b);
	}
	cycle_st = -1;
	for(int i = 1; i <= n; i++){
		if(cl[i] == 0){
		    if(dfs(i)) break;
		}
	}
	if(cycle_st == -1) return cout << "NO", 0;
	else{ 
		vector<int> cycle;
		cycle.push_back(cycle_st);
		for (int v=cycle_end; v!=cycle_st; v=p[v])
			cycle.push_back(v);

		reverse(cycle.begin(), cycle.end());
		if(cycle.size() == 0) cout << "NO";
			else{
			cout << "YES\n";
			for(auto to : cycle) cout << to << ' ';
		}
  	}
	return 0;
}
