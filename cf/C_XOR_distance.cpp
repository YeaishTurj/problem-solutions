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
    if(k==0) return 1LL;
    else{
        ll turj=1LL;
        while(k){if(k&(1LL)) turj*=n; n*=n, k>>=(1LL);}
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
        ll a, b, r; cin>>a>>b>>r;
        if(a<b) swap(a,b);
        // for(ll i=0; i<62; i++){
        //     cout<<!!(a&(1LL<<i));
        // }cout<<nn;
        // for(ll i=0; i<62; i++){
        //     cout<<!!(b&(1LL<<i));
        // }cout<<nn;
        // for(ll i=0; i<62; i++){
        //     cout<<!!(r&(1LL<<i));
        // }cout<<nn;
        ll x=0, flag=0;
        for(ll i=61; i>=0; i--){
            if(!!(a&(1LL<<i)) != !!(b&(1LL<<i))){
                if(flag){
                    if(a>b){
                        if(!(b&(1LL<<i)) && (x+binPow(2LL,i))<=r){
                            x+=binPow(2LL,i);
                        }
                    }else{
                        if(!(a&(1LL<<i)) && (x+binPow(2LL,i))<=r){
                            x+=binPow(2LL,i);
                        }
                    }
                }else flag=1;
            }
        }
        cout<<abs((a^x)-(b^x))<<nn;
        // cout<<"-------------------"<<nn;
    }
    return 0;
}