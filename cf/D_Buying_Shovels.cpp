#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
#define Oset tree<ll, null_type, less<ll>, rb_tree_tag, tree_order_statistics_node_update>
#define fast_IO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define w(t) ll t; cin>>t; while(t--)
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
bool compare(pair<ll,ll>&a, pair<ll,ll>&b){
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
        if(k>=n) cout<<1<<nn;
        else{
            bool prime=1;
            if(n%2==0 && n!=2) prime=0;
            for(int i=3; i<=sqrt(n) && prime; i+=2){
                if(n%i==0){
                    prime=0;
                    break;
                }
            }
            if(prime) cout<<n<<nn;
            else{
                ll ans=INT_MAX;
                for(ll i=1; i<=sqrt(n); i++){
                    if(n%i==0){
                        ll x=i,y=n/i;
                        if(x<=k) ans=min(ans,y);
                        if(y<=k) ans=min(ans,x); 
                    }
                }
                cout<<ans<<nn;
            }
        }
        // cout<<"--------------------------"<<nn;
    }
}