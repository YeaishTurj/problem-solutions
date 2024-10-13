#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
#define Oset tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define fast_IO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define nn "\n"
// #define int long long
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
    int n,x; cin>>n>>x;
    int cnt=0;
    int a=1,b,c;
    while(a*a<=n){
        b=a;
        while(b*b<=n){
            c=b;
            while(c<=(n-a*b)/(a+b) && (c<=x-a-b)){
                if(a*b+b*c+c*a<=n && (a+b+c<=x)){
                    if(a==b&&b==c) cnt++;
                    else if(a==b||b==c||c==a) cnt+=3;
                    else cnt+=6;
                }
                c++;
            }
            b++;
        }
        a++;
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