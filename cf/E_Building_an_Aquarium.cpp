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
        ll n,x; cin>>n>>x;
        ll a[n]; 
        for(auto &it: a) cin>>it;
        ll start=1, end=INT_MAX;
        ll height=1;
        while(start<=end){
            ll mid=(start+end)/2;
            ll water=0;
            for(auto &it: a){
                if(mid>it){
                    water+=mid-it;
                }
            }
            if(water<=x){
                height=mid;
                start=mid+1;
            }else end=mid-1;
        }
        cout<<height<<nn;
    }
    return 0;
}