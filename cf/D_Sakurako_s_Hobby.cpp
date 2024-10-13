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
    int n; cin>>n;
    deque<int>p(n);
    string s;
    for(auto &it: p) cin>>it;
    cin>>s;
    p.push_front(0);
    s="0"+s;
    // for(int i=1; i<=n; i++){
    //     cout<<p[i]<<"-"<<s[i]<<" ";
    // }cout<<nn;
    int ans[n+1];
    set<int>st;
    for(int i=1; i<=n; i++){
        st.insert(i);
    }
    for(int i=1; i<=n; i++){
        if(st.find(i)==st.end()){
            continue;
        }
        int j=i;
        int cnt=0;
        vector<int>vec;
        do{
            j=p[j];
            if(s[j]=='0') cnt++;
            vec.pb(j);
            st.erase(j);
        }while(i!=j);
        for(auto &it: vec) ans[it]=cnt;
    }
    for(int i=1; i<=n; i++) cout<<ans[i]<<" "; cout<<nn;
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