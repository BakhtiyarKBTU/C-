/*  Конденасация графа */

#include <bits/stdc++.h>

using namespace std;

vector <int> g[100100], gr[100100], used, order;
int cnt = 0, n, m;
int cl = 1, color[100100], a[101010], b[101010];

void dfs1(int v){
	used[v] = 1;
	for(auto to: g[v]) if(used[to] == 0) dfs1(to);
	order.push_back(v);
}

void dfs2(int v){
	used[v] = 1;
	color[v] = cl;
	for(auto to: gr[v]) if(used[to] == 0) dfs2(to);
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);                      
	freopen("condense2.in", "r", stdin);
	freopen("condense2.out", "w", stdout);
	cin >> n >> m;
	for(int i =  0; i < m; i++){
		cin >> a[i] >> b[i];
		a[i]--, b[i]--;
		g[a[i]].push_back(b[i]);
		gr[b[i]].push_back(a[i]);
	}	
	used.assign(n, 0);
	memset(color, -1, sizeof color);
	for(int i = 0; i < n; i++) if(used[i] == 0) dfs1(i);
	used.assign(n, 0);
	for(int i = 0; i < n; i++){
		int v = order[n-1-i];
		if(used[v] == 0) dfs2(v), cl++;
	}
	int ans = 0;

	set<pair<int, int> > S;
	for(int i = 0; i < m; i++){
		if(color[a[i]] == -1 || color[b[i]] == -1) continue;
		if(color[a[i]] != color[b[i]])S.insert(make_pair(color[a[i]], color[b[i]]));
		if(color[a[i]] != color[b[i]]) ans++;
	}
	ans = S.size();
	cout << ans;
	return 0;

}
