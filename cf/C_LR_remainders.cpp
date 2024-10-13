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
ll lower_bound(vector<pair<ll,ll>>&v, ll x){
    ll l=0, r=v.size();
    while(l<=r){
        ll mid=(l+r)/2;
        if(v[mid].first==x) return mid;
        else if(v[mid].first<x) l=mid+1;
        else r=mid-1;   
    }
    return l;
}
int main(){
    fast_IO
    w(t){
        ll n,m; cin>>n>>m;
        ll a[n];
        for(auto &it: a) cin>>it;
        ll left=0, right=n-1;
        vector<pair<ll,ll>>v;
        for(int i=0; i<n; i++){
            char ch; cin>>ch;
            if(ch=='L'){
                v.pb({i,a[left]});
                left++;
            }else{
                v.pb({i,a[right]});
                right--;
            }
        }
        // for(auto &it: v) cout<<it.first<<"="<<it.second<<" "; cout<<nn;
        reverse(v.begin(),v.end());
        ll ans=1;
        vector<ll>res;
        for(auto &it: v){
            ans= (ans%m * it.second%m) %m;
            res.pb(ans);
        }
        reverse(res.begin(),res.end());
        for(auto &it: res) cout<<it<<" "; cout<<nn;
        // cout<<"-----------------------------"<<nn;
    }
    return 0;
}