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
    string s; cin>>s;
    // a--n
    if(s.back()=='A'){
        if(s.front()=='A'){
            cout<<"Alice"<<nn;
            return;
        }
        if(s[n-2]=='A'){
            cout<<"Alice"<<nn;
            return;
        }
        cout<<"Bob"<<nn;
        return;
    }
    if(s.front()=='A'){
        if(count(s.begin(),s.end(),'A')==n-1){
            cout<<"Alice"<<nn;
            return;
        }
        cout<<"Bob"<<nn;
        return;
    }
    cout<<"Bob"<<nn;
    return;
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