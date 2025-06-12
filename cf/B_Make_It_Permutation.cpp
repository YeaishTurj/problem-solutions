// a[n][n]
// a[i][j]=j
// sel a row -> rev any subarray
// seq of max len 2n -> all cols are perm

// 1 2 3 4 5 6
// 1 2 3 4 5 6
// 1 2 3 4 5 6
// 1 2 3 4 5 6
// 1 2 3 4 5 6
// 1 2 3 4 5 6
// mx 12

// 1    2 3 4 5 6
// 2    1 3 4 5 6
// 3    2 1 4 5 6
// 4    3 2 1 5 6
// 5    4 3 2 1 6
// 6    5 4 3 2 1
// 6
// rev -> 6 -> 1-6
// rev -> 5 -> 1-5
// rev -> 4 -> 1-4

// 1    6 5 4 3 2
// 2    1 6 5 4 3
// 3    2 1 6 5 4
// 4    3 2 1 6 5
// 5    4 3 2 1 6
// 6    5 4 3 2 1
// 1+1+1+1+1
// rev -> 1 -> 2-6
// rev -> 2 -> 3-6
// rev -> 3 -> 4-6
// rev -> 4 -> 5-6


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
    int n; cin>>n;
    vector<vector<int>>res;
    for(int i=1; i<=n; i++){
        res.pb({i,1,i});
    }
    for(int i=1; i<n; i++){
        res.pb({i,i+1,n});
    }

    cout<<res.size()<<nn;
    for(auto &it: res){
        for(auto &jt: it) cout<<jt<<" "; cout<<nn;
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

// 1 4 3 2
// 2 1 4 3
// 3 2 1 4
// 4 3 2 1