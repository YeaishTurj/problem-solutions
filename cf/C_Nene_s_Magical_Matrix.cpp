#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
#define Oset tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define fast_IO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define w(t) int t; cin>>t; while(t--)
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
int32_t main(){
    fast_IO
    w(t){
        int n; cin>>n;
        int a[n][n]={}, sum=0;
        vector<pair<int,int>>v;
        for(int k=0; k<n; k++){
            for(int j=0; j<n; j++){
                a[n-k-1][j]=j+1;
            }
            v.pb({1,n-k});
            for(int i=0; i<n; i++){
                a[i][n-k-1]=i+1;
            }
            v.pb({2,n-k});
        }
        for(int i=0; i<n; i++)
            for(int j=0; j<n; j++)
                sum+=a[i][j];
        cout<<sum<<" "<<v.size()<<nn;
        for(auto &it: v){
            cout<<it.first<<" "<<it.second<<" ";
            for(int i=1; i<=n; i++) cout<<i<<" "; cout<<nn;
        }
    }
    return 0;
}

//  4   4   4   4
//  3   3   3   4
//  2   2   3   4
//  1   2   3   4