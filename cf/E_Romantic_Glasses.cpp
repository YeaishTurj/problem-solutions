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
        ll a[n], check[n];
        for(auto &it: a) cin>>it;
        map<ll,ll>m;
        ll flag=0;
        for(int i=0; i<n; i++){
            if(!i){
                check[i]=a[i];
            }else if(i&1){
                check[i]=check[i-1]-a[i];
                if(!check[i] || m.find(check[i])!=m.end()){
                    flag=1;
                    break;
                }
            }else if(i%2==0){
                check[i]=check[i-1]+a[i];
                if(!check[i] || m.find(check[i])!=m.end()){
                    flag=1;
                    break;
                }
            }
            m[check[i]]++;
        }
        // for(auto &it: a) cout<<it<<" "; cout<<nn;
        // for(auto &it: check) cout<<it<<" "; cout<<nn;
        cout<<(flag?"YES":"NO")<<nn;
    }
    return 0;
}