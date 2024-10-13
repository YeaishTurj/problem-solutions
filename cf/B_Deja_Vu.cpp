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
    w(t){
        ll n, q; cin>>n>>q;
        ll a[n];
        for(auto &it: a) cin>>it;
        unordered_set<ll>s;
        vector<ll>v;
        while(q--){
            ll x; cin>>x;
            if(s.find(x)==s.end()){
                v.pb(x); s.insert(x);
            }
        }
        // for(auto &it: s) cout<<it<<" "; cout<<nn;
        for(auto &it: v){
            for(auto &jt: a){
                if(jt%binPow(2, it)==0) jt+=binPow(2, it-1);
            }
        }
        for(auto &it: a) cout<<it<<" ";
        cout<<nn;
    }
    return 0;
}

// 16 --> 2^4 --> 10000 --> (2,4,8,16) | 16
// (10, 100, 1000, 10000) | 10000 
// 10000 + 100 ==  10100  --> (10,100) | (10100)