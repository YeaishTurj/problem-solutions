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
    if(a.first==b.first && a.second==b.second) return false;
    if(a.first!=b.first){
        if(a.first<b.first) return false;
        return true;
    }else{
        if(a.second>b.second) return false;
        return true;
    }
}
int32_t main(){
    fast_IO
    int n,k; cin>>n>>k;
    map<pair<int,int>,int>m;
    vector<pair<int,int>>v;
    for(int i=0; i<n; i++){
        int p,t; cin>>p>>t;
        m[{p,t}]++;
        v.push_back({p,t});
    }
    sort(v.begin(),v.end(),compare);
    // cout<<v.size()<<nn;
    // for(auto &it: v) cout<<it.first<<it.second<<nn;
    cout<<m[v[k-1]]<<nn;
    return 0;
}