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
    w(t){
        int n; cin>>n;
        int a[n];
        for(auto &it: a) cin>>it;
        map<vector<int>,int>m;
        for(int i=0; i<n-2; i++){
            vector<int>v;
            for(int j=0; j<3; j++) v.pb(a[i+j]);
            m[v]++;
        }
        map<vector<int>,vector<int>>mp;
        for(auto &it: m){
            mp[{0,it.first[1],it.first[2]}].pb(it.second);
            mp[{it.first[0],0,it.first[2]}].pb(it.second);
            mp[{it.first[0],it.first[1],0}].pb(it.second);
        }
        int ans=0;
        for(auto &it: mp){
            if(it.second.size()>1){
                int total=it.second[0];
                for(int i=1; i<it.second.size(); i++){
                    ans+=total*it.second[i];
                    total+=it.second[i];
                }
            }
        }
        cout<<ans<<nn;
        // cout<<"-----------"<<nn;
    }
    return 0;
}