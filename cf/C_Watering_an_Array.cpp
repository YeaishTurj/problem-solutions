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
bool compare(pair<ll,ll>&a, pair<ll,ll>&b){
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
        ll n,k,d; cin>>n>>k>>d;
        ll a[n], v[k];
        for(auto &it: a) cin>>it;
        for(auto &it: v) cin>>it;
        // for(auto &it: a) cout<<it<<" "; cout<<nn;
        // cout<<d<<nn;
        // for(auto &it: v) cout<<it<<" "; cout<<nn;
        ll i=0, res=0;
        while(i<min(2*n,d)){
            ll cnt=0;
            for(int j=0; j<n; j++)
                if(a[j]==j+1) cnt++;
            res=max(res, cnt+(d-i-1)/2);
            for(int j=0; j<v[i%k]; j++){
                a[j]++;
            }
            ll exit=0;
            for(int j=0; j<n; j++){
                if(a[j]>j+1) exit++;
            }
            if(exit==n) break;
            i++;
        }
        cout<<max(res, (d-i-1)/2)<<nn;
        // cout<<"--------------"<<nn;        
    }
    return 0;
}
// 1 1 2 3 
// 1+ 