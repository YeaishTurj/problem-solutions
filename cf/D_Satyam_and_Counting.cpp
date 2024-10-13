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
    vector<vector<int>>points(2,vector<int>(n+1));
    map<int,int>xx,yy;
    for(int i=0; i<n; i++){
        int x,y; cin>>x>>y;
        xx[x]++; yy[y]++;
        points[y][x]++;
    }
    int cnt=0;
    for(int y=0; y<2; y++){
        for(int x=0; x<=n; x++){
            // cout<<points[y][x]<<" ";
            if(points[y][x] && points[y^1][x]){
                cnt+=yy[y]-1;
            }
            if(points[y][x]){
                if(x-1>=0 && points[y^1][x-1] && x+1<=n && points[y^1][x+1]) cnt++;
            }
        }
        // cout<<nn;
    }
    cout<<cnt<<nn;
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