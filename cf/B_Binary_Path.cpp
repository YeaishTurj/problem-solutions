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
        string s1,s2,str; cin>>s1>>s2;
        ll i=0,res=1;
        while(i<n-1){
            str.pb(s1[i]);
            if(s1[i+1]=='1' && s2[i]=='0'){
                break;
            }
            if(s1[i+1]==s2[i]) res++;
            else{
                if(s1[i+1]=='0') res=1;
            }
            i++;
        }
        // cout<<str<<nn;
        if(i==n-1){
            str.pb(s1[i]);
            str.pb(s2[i]);
        }else while(i<n) str.pb(s2[i++]);
        cout<<str<<nn<<res<<nn;
    }
    return 0;
}