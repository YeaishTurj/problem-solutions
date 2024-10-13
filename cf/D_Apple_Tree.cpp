#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
#define Oset tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define fast_IO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define w(t) int t; cin>>t; while(t--)
#define nn "\n"
#define int long long
#define pb push_back
#define ld long double
int binPow(int n, int k){
    if(k==0) return 1;
    else{
        int turj=1;
        while(k){if(k&1) turj*=n; n*=n, k>>=1;}
        return turj;
    }
}
bool compare(pair<int,int>&a, pair<int,int>&b){
    if(a.first!=b.first){
        if(a.first<b.first) return false;
        return true;
    }else{
        if(a.second>b.second) return false;
        return true;
    }
}
int dfs(map<int,vector<int>>&m, vector<int>&vis, vector<int>&leaf,  int node){
    vis[node]++;
    int flag=1,cnt=0;
    for(auto &it: m[node]){
        if(!vis[it]){
            flag=0;
            cnt+=dfs(m,vis,leaf,it);
        }
    }
    if(flag){
        leaf[node]=1;
    }else leaf[node]=cnt;
    return leaf[node];
}
int32_t main(){
    fast_IO
    w(t){
        int n; cin>>n;
        vector<int>adj[n], vis(n+1,0), leaf(n+1,0);
        map<int,vector<int>>m;
        for(int i=0; i<n-1; i++){
            int u,v; cin>>u>>v;
            m[u].pb(v);
            m[v].pb(u);
        }
        // for(auto &it: m){
        //     cout<<it.first<<"-> ";
        //     for(auto &jt: it.second) cout<<jt<<" "; cout<<nn;
        // }
        for(auto &it: m){
            int node=it.first;
            if(!vis[node]) dfs(m,vis,leaf,node);
        }
        // for(int i=1; i<=n; i++) cout<<i<<"-> "<<leaf[i]<<nn;
        int q; cin>>q;
        while(q--){
            int a,b; cin>>a>>b;
            cout<<leaf[a]*leaf[b]<<nn;
        }
        // cout<<"-----------------"<<nn;
    }
    return 0;
}