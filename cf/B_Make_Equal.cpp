#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
#define Oset tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
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
        ll n; cin>>n;
        ll a[n];
        ll total=0;
        for(auto &it: a) cin>>it, total+=it;
        // cout<<total/n<<nn;
        ll need=total/n;
        // for(auto &it: a) cout<<it<<" "; cout<<nn;
        int carry=0, flag=1;
        for(auto &it: a){
            if(it>=need){
                carry+=it-need; continue;
            }
            if(it+carry<need){
                flag=0; break;
            }else{
                carry-=(need-it);
            }
        }
        cout<<(flag?"YES":"NO")<<nn;
        // cout<<"---------------"<<nn;
    }
    return 0;
}