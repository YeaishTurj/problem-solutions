#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
#define Oset tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define fast_IO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define nn "\n"
#define int long long
#define ll unsigned long long
#define pb push_back
#define ld long double
int binPow(int n, int k){
    int turj=1;
    while(k){if(k&1) turj*=n; n*=n, k>>=1;}
    return turj;
}
int gcd(int a,int b){
    if(b==0) return a;
    return gcd(b,a%b);
}
bool compare(pair<int,int>&a, pair<int,int>&b){
    if(a.first!=b.first){
        if(a.first<b.first) return false;
    }else{
        if(a.second>b.second) return false;
    }
    return true;
}
void solve(){
    ll k; cin>>k;
    // int n; cin>>n;
    // vector<int>v(n+1,1);
    // for(int i=1; i<=n; i++){
    //     cout<<i<<" -> ";
    //     for(int j=1; j<=n; j++){
    //         if(j%i==0) v[j]^=1;
    //         cout<<v[j]<<" ";
    //     }cout<<nn;
    // }
    // n=2+4+6+8+.....
    // x(x+1)<=k -> x^2+x-k<=0
    ll l=0, r=1e64;
    while(l<=r){
        ll mid=(l+r)/2;
        if(mid*(mid+1)>k) r=mid-1;
        else l=mid+1;
    }
    // cout<<r<<nn;
    ll ans=r*(r+1)+r;
    if(r*(r+1)<k){
        ans+=1+k-r*(r+1);
    } 
    cout<<ans<<nn;
}
int32_t main(){
    fast_IO
    int tt=1;
    cin>>tt;
    while(tt--){
        solve();
        // cout<<nn<<"-----------"<<nn;
    }
    return 0;
}