/* Количество различных чисел на отрезке [L;R] */

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair

const int N = 1e4 + 100;
const int inf = 1e9 + 1;

int n, k, a[2*N];
vector <pair <int, int> > g[4*N];


map <int, int> arr;
int ans[100010];
int t[4*N];

void update(int v, int tl, int tr, int pos, int val){
	if(tl == tr){
		t[v] = val;
		return;	
	}
	int mid = (tl + tr) >> 1;
	if(pos <= mid){
		update(2*v, tl, mid, pos, val);
	}
	else update(2*v + 1, mid + 1, tr, pos, val);
	t[v] = t[2*v] + t[2*v+1];
}

int get(int v, int tl, int tr, int l, int r){
	if(l > r) return 0;
	if(tl == l && r == tr) return t[v];
	int mid = (tl + tr) >> 1;
	return get(2*v, tl, mid, l, min(mid, r)) + get(2*v + 1, mid + 1, tr, max(l, mid + 1), r);
}


int main(){
	freopen("input.txt", "r", stdin); 
	freopen("output.txt", "w", stdout); 
	ios::sync_with_stdio(0);
    cin.tie(0);
	cin >> n >> k;
	for(int i = 1; i <= n; i++){
		cin >> a[i];
	}
	memset(ans, 0, sizeof ans);
	for(int i = 0; i < k; i++){
		int l, r;
		cin >> l >> r;
		g[r].push_back(make_pair(l, i));	
	}
	for(int i = 1; i <= n; i++){
		if(arr[a[i]] != 0){
			update(1, 1, N, arr[a[i]], 0);
		}
		arr[a[i]] = i;
		update(1, 1, N, i, 1);
		for(int j = 0; j < g[i].size(); j++){
			int l = g[i][j].first;
			int pos = g[i][j].second;
			ans[pos] = get(1, 1, N, l, i);
		}
	}
	for(int i = 0; i < k; i++) cout << ans[i] << '\n';

}

