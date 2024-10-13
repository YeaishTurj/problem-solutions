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
        ll n; cin>>n;
        ll a[n];
        for(auto &it: a) cin>>it;
        vector<pair<ll,ll>>ind(n);
        for(ll i=n-1; i>=0; i--){
            if(i==n-1) ind[i]={i,-1};
            else{
                if(a[i]==a[i+1]) ind[i]={i,ind[i+1].second};
                else ind[i]={i,i+1};
            }
        }
        // for(auto &it: a) cout<<it<<" "; cout<<nn;
        // for(auto &it: ind) cout<<it.first<<"->"<<it.second<<nn;
        w(q){
            ll l,r; cin>>l>>r;
            l--; r--;
            if(ind[l].second>r || ind[l].second==-1) cout<<"-1 -1"<<nn;
            else cout<<ind[l].first+1<<" "<<ind[l].second+1<<nn;
        }cout<<nn;
        // cout<<"----------------------"<<nn;
    }
    return 0;
}