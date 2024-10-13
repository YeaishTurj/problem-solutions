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
    ll a[n], coins=0, pos=0, neg=0, zero=0, mnPos=INT_MAX, mxNeg=INT_MIN;
    for(auto &it: a){
        cin>>it;
        if(it>0){
            pos++;
            coins+=it-1;
            mnPos=min(it, mnPos);
        }else if(it<0){
            neg++;
            coins+=abs(it+1);
            mxNeg=max(it, mxNeg);
        }
        else{
            zero++;
        }
    }
    if(!zero){
        if(neg&1){
            ll c1=coins+2; // -5 -3 (-2)-->make it 1
            ll c2=coins+mnPos+1; // -5 -3 (-2 4) 5-->make those -1
            coins=min(c1, c2);
        }
    }else{
        if(neg&1){
            ll c1=coins+2+zero; // -5 -3 (-2) 0 0 ignore zeros -->make it 1
            ll c2=coins+zero; // -5 -3 (-2 0) 0 use zeros -->make those -1
            ll c3=coins+mnPos+1+zero; // -5 -3 (-2 4) 0 0 -->make those -1
            coins=min(c1, min(c2, c3));
        }else{
            coins+=zero;
        }
    }
    cout<<coins;
    return 0;
}