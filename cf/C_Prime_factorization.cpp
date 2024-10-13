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
    int n; cin>>n;
    int m=n+10;
    int a[m];
    for(int i=0; i<m; i++) a[i]=i;
    for(int i=2; i<=sqrt(m); i++){
        for(int j=2*i; j<m; j+=i){
            if(a[j]==j) a[j]=i;
        }
    }
    // for(int i=1; i<=n; i++) cout<<i<<" "<<a[i]<<nn;
    while(1){
        cout<<a[n];
        n/=a[n];
        if(n==1) break;
        cout<<"*";
    }
    return 0;
}