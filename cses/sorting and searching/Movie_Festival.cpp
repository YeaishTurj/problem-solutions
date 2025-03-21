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
    return a.second < b.second;
}
int32_t main(){
    fast_IO
    int n; cin>>n;
    vector<pair<int,int>>v;
    for(int i=0; i<n; i++){
        int a,b; cin>>a>>b;
        v.pb({a,b});
    }
    sort(v.begin(),v.end(),compare);
    int ans=1;
    int i=0,j=1;
    while(j<n){
        if(v[j].first>=v[i].second){
            ans++;
            i=j;
        }
        j++;
    }
    cout<<ans<<nn;
    return 0;
}