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
    int n,m; cin>>n>>m;
    vector<vector<int>>vec(n);
    vector<set<int>>vecS(n);
    for(int i=0; i<n; i++){
        int l; cin>>l;
        vec[i].resize(l);
        for(auto &it: vec[i]){
            cin>>it;
            vecS[i].insert(it);
        }
    }
    vector<set<int>>mexV(n);
    set<int>s;
    for(int i=0; i<n; i++){
        for(int mex=0; mex<=vec[i].size()+1; mex++){
            if(vecS[i].find(mex)==vecS[i].end()) mexV[i].insert(mex);
        }
        auto it=mexV[i].begin();
        s.insert(*it);
        it++;
        if(it!=mexV[i].end()) s.insert(*it);
    }
    // for(int i=0; i<n; i++){
    //     for(auto &it: vecS[i]) cout<<it<<" "; cout<<nn;
    //     for(auto &it: mexV[i]) cout<<it<<" "; cout<<nn;
    //     cout<<nn;
    // }
    auto it=s.end();
    it--;
    int mxOfmnMex=*it;
    // cout<<mxOfmnMex<<nn;
    int ans=0;
    if(m>=mxOfmnMex){
        ans=(m*(m+1)-mxOfmnMex*(mxOfmnMex-1))/2;
        m=mxOfmnMex-1;
    }
    ans+=(m+1)*mxOfmnMex;
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