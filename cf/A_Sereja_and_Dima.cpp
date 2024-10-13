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
    ll a[n], total=0, sereja=0, dima=0;
    for(auto &it: a) cin>>it, total+=it;
    ll i=0, j=n-1, cnt=0;
    while(cnt<n){
        if(cnt&1){
            if(a[i]>a[j]) dima+=a[i], i++;
            else dima+=a[j], j--;
        }else{
            if(a[i]>a[j]) sereja+=a[i], i++;
            else sereja+=a[j], j--;
        }
        cnt++;
    }
    cout<<sereja<<" "<<dima<<nn;
    return 0;
}