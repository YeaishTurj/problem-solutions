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
    sort(v.begin(),v.end());
    if(v.front()==1){
        cout<<"Yes"<<nn;
        return;
    }
    set<int>s(v.begin(),v.end());
    for(auto &it: v){
        if(it%v[0]==0 && s.find(it)!=s.end()) s.erase(it);
    }
    if(s.empty()){
        cout<<"Yes"<<nn;
        return;
    }
    int x=*s.begin();
    for(auto &it: v){
        if(it%x==0 && s.find(it)!=s.end()) s.erase(it);
    }
    if(s.empty()){
        cout<<"Yes"<<nn;
    }else cout<<"No"<<nn;
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