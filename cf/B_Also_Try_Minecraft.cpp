#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
#define Oset tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define fast_IO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define w(t) int t; cin>>t; while(t--)
#define nn "\n"
#define ll long long
#define pb push_back
#define ld long double
ll binPow(ll n, ll k){
    if(k==0) return 1;
    else{
        ll turj=1;
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
int main(){
    fast_IO
    ll n,m; cin>>n>>m;
    ll a[n],diff[n]={}, revDiff[n]={};
    for(int i=0; i<n; i++){
        cin>>a[i];
        if(i) diff[i]=max(0LL,a[i-1]-a[i]);
    }
    for(int i=n-1; i>=0; i--){
        if(i<n-1) revDiff[i]=max(0LL,a[i+1]-a[i]);
    }
    ll prefix[n]={},suffix[n]={};
    for(int i=0; i<n; i++){
        if(i) prefix[i]=prefix[i-1]+diff[i];
    }
    for(int i=n-1; i>=0; i--){
        if(i!=n-1) suffix[i]=suffix[i+1]+revDiff[i];
    }
    // for(auto &it: diff) cout<<it<<" "; cout<<nn;
    // for(auto &it: prefix) cout<<it<<" "; cout<<nn;
    // for(auto &it: revDiff) cout<<it<<" "; cout<<nn;
    // for(auto &it: suffix) cout<<it<<" "; cout<<nn;
    while(m--){
        ll s,t; cin>>s>>t;
        s--;t--;
        if(s<t) cout<<prefix[t]-prefix[s]<<nn;
        else cout<<suffix[t]-suffix[s]<<nn;
    }
    return 0;
}