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
    int n,d; cin>>n>>d;
    vector<pair<int,int>>v;
    int ans=INT_MIN;
    for(int i=0; i<n; i++){
        int m,s; cin>>m>>s;
        ans=max(ans,s);
        v.pb({m,s});
    }
    sort(v.begin(),v.end());
    vector<int>prefix(n+1);
    for(int i=0; i<n; i++){
        prefix[i+1]=prefix[i]+v[i].second;
    }
    // for(auto &it: v) cout<<it.first<<" "; cout<<nn;
    // for(auto &it: prefix) cout<<it<<" "; cout<<nn;
    
    auto find_next=[](vector<pair<int,int>>&v, int x){
        int l=0, r=v.size()-1;
        x--;
        while(l<=r){
            int mid=(l+r)/2;
            if(v[mid].first>x) r=mid-1;
            else l=mid+1;
        }
        return r;
    };
    
    for(int i=0; i<n; i++){
        int ind=find_next(v,v[i].first+d);
        ans=max(ans, prefix[ind+1]-prefix[i]);
        // cout<<ind<<" ";
    }
    // cout<<nn;
    cout<<ans<<nn;
    return 0;
}