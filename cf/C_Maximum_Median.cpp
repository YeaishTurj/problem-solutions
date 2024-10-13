#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
#define Oset tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define fast_IO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define w(t) int t; cin>>t; while(t--)
#define nn "\n"
#define int long long
#define pb push_back
#define ld long double
int binPow(int n, int k){
    if(k==0) return 1;
    else{
        int turj=1;
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
int32_t main(){
    fast_IO
    int n,k; cin>>n>>k;
    vector<int>v(n);
    for(auto &it: v) cin>>it;
    sort(v.begin(),v.end());
    // for(auto &it: v) cout<<it<<" ";
    int l=v[n/2], r=v.back()+k, ans;
    while(l<=r){
        int mid=(l+r)/2;
        int i=n/2,cnt=0;
        while(i<n){
            if(v[i]<mid) cnt+=mid-v[i];
            i++;
        }
        // cout<<mid<<" "<<cnt<<nn;
        if(cnt>k) r=mid-1;
        else l=mid+1;
    }
    cout<<r<<nn;
    return 0;
}