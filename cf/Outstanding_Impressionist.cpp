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
bool compare(pair<pair<int,int>,int>& a, pair<pair<int,int>,int>& b) {
    if (a.first.second != b.first.second) {
        return a.first.second < b.first.second; // Sort by the second element of the first pair
    } else {
        return a.first.first < b.first.first; // If equal, sort by the first element of the first pair
    }
}

void solve(){
    int n; cin>>n;
    vector<pair<pair<int,int>,int>>v;
    map<int,int>m;
    for(int i=0; i<n; i++){
        int l,r; cin>>l>>r;
        v.pb({{l,r},i});
        if(l==r){
            m[l]++;
        }
    }
    string ans(n,'1');
    if(m.empty()){
        cout<<ans<<nn;
        return;
    }
    vector<int>mustNeed;
    for(auto &it: m){
        mustNeed.pb(it.first);
    }
    // for(auto &it: mustNeed) cout<<it<<" "; cout<<nn;
    function<int(int)>findVal=[&](int x){
        int l=0,r=mustNeed.size()-1;
        while(l<=r){
            int mid=(l+r)/2;
            if(mustNeed[mid]==x) return mid;
            else if(mustNeed[mid]<x) l=mid+1;
            else r=mid-1;
        }
        return -1LL;
    };
    // cout<<"-==-"<<nn;
    for(auto &[lr,i]: v){
        int l=lr.first,r=lr.second;
        // cout<<l<<" "<<r<<" "<<i<<nn;
        if(l==r){
            if(m[l]>1) ans[i]='0';
        }else{
            int start=findVal(l), end=findVal(r);
            if(start!=-1 && end!=-1){
                if(end-start==r-l) ans[i]='0';
            }
        }
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