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
        ll  a[n], max_mul=INT_MIN;
        for(auto &it: a) cin>>it;
        for(int i=0; i<n; i++){
            ll mul=1;
            for(int j=0; j<n; j++){
                if(i!=j) mul*=a[j];
            }
            mul*=(a[i]+1);
            max_mul=max(mul,max_mul);
        }
        cout<<max_mul<<nn;
    }
    return 0;
}