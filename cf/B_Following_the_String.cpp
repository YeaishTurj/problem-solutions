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
        vector<pair<int,int>>v;
        string ans(n,'0');
        for(int i=0; i<n; i++){
            int x; cin>>x;
            v.pb({x,i});
        }
        sort(v.begin(),v.end());
        // for(auto &[x,i]: v) cout<<x<<" "; cout<<nn;
        int i=0;
        while(i<n){
            int j=i;
            while(j<n && v[i].first==v[j].first){
                ans[v[j].second]=char('a'+j-i);
                j++;
            }
            i=j;
        }
        cout<<ans<<nn;
    }
    return 0;
}