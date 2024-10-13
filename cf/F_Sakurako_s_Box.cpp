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
const int m=1e9+7;
int binPow(int n, int k){
    int turj=1;
    while(k){
        if(k&1) turj=(turj*n)%m;
        n=(n*n)%m;
        k>>=1;
    }
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
    int sum=0,sqrSum=0;
    for(auto &it: a){
        cin>>it;
        sum=(sum+it)%m;
        sqrSum=(sqrSum+(it*it)%m)%m;
    }
    int prod=(((sum*sum)%m)-(sqrSum%m)+m)%m;
    // prod=prod/2;
    int inv2=binPow(2,m-2);
    // // cout<<inv2<<nn;
    prod=(prod*inv2)%m;
    int div=(n*(n-1))%m;
    div=(div*inv2)%m;
    int invDiv=binPow(div,m-2);
    // // cout<<prod<<" "<<div<<nn;
    // // cout<<prod/div<<nn;
    int ans=(prod*invDiv)%m;
    cout<<ans<<nn;
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