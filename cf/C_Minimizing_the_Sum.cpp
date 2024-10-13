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
int n,k; 
vector<vector<int>>dp;
vector<int>v;
int res(int ind, int k){
    if(ind==n) return 0;
    if(dp[ind][k]==-1){
        int ans=v[ind]+res(ind+1,k); // 0 operatation, so all k operations from the next index
        for(int oper=1; oper<=k; oper++){ // number of operations from the index = 1 to k
            if(ind+oper>=n) break;
            int mn=v[ind];
            for(int i=ind; i<=ind+oper; i++){
                mn=min(mn,v[i]); // find min number from the index to index+1, index+2, index+k
            }
            ans=min(ans,(oper+1)*mn+res(ind+oper+1,k-oper)); // calculate res from the next element of subarray with the remaining k
        }
        dp[ind][k]=ans;
    }
    return dp[ind][k];
}
int32_t main(){
    fast_IO
    w(t){
        cin>>n>>k;
        v.resize(n);
        for(auto &it: v) cin>>it;
        dp.resize(n+1,vector<int>(k+1,-1));
        // for(auto &it: v) cout<<it<<" "; cout<<nn;
        cout<<res(0,k)<<nn;
        v.clear();
        dp.clear();
        // cout<<"-------------"<<nn;
    }
    return 0;
}