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
ll less_num(ll a[], ll n, ll x){
    ll l=0, r=n, mid, ans=-1;
    while(l<=r){
        mid=(l+r)/2;
        if(a[mid]<=x && mid<n) ans=max(mid,ans),l=mid+1;
        else r=mid-1;
    }
    return l;
}
int main(){
    fast_IO
    ll n, m; cin>>n>>m;
    ll a[n], b[m];
    for(auto &it: a) cin>>it;
    sort(a,a+n);
    for(auto &it: b){
        cin>>it;
        cout<<less_num(a,n,it)<<" ";
    }
    return 0;
}