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
vector<bool>is_prime;
void sieve(int n) {
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i * i <= n; ++i) {
        if (is_prime[i]) {
            for (int j = i * i; j <= n; j += i) {
                is_prime[j] = false;
            }
        }
    }
}
void solve(){
    int n; cin>>n;
    if(n<=4){
        cout<<-1<<nn;
        return;
    }
    int odd=1;
    vector<int>v;
    while(odd<=n){
        v.pb(odd);
        odd+=2;
    }
    set<int>even;
    for(int i=2; i<=n; i+=2){
        even.insert(i);
    }
    // for(auto &it: v) cout<<it<<" "; cout<<nn;
    for(int i=2; i<=n; i+=2){
        if(is_prime[v.back()+i]==false){
            // cout<<i<<" "<<v.back()<<nn;
            v.pb(i);
            even.erase(i);
            break;
        }
    }
    for(auto &it: even) v.pb(it);
    for(auto &it: v) cout<<it<<" "; cout<<nn;
}
int32_t main(){
    fast_IO
    is_prime.resize(1000000,true);
    sieve(1000000);
    int tt=1;
    cin>>tt;
    while(tt--){
        solve();
        // cout<<nn<<"-----------"<<nn;
    }
    return 0;
}