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
    int m=sqrt(n);
    if(sqrt(n)!=m){
        cout<<"No"<<nn;
        return;
    }
    vector<string>v(m);
    for(int i=0; i<m; i++){
        for(int j=i*m; j<(i+1)*m; j++){
            v[i].pb(s[j]);
        }
    }
    // for(auto &it: v) cout<<it<<nn;
    for(int i=1; i<m-1; i++){
        for(int j=1; j<m-1; j++){
            if(v[i][j]!='0'){
                cout<<"No"<<nn;
                return;
            }
        }
    }
    for(int i=0; i<m; i++){
        if(v[i][0]!='1' || v[i][m-1]!='1'){
            cout<<"No"<<nn;
            return;
        }
    }
    for(int j=0; j<m; j++){
        if(v[0][j]!='1' || v[m-1][j]!='1'){
            cout<<"No"<<nn;
            return;
        }
    }
    cout<<"Yes"<<nn;
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