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
        ll n,m; cin>>n>>m;
        ll totalDig=0;
        vector<ll>zero;
        for(int i=0; i<n; i++){
            ll x, rev=0; cin>>x;
            ll dig1=floor(log10(x)+1);
            while(x){
                rev=rev*10+x%10;
                x/=10;
            }
            ll dig2=floor(log10(rev)+1);
            if(dig1!=dig2){
                zero.pb(abs(dig1-dig2));
            }
            totalDig+=dig1;
        }
        sort(zero.begin(), zero.end(),greater<ll>());
        for(ll i=0; i<min(n,(ll)(zero.size())); i++){
            if(i%2==0) totalDig-=zero[i];
        }
        // cout<<totalDig<<nn;
        cout<<(totalDig>=m+1?"Sasha":"Anna")<<nn;
        // cout<<"---------------"<<nn;
    }
    return 0;
}