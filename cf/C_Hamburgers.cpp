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
    string str; cin>>str;
    vector<int>a(3,0),b(3),p(3);
    for(auto &it: b) cin>>it;
    for(auto &it: p) cin>>it;
    int k; cin>>k;
    for(auto &it: str)
        if(it=='B') a[0]++;
        else if(it=='S') a[1]++;
        else a[2]++;
    // for(auto &it: a) cout<<it<<" "; cout<<nn;
    // for(auto &it: b) cout<<it<<" "; cout<<nn;
    // for(auto &it: p) cout<<it<<" "; cout<<nn;
    auto check=[](vector<int>&a,vector<int>&b,vector<int>&p,int mid,int r){
        for(int i=0; i<3; i++){
            if(!a[i]) continue;
            int ing=b[i]/a[i];
            if(ing<mid){
                int need=(mid-ing)*a[i];
                int left=b[i]%a[i];
                r-=(need-left)*p[i];             
            }
            if(r<0) return 0;
        }
        return 1;
    };
    int money=0;
    for(int i=0; i<a.size(); i++){
        money+=a[i]*p[i];
    }
    int l=0, r=INT_MAX+k/money;
    while(l<=r){
        int mid=(r-l)/2+l;
        if(check(a,b,p,mid,k)) l=mid+1;
        else r=mid-1;
    }
    cout<<r<<nn;
    return 0;
}