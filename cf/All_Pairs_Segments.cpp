#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
#define Oset tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define fast_IO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define nn "\n"
#define int long long
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
    int n,q; cin>>n>>q;
    int a[n];
    for(int i=0; i<n; i++) cin>>a[i];
    // for(auto &it: a) cout<<it<<" "; cout<<nn;
    int prefix[n]={},prev=n-1;
    prefix[0]=n-1;
    map<int,int>m;
    m[prefix[0]]=1;
    for(int i=1; i<n; i++){
        if(i==n-1){
            // cout<<"-";
            prefix[i]=n-1;
            // cout<<a[i]<<" "<<a[i-1]<<nn;
            m[prefix[i]]+=a[i]-a[i-1];
        }else{
            prefix[i]=prev*i+prev-1;
            m[prefix[i]]+=1;
            m[prev*i]+=(a[i]-a[i-1]-1);
            prev--;               
        }
  

    }
    // for(auto &it: prefix) cout<<it<<" "; cout<<nn;
    while(q--){
        int k; cin>>k;
        cout<<m[k]<<" ";
    }cout<<nn;
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
