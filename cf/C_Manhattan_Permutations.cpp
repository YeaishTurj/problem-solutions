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
    int n,k; cin>>n>>k;
    vector<int>v(n+1);
    int i=1, j=n, sum=0;
    for(int i=1; i<=n; i++) v[i]=i;
    while(i<j and sum<k){
        if(sum+2*(j-i)<=k){
            swap(v[i],v[j]);
            sum+=2*(j-i);
            i++; j--;
        }else{
            j--;
        }
    }
    if(sum==k){
        cout<<"Yes"<<nn;
        for(int i=1; i<=n; i++) cout<<v[i]<<" "; cout<<nn;
    }
    else cout<<"No"<<nn;
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