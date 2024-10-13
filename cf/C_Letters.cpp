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
int dormitory(vector<int>&v, int x){
    int n=v.size(), l=0, r=n-1;
    while(l<=r){
        int mid=(l+r)/2;
        if(v[mid]>=x) r=mid-1;
        else l=mid+1;
    }
    return l;
}
// 0 1 3
int32_t main(){
    fast_IO
    int n,m; cin>>n>>m;
    vector<int>v(n),prefix(n+1,0);
    for(int i=0; i<n; i++){
        cin>>v[i];
        prefix[i+1]=prefix[i]+v[i];
    }
    // for(auto &it: prefix) cout<<it<<" "; cout<<nn;
    while(m--){
        int b; cin>>b;
        int dorm=dormitory(prefix,b);
        cout<<dorm<<" "<<b-prefix[dorm-1]; cout<<nn;
    }
    return 0;
}