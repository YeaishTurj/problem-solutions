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
        ll n; cin>>n;
        
        vector<ll> a(n), b(n); 
        
        ll summationOfA=0, summationOfB=0, mnA=INT_MAX, mnB=INT_MAX;
        
        for(auto &it: a) cin>>it, mnA=min(mnA,it), summationOfA+=it;
        
        for(auto &it: b) cin>>it, mnB=min(mnB,it), summationOfB+=it;
        
        cout<<min(mnA*n+summationOfB, mnB*n+summationOfA)<<endl;
        
    }
    return 0;
}