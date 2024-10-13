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
    string s; cin>>s;
    // pashapashi or any two - 2 same, dist one - 3 diff
    map<char,int>m;
    for(auto &it: s) m[it]++;
    // for(auto &[ch,cnt]: m) cout<<ch<<" "<<cnt<<nn;
    string newStr;
    while(1){
        int cnt=0;
        for(auto &it: m){
            if(it.second){
                newStr.pb(it.first);
                m[it.first]--;
            }else cnt++;
        }
        if(cnt==m.size()) break;
    }
    cout<<newStr<<nn;
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