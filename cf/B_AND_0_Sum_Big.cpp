#include<bits/stdc++.h>
using namespace std;
#define fast_IO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define w(t) int t; cin>>t; while(t--)
#define nn "\n"
#define ll long long
#define pb push_back
#define ld long double
ll binPow(ll n, ll k){
    if(k==0) return 1;
    else{
        ll turj=1;
        while(k){if(k&1) turj*=n; n*=n, k>>=1;}
        return turj;
    }
}
bool compare(pair<int,int>&a, pair<int,int>&b){
    if(a.first!=b.first){
        if(a.first<b.first) return false;
        return true;
    }else{
        if(a.second>b.second) return false;
        return true;
    }
}
int main(){
    fast_IO
    w(t){
        ll n, k; cin>>n>>k;
        ll ans=1, m=1e9+7;
        for(int i=0; i<k; i++){
            ans = (n%m * ans%m) % m;
        }
        cout<<ans%m<<nn;
    }
    //(1 ≤ n ≤ 10^5, 1 ≤ k ≤ 20)
    // int n=8;
    // int m=n;
    // while(n--){
    //     string str;
    //     for(int i=0; i<ceil(log2(m)); i++){
    //         str.pb(((n&(1<<i))?1:0)+'0');
    //     }
    //     reverse(str.begin(), str.end());
    //     cout<<n<<" "<<str<<nn;
    // }
    return 0;
}