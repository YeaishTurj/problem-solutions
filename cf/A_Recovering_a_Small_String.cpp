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
        ll n;
        cin>>n;
        int flag=0;
        for(int i=0; i<26; i++){
            ll a=i+1;
            for(int j=0; j<26; j++){
                ll b=j+1;
                for(int k=0; k<26; k++){
                    ll c=k+1;
                    if(a+b+c==n){
                        cout<<char(a+96)<<char(b+96)<<char(c+96)<<nn; 
                        flag=1; break;
                    }
                }
                if(flag) break;
            }
            if(flag) break;
        }
    }
    return 0;
}