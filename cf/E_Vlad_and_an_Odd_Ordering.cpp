#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
#define Oset tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
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
        ll n,k; cin>>n>>k;
        ll i=1;
        while(k>(n+binPow(2,i-1))/binPow(2,i)){
            k-=(n+binPow(2,i-1))/binPow(2,i);
            i++;
        }
        // cout<<k<<" "<<i<<nn;
        cout<<binPow(2,i-1)*(2*k-1)<<nn;
    }
    return 0;
}
// n=20
// (1 3 5 7 9 11 13 15 17 19) --> 2=pow(2,1) --> (n+1)/2
// (2 6 10 14 18) --> 4=pow(2,2) --> (n+2)/4
// (4 12 20) --> 8=pow(2,3) -->(n+4)/8
// (8) --> 16=pow(2,3) --> (n+8)/16