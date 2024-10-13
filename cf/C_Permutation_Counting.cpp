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
    int turj=1;
    while(k){if(k&1) turj*=n; n*=n, k>>=1;}
    return turj;
}
bool compare(pair<int,int>&a, pair<int,int>&b){
    if(a.first!=b.first){
        if(a.first<b.first) return false;
    }else{
        if(a.second>b.second) return false;
    }
    return true;
}
void print(vector<int>&v){
    for(auto &it: v) cout<<it<<" "; cout<<nn;
}
int32_t main(){
    fast_IO
    w(t){
        int n,k; cin>>n>>k;
        vector<int>a(n);
        for(auto &it: a) cin>>it;
        sort(a.begin(),a.end());
        int l=a[0], r=LONG_LONG_MAX;
        while(l<=r){
            int mid=(l+r)/2;
            int i=0,tempK=k;
            while(i<n){
                if(a[i]<mid){
                    if(mid-a[i]<=tempK) tempK-=mid-a[i];
                    else break;
                }
                i++;
            }
            if(i==n) l=mid+1;
            else r=mid-1;
        }
        int ans=r+(r-1)*(n-1);
        for(auto &it: a){
            if(it<r) k-=r-it,it=0;
            else it-=r;
        }
        for(auto &it: a){
            if(k) it++,k--;
        }
        for(auto &it: a) if(it) ans++;
        cout<<ans<<nn;
        // cout<<"----------"<<nn;
    }
    return 0;
}