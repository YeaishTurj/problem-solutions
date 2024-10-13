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
        ll n; cin>>n;
        string str, res; cin>>str;
        ll i=n-1;
        while(i>=0){
            if(str[i]!='a' && str[i]!='e'){
                res.pb(str[i]);
                res.pb(str[i-1]);
                res.pb(str[i-2]);
                res.pb('.');
                i-=3;
            }else{
                res.pb(str[i]);
                res.pb(str[i-1]);
                res.pb('.');
                i-=2;
            }
        }
        reverse(res.begin(), res.end());
        for(int i=1; i<res.size(); i++) cout<<res[i];
        cout<<nn;
    }
    return 0;
}