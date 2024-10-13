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
    int mn=-2*1e9, mx=2*1e9;
    w(n){
        string sign; cin>>sign;
        int n; cin>>n;
        char ch; cin>>ch;
        if(sign==">" && ch=='Y' || sign=="<=" && ch=='N'){
            mn=max(mn,n+1);
        }
        else if(sign=="<" && ch=='Y' || sign==">=" && ch=='N'){
            mx=min(mx,n-1);
        }
        else if(sign==">=" && ch=='Y' || sign=="<" && ch=='N'){
            mn=max(mn,n);
        }
        else if(sign=="<=" && ch=='Y' || sign==">" && ch=='N'){
            mx=min(mx,n);
        }
    }
    if(mx>=mn) cout<<mx<<nn;
    else cout<<"Impossible"<<nn;
    return 0;
}