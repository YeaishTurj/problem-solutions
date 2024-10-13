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
        vector<ll>v, prefix;
        while(n--){
            ll x; cin>>x;
            v.pb(x);
        }
        sort(v.begin(), v.end());
        // for(auto &it: v) cout<<it<<" "; cout<<nn;
        for(int i=0; i<v.size(); i++){
            if(i){
                prefix.pb(v[i]+prefix[i-1]);
            }else{
                prefix.pb(v[i]);
            }
        }
        int flag=1;
        for(int i=1; i<v.size(); i++){
            if(v[i]>prefix[i-1]) flag=0;
        }
        if(!flag || v[0]!=1) cout<<"NO"<<nn;
        else cout<<"YES"<<nn;
        // for(auto &it: prefix) cout<<it<<" "; cout<<nn;
        // cout<<nn<<"-------------"<<nn;
    }
    return 0;
}
