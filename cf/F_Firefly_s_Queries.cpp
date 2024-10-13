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
    int n,q; cin>>n>>q;
    vector<int>a(n),prefix={0};
    int sum=0;
    for(auto &it: a){
        cin>>it;
        sum+=it;
        prefix.pb(prefix.back()+it);
    }
    for(auto &it: a){
        prefix.pb(prefix.back()+it);
    }
    // for(auto &it: prefix) cout<<it<<" "; cout<<nn;
    while(q--){
        int l,r; cin>>l>>r;
        int first=(l+n-1)/n,last=(r+n-1)/n;
        // cout<<first<<" "<<last<<nn;
        int ans=sum*(last-first-1);
        int startInd=first+(l%n?l%n:n)-1; // j'th element in i'th rotation i+j-1
        int endInd=first+n-1;
        // cout<<first<<" "<<startInd<<" "<<endInd<<nn;
        // cout<<prefix[endInd]-prefix[startInd-1]<<nn;
        ans+=prefix[endInd]-prefix[startInd-1];
        startInd=last;
        endInd=last+(r%n?r%n:n)-1;
        // cout<<last<<" "<<startInd<<" "<<endInd<<nn;
        ans+=prefix[endInd]-prefix[startInd-1];
        cout<<ans<<nn;
        // cout<<"="<<nn;
    }
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