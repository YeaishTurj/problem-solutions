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
    vector<int>a(n);
    int odd=0;
    for(auto &it: a) cin>>it, odd+=it&1;
    if(odd!=n && odd!=0){
        cout<<-1<<nn;
        return;
    }
    vector<int>b(n,a[0]);
    if(a==b){
        cout<<1<<nn<<a.back()<<nn;
        return;
    }
    vector<int>res;
    for(int k=0; k<40; k++){
        int done=0,mx=INT_MIN,mn=INT_MAX;
        for(auto &it: a){
            mx=max(mx,it);
            mn=min(mn,it);
        }
        int reduce=(mx+mn)/2;
        for(auto &it: a) it=abs(it-reduce), done+=((!it)?1:0);
        res.pb(reduce);
        if(done==n){
            cout<<res.size()<<nn;
            for(auto &it: res) cout<<it<<" "; cout<<nn;
            return;
        }
    }
    // for(auto &it: a) cout<<it<<" "; cout<<nn;
    cout<<-1<<nn;
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