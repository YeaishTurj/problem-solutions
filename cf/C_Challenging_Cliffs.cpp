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
        ll a[n];
        map<ll,ll>m;
        for(auto &it: a) cin>>it, m[it]++;
        sort(a,a+n);
        pair<ll,ll>p,ind;
        p.first=INT_MIN, p.second=INT_MAX;
        for(int i=1; i<n; i++){
            if((a[i]-a[i-1])<(p.second-p.first)){
                p.first=a[i-1], p.second=a[i];
                ind.first=i-1, ind.second=i;
            } 
        }
        // cout<<ind.first<<" "<<ind.second<<nn;
        if(n==1) cout<<a[0]<<nn;
        else if(n==2) cout<<a[0]<<" "<<a[1]<<nn;
        else{
            cout<<p.second<<" ";
            for(int i=ind.second+1; i<n; i++) cout<<a[i]<<" ";
            for(int i=0; i<=ind.first; i++) cout<<a[i]<<" ";
            // for(int i=0; i<=ind.first; i++) cout<<a[i]<<" "; 
            cout<<nn;            
        }

        // cout<<"-----------------"<<nn; 1 2 3 4 -- 1  2
    }
    return 0;
}