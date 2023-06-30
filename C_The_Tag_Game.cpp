#include<bits/stdc++.h>
using namespace std;
vector<int>tree[200005];
int parent[200005];
int depth[200005];
int dp[200005];
void dfs(int cur){
	dp[cur] = depth[cur];
	for(int nxt:tree[cur]){
		if(nxt==parent[cur]) continue;
		parent[nxt] = cur;
		depth[nxt] = depth[cur]+1;
		dfs(nxt);
		dp[cur] = max(dp[cur],dp[nxt]);
	}
}
int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int n,x; cin>>n>>x;
	for(int i=1; i<n; i++){
		int a,b; cin>>a>>b;
		tree[a].emplace_back(b);
		tree[b].emplace_back(a);
	}
	depth[1] = 1; dfs(1);
	int diff = depth[x]-1; 
	diff = diff/2 - (diff%2?0:1);
	for(int i=0; i<diff; i++) x = parent[x];
	cout<<(dp[x] - 1)*2;
}