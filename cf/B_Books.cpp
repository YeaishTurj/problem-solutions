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
ll search(ll a[], ll n, ll i, ll x){
    ll l=0, r=n, mid, ans=INT_MIN;
    while(l<=r){
        mid=(l+r)/2;
        if(a[mid]<=x && mid<n) ans=max(ans,mid),l=mid+1;
        else r=mid-1;
    }
    return ans;
}
int main(){
    fast_IO
    ll n, t; cin>>n>>t;
    ll a[n], ans=INT_MIN;
    for(auto &it: a) cin>>it;
    ll prefix[n+1];
    prefix[0]=0; 
    for(int i=1;i<=n;i++)
        prefix[i]=prefix[i-1]+a[i-1];
    for(int i=0;i<=n;i++){
        ll ind=search(prefix,n+1,i,prefix[i]+t)-i;
        ans=max(ans,ind);
    }
    cout<<ans;
    return 0;
}