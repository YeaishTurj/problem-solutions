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
    vector<int>a(n);
    for(int i=0; i<n; i++) cin>>a[i];
    sort(a.begin(),a.end());
    // for(int i=0; i<n; i++){
    //     int ans=0;
    //     for(int j=0; j<n; j++){
    //         ans+=a[i]^a[j];
    //         cout<<bitset<8>(a[i])<<" "<<bitset<8>(a[j])<<" "<<bitset<8>(a[i]^a[j])<<nn;
    //     }
    //     cout<<ans<<" "<<bitset<8>(ans)<<nn;
    //     cout<<nn;
    // }
    vector<int>bit(32,0);
    for(auto &it: a){
        for(int i=0; i<32; i++){
            if(it&(1<<i)){
                bit[i]++;
            }
        }
    }
    int ans=0;
    for(auto &it: a){
        int total=0;
        for(int i=0; i<32; i++){
            if(it&(1<<i)){
                total+=(n-bit[i])*(1<<i);
            }else{
                total+=bit[i]*(1<<i);
            }
        }
        ans=max(ans,total);
    }
    cout<<ans<<nn;

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