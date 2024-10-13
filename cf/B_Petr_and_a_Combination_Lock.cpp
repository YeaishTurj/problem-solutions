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
    int a[n];
    int temp=0, flag=0;
    for(auto &it: a) cin>>it, temp-=it;
    // check all combinations using bit manipulation
    // in case of 101, if 1 add item of the index
    // else subtract item of the index;
    for(int i=0; i<binPow(2, n); i++){
        int temp1=temp;
        for(int j=0; j<32; j++){
            if(i&(1<<j)) temp1+=2*a[j];
        }
        if(temp1%360==0) flag=1;
    }
    cout<<(flag?"YES":"NO");
    return 0;
}