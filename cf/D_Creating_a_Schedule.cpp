// n group
// m classroom
// 6 class/group
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
    vector<int>a(m);
    for(auto &it: a){
        cin>>it;
        // it/=100;
    }
    sort(a.begin(),a.end());
    // for(auto &it: a) cout<<it<<" "; cout<<nn;
    vector<int>first(n),second(n);
    int i=0,j=m-1;
    int ii=0,jj=n-1;
    while(ii<=jj){
        first[ii]=a[i];
        second[ii]=a[j];
        first[jj]=a[j];
        second[jj]=a[i];
        i++;
        j--;
        ii++;
        jj--;
    }
    for(int i=0; i<n; i++){
        cout<<first[i]<<" "<<second[i]<<" "<<first[i]<<" "<<second[i]<<" "<<first[i]<<" "<<second[i]<<nn;
    }
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