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
        ll a[n], sum=0, mx=INT_MIN;
        for(ll i=0; i<n; i++){
            cin>>a[i];
        }
        ll suf[n];
        for(int i=n-1; i>=0; i--){
            if(i==n-1) suf[i]=a[i];
            else suf[i]=a[i]+suf[i+1];
        }
        // for(auto &it: a) cout<<it<<" "; cout<<nn;
        // for(auto &it: suf) cout<<it<<" "; cout<<nn;
        //    2       9      -5      -3 
        //    3       1      -8      -3 
        // 2+9-5-3  9-5-3   -5-3     -3
        // 1*2+2*(9-5-3)
        ll res;
        for(int i=0; i<n; i++){
            if(i){
                if(suf[i]>0) res+=suf[i];
            }else res=suf[i];
        }
        cout<<res<<nn;
        // cout<<"----------------"<<nn;
    }
    return 0;
}