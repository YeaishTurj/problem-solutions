#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
#define Oset tree<ll, null_type, less<ll>, rb_tree_tag, tree_order_statistics_node_update>
#define fast_IO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define w(t) ll t; cin>>t; while(t--)
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
const ll N=1e5+1;
vector<ll>dp(N,-1);
ll mx_ans=INT_MIN;
ll ans(ll n, vector<ll>&hash){
    if(n<=0) return 0;
    if(dp[n]==-1){
        dp[n]=max(n*hash[n]+ans(n-2,hash), ans(n-1,hash));
    }
    return dp[n];
}
int main(){
    fast_IO
    ll n; cin>>n;
    ll mx=INT_MIN;
    vector<ll>hash(N,0);
    while(n--){
        ll a; cin>>a;
        hash[a]++;
        mx=max(mx,a);
    }
    // for(ll i=0; i<N; i++)
    //     if(hash[i]) cout<<i<<"="<<hash[i]<<nn;
    cout<<ans(mx,hash);
    return 0;
}