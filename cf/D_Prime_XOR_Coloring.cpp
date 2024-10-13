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
int N=1<<20;
vector<int>prime(N,1),num;
void sieve(){
    prime[0]=prime[1]=0;
    for(int i=4; i<N; i+=2) prime[i]=0;
    for(int i=3; i<=sqrt(N); i++){
        if(prime[i]){
            for(int j=i*i; j<N; j+=i){
                if(prime[j]) prime[j]=0;
            }
        }
    }
    for(int i=0; i<N; i++) if(prime[i]) num.pb(i);
}
void solve(){
    int n; cin>>n;
}
int32_t main(){
    fast_IO
    sieve();
    for(int i=0; i<100; i++) cout<<(bitset<7>(num[i]))<<" "; cout<<nn;
    int tt=1;
    cin>>tt;
    while(tt--){
        solve();
        cout<<"-----------"<<nn;
    }
    return 0;
}