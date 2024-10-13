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
        ll n, m, k; 
        cin>>n>>m>>k;
        ll a[n], b[m], 
        mxJ=INT_MIN, mnJ=INT_MAX, 
        mxG=INT_MIN, mnG=INT_MAX;
        ll sum=0;
        for(auto &it: a) cin>>it, mxJ=max(mxJ,it), mnJ=min(mnJ,it), sum+=it;
        for(auto &it: b) cin>>it, mxG=max(mxG,it), mnG=min(mnG,it);
        if(k&1){
            if(mnJ<mxG) cout<<sum-mnJ+mxG<<nn;
            else cout<<sum<<nn;
        }else{
            if(mnJ<mxG){
                sum=sum-mnJ+mxG;
                sum=sum-max(mxJ,mxG)+min(mnG,mnJ);
                cout<<sum<<nn;
            }
            else{
                sum=sum-mxJ+mnG;
                cout<<sum<<nn;
            }
        }
    }
    return 0;
}