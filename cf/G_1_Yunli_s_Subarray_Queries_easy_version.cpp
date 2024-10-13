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
    int n,k,q; cin>>n>>k>>q;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
        a[i]-=i;
    }
    // for(auto &it: a) cout<<it<<" "; cout<<nn;
    map<int,int>m;
    multiset<int,greater<>>s;
    int i=0;
    while(i<k){
        m[a[i]]++;
        i++;
    }
    for(auto &[_,cnt]: m) s.insert(cnt);
    // for(auto &it: s) cout<<it<<" "; cout<<endl;
    vector<int>pre;
    pre.pb(k-*s.begin());
    while(i<n){
        // remove the count of old element from set
        s.erase(s.find(m[a[i-k]]));
        // decrease the count of old element in map
        m[a[i-k]]--;
        // add the count of old element to set 
        s.insert(m[a[i-k]]);
        // if new element already in the set remove that
        if(m.find(a[i])!=m.end() && s.find(m[a[i]])!=s.end()) s.erase(s.find(m[a[i]]));
        // increase the count of new element in map
        m[a[i]]++;
        // add the count of new element to set
        s.insert(m[a[i]]);
        // add max of set to pre
        pre.pb(k-*s.begin());
        i++;
    }
    // for(auto &it: pre) cout<<it<<" "; cout<<nn;
    while(q--){
        int l,r; cin>>l>>r;
        cout<<pre[l-1]<<nn;
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