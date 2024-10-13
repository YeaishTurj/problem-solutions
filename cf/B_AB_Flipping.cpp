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
        int n; cin>>n;
        string str; cin>>str;
        int cnt=0;
        vector<int>v;
        for(int i=0; i<str.size(); i++){
            if(str[i]=='A') cnt++;
            else{
                v.pb(cnt);
                cnt=0;
            }
        }
        if(v.size()){
            ll ans=0, flag=0;
            for(int i=0; i<v.size(); i++){
                if(v[i] && flag==0){
                    ans+=v[i];
                    flag=1;
                }else if(flag) ans+=v[i]+1;
            }
            cout<<ans<<nn;
        }else cout<<0<<nn;
    }
    return 0;
}