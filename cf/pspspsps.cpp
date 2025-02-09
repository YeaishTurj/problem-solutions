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
    int foundP=0, foundS=0, sInd=-1;
    for(int i=0; i<n; i++){
        if(s[i]=='p'){
            if(foundS){
                int numS=n-sInd;
                int numP=i+1;
                int mn=i-sInd+1;
                if((numS-mn) && (numP-mn)){
                    cout<<"NO"<<nn;
                    return;
                }
            }
            foundP=1;
        }
        else if(s[i]=='s'){
            if(foundP){
                cout<<"NO"<<nn;
                return;
            }

            foundS=1;
            sInd=i;
        }
    }
    cout<<"YES"<<nn;
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