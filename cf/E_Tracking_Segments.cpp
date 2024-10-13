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
        int n,m; cin>>n>>m;
        vector<pair<int,int>>v;
        for(int i=0; i<m; i++){
            int l,r; cin>>l>>r;
            v.pb({l,r});
        }
        vector<int>a(n,0);
        int q; cin>>q;
        vector<int>queries(q);
        for(auto &it: queries) cin>>it;
        auto ok=[](vector<pair<int,int>>&v, vector<int>&a, vector<int>&queries, int ind){
            for(int i=0; i<=ind; i++){
                a[queries[i]-1]++;
            }
            vector<int>prefix(a.size()+1,0);
            for(int i=0; i<a.size(); i++){
                prefix[i+1]=prefix[i];
                if(a[i]) prefix[i+1]++, a[i]--;
            }
            // cout<<ind<<nn;
            // for(auto &it: a) cout<<it<<" "; cout<<nn;
            // for(auto &it: prefix) cout<<it<<" "; cout<<nn;
            for(auto &it: v){
                int l=it.first, r=it.second;
                // cout<<l<<" "<<r<<nn;
                int cnt=prefix[r]-prefix[l-1];
                if(cnt>(r-l+1)>>1) return 1;
            }
            return 0;
        };
        int l=0, r=q-1;
        while(l<=r){
            int mid=(l+r)>>1;
            if(ok(v,a,queries,mid)) r=mid-1;
            else l=mid+1;
            // cout<<"------------------"<<nn;
        }
        // cout<<q<<nn;
        // cout<<l<<nn;
        cout<<((l>=0 && l<=q-1)?l+1:-1)<<nn;
        // cout<<"--------------------"<<nn;
    }
    return 0;
}