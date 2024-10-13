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
    vector<int>v(n);
    for(auto &it: v) cin>>it;
    if(n==2){
        cout<<min(v[0],v[1])<<nn;
        return;
    }
    int ans=INT_MIN;
    for(int i=0; i<n-2; i++){
        vector<int>v1={v[i],v[i+1],v[i+2]};
        sort(v1.begin(),v1.end());
        // for(auto &it: v1) cout<<it<<" "; cout<<nn;
        // cout<<v1[1]<<nn;
        ans=max(v1[1],ans);
    }
    cout<<ans<<nn;
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