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
    ll n, l, r, x; cin>>n>>l>>r>>x;
    ll a[n], cnt=0;
    for(auto &it: a) cin>>it;
    for(int i=0; i<binPow(2, n); i++){
        ll mx=INT_MIN, mn=INT_MAX, difficulties=0;
        for(int j=0; j<32; j++){
            if(i&(1<<j)){
                mx=max(mx, a[j]);
                mn=min(mn, a[j]);
                difficulties+=a[j];
            }
        }
        if((mx-mn)>=x && difficulties>=l && difficulties<=r) cnt++;
    }
    cout<<cnt;
    return 0;
}