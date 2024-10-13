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
    if(is_sorted(v.begin(),v.end())){
        cout<<"Yes"<<nn;
        return;
    }
    vector<int>a;
    for(int i=0; i<n; i++){
        a.push_back(v[i]);
        vector<int>b;
        for(int j=i+1; j<n; j++){
            b.push_back(v[j]);
        }
        vector<int>v1;
        for(auto &it: b) v1.pb(it);
        for(auto &it: a) v1.pb(it);
        if(is_sorted(v1.begin(),v1.end())){
            cout<<"Yes"<<nn;
            return;
        }
    }
    cout<<"No"<<nn;
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