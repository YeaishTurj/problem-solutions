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
        ll n,m,k; cin>>n>>m>>k;
        map<ll,ll>a,b, common;
        while(n--){
            ll x; cin>>x;
            if(x<=k) a[x]++;
        }
        while(m--){
            ll x; cin>>x;
            if(x<=k) b[x]++;
        }
        vector<ll>uniqeA, uniqeB;
        for(auto &it: a){
            if(b.find(it.first)==b.end()) uniqeA.pb(it.first);
            else common[it.first]++;
        }
        for(auto &it: b){
            if(a.find(it.first)==a.end()) uniqeB.pb(it.first);
            else common[it.first]++;
        }
        // cout<<k<<nn;
        // for(auto &it: a) cout<<it.first<<" "; cout<<nn;
        // for(auto &it: b) cout<<it.first<<" "; cout<<nn;
        ll takeFromA=min(k/2, (ll)uniqeA.size()), takeFromB=min(k/2, (ll)uniqeB.size());
        ll commonSize=common.size();
        while(takeFromA<k/2 && commonSize){
            takeFromA++;
            commonSize--;
        }
        while(takeFromB<k/2 && commonSize){
            takeFromB++;
            commonSize--;
        }
        cout<<(takeFromA+takeFromB==k?"YES":"NO")<<nn;
        // cout<<"-----------------------"<<nn;
    }
    return 0;
}