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
ll find_it(vector<ll>&v, ll x){
    ll l=0, r=v.size(), ind;
    while(l<=r){
        ll mid=(l+r)/2;
        // if(v[mid]==x) return mid;
        if(v[mid]<=x){
            if(mid<v.size()) ind=mid;
            l=mid+1;
        }
        else r=mid-1;
    }
    return ind;
}
int main(){
    fast_IO
    w(t){
        ll n, k; cin>>n>>k;
        ll a[n], h[n];
        for(auto &it: a) cin>>it;
        for(auto &it: h) cin>>it;
        vector<vector<ll>>v;
        vector<ll>temp;
        for(ll i=0; i<n-1; i++){
            temp.pb(i);
            if(h[i]%h[i+1]!=0){
                v.pb(temp);
                temp.clear();
            }
        }
        if(n>1 && h[n-2]%h[n-1]==0){
            temp.pb(n-1); v.pb(temp);
        }else{
            temp.clear(); temp.pb(n-1); v.pb(temp);
        }
        temp.clear();
        // cout<<"========="<<nn;
        vector<vector<ll>>prefix;
        for(int i=0; i<v.size(); i++){
            temp.pb(0);
            temp.pb(a[v[i][0]]);
            for(int j=1; j<v[i].size(); j++){
                temp.pb(temp[j]+a[v[i][j]]);
            }
            prefix.pb(temp); temp.clear();
        }
        ll mx=INT_MIN;
        for(auto &it: prefix){
            for(int i=0; i<it.size(); i++){
                mx=max(mx,find_it(it,it[i]+k)-i);
            }
        }
        cout<<mx<<nn;
        // cout<<"------------"<<nn;
    }
    return 0;
}