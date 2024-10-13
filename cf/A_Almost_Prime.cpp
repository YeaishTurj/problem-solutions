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
    int a[n+1]={}, b[n+1]={};
    for(int i=2; i<=n; i++){
        if(a[i]==0)
            for(int j=i; j<=n; j+=i){
                if(j%i==0){
                    a[j]=1;
                    b[j]++;
                }
            }
    }
    int cnt=0;
    for(int i=1; i<=n; i++){
        if(b[i]==2) cnt++;
    }
    cout<<cnt;
    return 0;
}