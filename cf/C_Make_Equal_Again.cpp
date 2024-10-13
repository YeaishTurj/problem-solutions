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
        ll a[n];
        for(auto &it: a) cin>>it;
        vector<pair<ll,ll>>v;
        int i=0;
        while(i<n){
            int j=i;
            while(j<n && a[i]==a[j]){
                j++;
            }
            v.push_back({i,j-i});
            if(i==j) i++;
            else i=j;
        }
        // for(auto &it: v) cout<<it.first<<"+"<<it.second<<" "; cout<<nn;
        ll ans=0;
        if(v.size()==1) ans=0;
        else if(a[0]==a[n-1]){
            ans=v[v.size()-2].first+v[v.size()-2].second-v[0].second;
        }else{
            ans=-1;
            // cout<<n<<nn;
            if(v[0].second>=v[v.size()-1].second){
                ans=n-v[0].second;
            }else{
                ans=n-v[v.size()-1].second;
            }
        }
        cout<<ans<<nn;
        // cout<<"----------------"<<nn;
    }
    return 0;
}