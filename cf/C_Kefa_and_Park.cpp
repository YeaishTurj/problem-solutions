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
vector<vector<int>>path;
void dfs(map<int,set<int>>&adj, vector<int>&vis, vector<int>&a, int i, int m, int *cnt, int cat){
    vis[i]++;
    if(a[i-1]) cat++;
    if(cat>m) return;
    int flag=1;
    for(auto &it: adj[i]){
        if(!vis[it]){
            if(!a[i-1]) dfs(adj,vis,a,it,m,cnt,0);
            else dfs(adj,vis,a,it,m,cnt,cat);
            flag=0;
        }
    }
    if(flag && cat<=m) (*cnt)++;
}
int32_t main(){
    fast_IO
    int n,m; cin>>n>>m;
    vector<int>a(n), vis(n+1,0), v;
    for(auto &it: a) cin>>it;
    map<int,set<int>>adj;
    for(int i=0; i<n-1; i++){
        int x,y; cin>>x>>y;
        // if(x>y) swap(x,y);
        adj[x].insert(y);
        adj[y].insert(x);
    }
    // for(auto &it: adj){
    //     cout<<it.first<<"-> ";
    //     for(auto &jt: it.second) cout<<jt<<" "; cout<<nn;
    // }
    // auto it=adj.begin();
    int cnt=0;
    dfs(adj,vis,a,1,m,&cnt,0);
    cout<<cnt<<nn;
    // int ans=path.size();
    // for(auto &it: path){
    //     for(auto &jt: it){
    //         cout<<jt<<" ";
    //     }cout<<nn;
    // }
    // for(auto &it: path){
    //     int cnt=0;
    //     for(auto &jt: it){
    //         if(a[jt-1]) cnt++;
    //         else cnt=0;
    //         if(cnt>m){
    //             ans--; break;
    //         }
    //     }
    // }
    // cout<<ans<<nn;
    return 0;
}