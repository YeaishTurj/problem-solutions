#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
#define Oset tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define fast_IO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
// #define endl "\n"
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
    set<pair<int,int>>v;
    set<int>s;
    for(int i=2; i<=n; i++) s.insert(i);
    int a=1,b=n;
    // for(auto &it: s) cout<<it<<" "; cout<<endl;
    while(s.size() && v.size()<n-1){
        cout<<"? "<<a<<" "<<b<<endl;
        fflush(stdout);
        int x; cin>>x;
        if(x==a){
            v.insert({a,b});
            s.erase(b);
            if(s.empty()) break;
            a=1;
            auto last=s.end();
            last--;
            b=*last;
        }else if(a!=b){
            a=x;
        }else break;
    }
    cout<<"! ";
    for(auto &[a,b]: v) cout<<a<<" "<<b<<" "; cout<<endl;
}
int32_t main(){
    // fast_IO
    int tt=1;
    cin>>tt;
    while(tt--){
        solve();
        // cout<<"-----------"<<endl;
    }
    return 0;
}