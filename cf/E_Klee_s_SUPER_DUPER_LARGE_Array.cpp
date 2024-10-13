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
bool compare(pair<int,int>&a, pair<int,int>&b){
    if(a.first!=b.first){
        if(a.first<b.first) return false;
    }else{
        if(a.second>b.second) return false;
    }
    return true;
}
void solve(){
    int n,k; cin>>n>>k;
    int sum=(2*k+n-1)*n/2;
    // cout<<sum<<nn;
    int l=1,r=n,ans=INT_MAX;
    while(l<=r){
        int mid=(l+r)/2;
        int sum1=(2*k+mid-1)*mid/2;
        int sum2=sum-sum1;
        int diff=abs(sum1-sum2);
        // cout<<diff
        ans = min(ans,diff);
        if (sum1<sum2) l=mid+1;
        else r=mid-1;
    }
    cout<<ans<<nn;
}
int32_t main(){
    fast_IO
    int tt=1;
    cin>>tt;
    while(tt--){
        solve();
        // cout<<"-----------"<<nn;
    }
    return 0;
}