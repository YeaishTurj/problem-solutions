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
        ll a, b, n, m; cin>>a>>b>>n>>m;
        //first day 1 kilo by paying a coins
        //second day 1 kilo by paying b coins 
        // on first day m+1 kilo by paying m*a coins
        if(n==m+1){
            cout<<min(m*a, n*b)<<nn;
        }else if(n<m+1){
            cout<<min(n*a, n*b)<<nn;
        }else{  //n>m+1
            // 2+1 -- 2*20 // 2+1 -- 2*20 // 2+1 -- 2*20 // 1*20|1*15
            cout<<min((n/(m+1))*m*a+min((n%(m+1))*a, (n%(m+1))*b), n*b)<<nn;
        }
    }
    return 0;
}