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
    w(T){
        ll n; cin>>n;
        ll a[n];
        map<ll,ll>m;
        // vector<vector<int>>aBit;
        for(auto &it: a){
            cin>>it;
            // vector<int>v;
            ll i=0;
            while(i<32){
                if(!(it>>i)) break;
                // v.pb(1&(it>>i));
                i++;
            }// find the last set bit, as 1&1=1 and 1^1=0
            m[i]++;
            // reverse(v.begin(), v.end());
            // aBit.pb(v);
        }
        // for(auto &it: aBit){
        //     for(auto &jt: it) cout<<jt; cout<<nn;
        // }
        ll ans=0;
        for(auto &it: m) ans+=(it.second-1)*it.second/2;
        cout<<ans<<nn;
        // cout<<"-------------"<<nn;
    }
    return 0;
}