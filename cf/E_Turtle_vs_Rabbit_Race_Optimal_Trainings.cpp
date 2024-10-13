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
        ll a[n], prefix[n+1]={};
        for(int i=0; i<n; i++){
            cin>>a[i];
            prefix[i+1]=prefix[i]+a[i];
        }
        // for(auto &it: a) cout<<it<<" "; cout<<nn;
        // for(auto &it: prefix) cout<<it<<" "; cout<<nn;
        ll q; cin>>q;
        while(q--){
            ll l,u; cin>>l>>u;
            // cout<<l<<"-> ";
            // for(int i=l; i<=n; i++){
            //     ll sum=prefix[i]-prefix[l-1];
            //     cout<<sum*u-sum*(sum-1)/2LL<<" "; 
            // }cout<<nn;
            ll left=l, right=n;
            while(left<right){
                ll mid=(left+right)/2;
                ll sum1=prefix[mid]-prefix[l-1], sum2=prefix[mid+1]-prefix[l-1];
                ll num1=sum1*u-sum1*(sum1-1)/2LL, num2=sum2*u-sum2*(sum2-1)/2LL;
                if(num1>=num2) right=mid;
                else left=mid+1;
            }
            cout<<left<<" ";
        }cout<<nn;
        // cout<<"---------------"<<nn;
        // max -> prefix*(2*u-(prefix-1)) / 2
        // max -> prefix*(u-(prefix-1)/2)
    }
    return 0;
}