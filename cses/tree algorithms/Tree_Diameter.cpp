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
int32_t main(){
    fast_IO
    int n; cin>>n;
    vector<int> adj[n+1],vis(n+1,0);
    for(int i=0; i<n-1; i++){
        int u, v; cin>>u>>v;
        adj[u].pb(v);
        adj[v].pb(u);
    }
    // find farthest leaf node
    function<int(int)> farthestLevel = [&](int node){
        if(vis[node]) return 0LL;
        vis[node]++;
        int mxDepth=0;
        for(auto &nei: adj[node]){
            mxDepth=max(mxDepth, farthestLevel(nei));
        }
        return mxDepth+1;
    };
    int level=farthestLevel(1)-1;
    vis.clear();
    vis.resize(n+1,0);
    queue<int> q;
    q.push(1);
    vis[1]++;
    int farthestNode=-1,l=0;
    // for(auto it: vis) cout<<it<<" "; cout<<nn;
    while(!q.empty()){
        int size=q.size();
        while(size--){
            int node=q.front();
            q.pop();
            for(auto &nei: adj[node]){
                if(!vis[nei]){
                    vis[nei]++;
                    q.push(nei);
                }
            }
            if(l==level) farthestNode=node;
        }
        l++;
    }
    // cout<<level<<" ";
    vis.clear();
    vis.resize(n+1,0);
    cout<<farthestLevel(farthestNode)-1<<nn;
}