#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
#define Oset tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define fast_IO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define w(t) int t; cin>>t; while(t--)
#define nn "\n"
#define int long long
#define pb push_back
#define ld long double
int binPow(int n, int k){
    if(k==0) return 1;
    else{
        int turj=1;
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
int32_t main(){
    fast_IO
    w(t){
        int k,n,a,b; cin>>k>>n>>a>>b;
        int l=0, r=k/a, ans=-1;
        if(k%a==0) r--;
        r=min(n,r);
        while(l<=r){
            int mid=(l+r)/2;
            int chargeLeft=k-mid*a, turnLeft=k-mid;
            int playWithB=chargeLeft/b;
            if(chargeLeft%b==0) playWithB--;
            // cout<<mid<<" "<<playWithB<<nn;
            // if(playWithB+mid==n) ans=mid, l=mid+1;
            if(playWithB+mid>=n) l=mid+1;
            else r=mid-1;
        }
        // cout<<l<<" "<<r<<nn;
        cout<<r<<nn;
        // cout<<"----------------"<<nn;
    }
    return 0;
}