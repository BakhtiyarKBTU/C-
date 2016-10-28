#include <bits/stdc++.h>

using namespace std;

#define MAXN 100100
#define mp make_pair
#define pb push_back

vector<int> g[MAXN];
set <int> ans;
bool used[MAXN];
int timer, tin[MAXN], fup[MAXN];
int n, m;
 
void dfs (int v, int p = -1) {
	used[v] = true;
	tin[v] = fup[v] = timer++;
	int children = 0;
	for (size_t i=0; i<g[v].size(); ++i) {
		int to = g[v][i];
		if (to == p)  continue;
		if (used[to])
			fup[v] = min (fup[v], tin[to]);
		else {
			dfs (to, v);
			fup[v] = min (fup[v], fup[to]);
			if (fup[to] >= tin[v] && p != -1)
				ans.insert(v);
			++children;
		}
	}
	if (p == -1 && children > 1)
		ans.insert(v);
}

int main(){

	freopen("points.in", "r", stdin);
	freopen("points.out", "w", stdout);
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cin >> n >> m;
	for(int i = 0; i < m; i++){
		int a, b;
		cin >> a >> b;
		g[a].pb(b);
		g[b].pb(a);
	}	
	timer = 0;
	for (int i=1; i<=n; ++i)
		used[i] = false;
	dfs (1);
	cout << ans.size() << endl;
	for(auto to: ans) cout << to << '\n';
	return 0;
}
