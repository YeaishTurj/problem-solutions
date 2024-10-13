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
        ll a[n][n];
        vector<ll>v;
        ll cnt=0, flag=1;
        for(ll i=0; i<n; i++){
            ll hash[32]={},zero=0;
            for(ll j=0; j<n; j++){
                cin>>a[i][j];
                if(a[i][j]==0) zero++;
                for(ll k=0; k<32; k++){
                    if(a[i][j]&(1<<k)) hash[k]++;
                }
            }
            ll num=0;
            for(ll k=0; k<32; k++){
                if(hash[k]==n-1){
                    num+=binPow(2, k);
                }
            }
            v.push_back(num);
        }
        if(n==1) cout<<"YES"<<nn<<22<<nn;
        else{
            for(int i=0; i<n; i++){
                for(int j=0; j<n; j++){
                    if(i!=j && (v[i]|v[j])!=a[i][j]){
                        flag=0;
                    }
                }
            }
            if(flag){
                cout<<"YES"<<nn;
                for(auto &it: v) cout<<it<<" "; cout<<nn;
            }else cout<<"NO"<<nn;
        }
    }
    return 0;
}