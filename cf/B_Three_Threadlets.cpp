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
        ll a[3];
        for(auto &it: a) cin>>it;
        ll mn=*min_element(a,a+3), cnt=0, flag=1;
        for(auto &it: a){
            if(it%mn==0){
                cnt+=it/mn-1;
            }else flag=0;
        }
        cout<<(cnt<4 && flag?"YES":"NO")<<nn;
        // cout<<"-------------"<<nn;
    }
    return 0;
}