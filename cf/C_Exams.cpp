#include<bits/stdc++.h>
using namespace std;
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
    ll n; cin>>n;
    vector<pair<ll,ll>>v;
    while(n--){
        ll a, b; cin>>a>>b;
        v.pb({a,b});
    }
    sort(v.begin(), v.end());
    // for(auto &it: v) cout<<it.first<<" "<<it.second<<nn;
    ll day=-1;
    for(auto &it: v){
        if(min(it.first, it.second)>=day) day=min(it.first, it.second);
        else day=max(it.first, it.second);
    }
    cout<<day<<nn;
    return 0;
}