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
    int n,k; cin>>n>>k;
    vector<vector<int>>v(n,vector<int>(3));
    int total=0;
    for(int i=0; i<n; i++){
        cin>>v[i][0]>>v[i][1]>>v[i][2];
        total+=v[i][0];
    }
    sort(v.begin(),v.end());
    int l=0, r=v[n-1][0];
    while(l<=r){
        int mid=(l+r)/2;
        int cost=0, left=0, right=0;
        vector<pair<int,int>>vp;
        for(auto &it: v){
            if(it[0]<mid){
                left+=mid-it[0];
                vp.pb({it[2],it[0]});
            }
            if(it[0]>mid){
                right+=it[0]-mid;
                cost+=it[1]*(it[0]-mid);
            }
        }
        sort(vp.begin(),vp.end());
        if(left>=right){
            for(auto &it: vp){
                cost+=min(right,it.second)*it.first;
                right-=min(right,it.second);
            }
            if(cost<=k) r=mid-1;
            else l=mid+1;
        }else{
            l=mid+1;
        }
    }
    cout<<l<<nn;
    return 0;
}

