#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
#define Oset tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define fast_IO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define nn "\n"
#define int long long
#define pb push_back
#define ld long double
int binPow(int n, int k){
    int turj=1;
    while(k){if(k&1) turj*=n; n*=n, k>>=1;}
    return turj;
}
bool compare(pair<int,int>&a, pair<int,int>&b){
    if(a.first!=b.first){
        if(a.first<b.first) return false;
    }else{
        if(a.second>b.second) return false;
    }
    return true;
}
void solve(){
    int n; cin>>n;
    vector<int>a(n+1),p(n+1),vis(n+1,0);
    for(int i=1; i<=n; i++) cin>>a[i];
    vector<vector<int>>adj(n+1);
    for(int i=2; i<=n; i++){
        cin>>p[i];
        adj[i].pb(p[i]);
        adj[p[i]].pb(i);
    }
    // for(int i=1; i<=n; i++){
    //     cout<<i<<"->";
    //     for(auto &it: adj[i]) cout<<it<<" "; cout<<nn;
    // }
    function<int(int)>dfs=[&](int node){
        vis[node]++;
        if(node!=1 and adj[node].size()==1) return a[node];
        int mn_val=INT_MAX;
        for(auto &it: adj[node]){
            if(!vis[it]){
                mn_val=min(mn_val,dfs(it));
            }
        }
        if(node==1) return a[node]+mn_val;
        if(mn_val<=a[node]) return mn_val;
        return a[node]+(mn_val-a[node])/2;
    };
    cout<<dfs(1)<<nn;
}
int32_t main(){
    fast_IO
    int tt=1;
    cin>>tt;
    while(tt--){
        solve();
        // cout<<"-----------"<<nn;
    }
    return 0;
}