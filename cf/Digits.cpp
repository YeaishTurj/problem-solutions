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
int fact(int n){
    if(n==0) return 1;
    return n*fact(n-1);
}
void print(int m, int d){
    int n=fact(m);
    for(int i=0; i<n; i++){
        cout<<d;
    }cout<<nn;
}
void solve(){
    int n,d; cin>>n>>d;
    // print(n,d);
    set<int>res;
    res.insert(1);
    // sum / 3,9 = 0
    if(n>2 || d%3==0) res.insert(3);
    if(n>5 || d%9==0) res.insert(9);
    if(n<=5){
        int sum=d*fact(n);
        if(sum%9==0) res.insert(9);
    }
    // last dig 5 
    if(d%5==0) res.insert(5);
    if(n>2 || d%7==0) res.insert(7);
    for(auto &it: res) cout<<it<<" ";
    cout<<nn;
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