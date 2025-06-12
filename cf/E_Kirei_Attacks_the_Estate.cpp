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
int gcd(int a,int b){
    if(b==0) return a;
    return gcd(b,a%b);
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
    vector<int>a(n+1);
    for(int i=1; i<=n; i++) cin>>a[i];
    vector<vector<int>>adj(n+1);
    for(int i=0; i<n-1; i++){
        int u,v; cin>>u>>v;
        adj[u].pb(v);
        adj[v].pb(u);
    }
    // for(int i=1; i<=n; i++){
    //     cout<<i<<" : ";
    //     for(auto x: adj[i]) cout<<x<<" "; cout<<nn;
    // }
    vector<int>vis(n+1, 0);
    vector<int>ans(a.begin(), a.end());

    function<void(int,int,int,int,int)>dfs=[&](int root, int sum, int add, int pos, int neg){
        vis[root]=1;
        if(add){
            sum+=a[root];
            ans[root]=max(ans[root],sum+neg);
        }else{
            sum-=a[root];
            ans[root]=max(ans[root],-sum+pos);
        }
        if(sum<0) neg=max(neg,abs(sum));
        else pos=max(pos,sum);
        for(auto &child: adj[root]){
            if(vis[child]) continue;
            dfs(child,sum,add^1,pos,neg);
        }
    };

    dfs(1,0,1,0,0);

    for(int i=1; i<=n; i++){
        cout<<ans[i]<<" ";
    }cout<<nn;
}
int32_t main(){
    fast_IO
    int tt=1;
    cin>>tt;
    while(tt--){
        solve();
        // cout<<nn<<"-----------"<<nn;
    }
    return 0;
}