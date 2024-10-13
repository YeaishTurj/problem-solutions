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
int32_t main(){
    fast_IO
    w(t){
        int n,k,q; cin>>n>>k>>q;
        vector<int>a(k),b(k);
        for(auto &it: a) cin>>it; // position
        for(auto &it: b) cin>>it; // time
        // for(auto &it: a) cout<<it<<" "; cout<<nn;
        // for(auto &it: b) cout<<it<<" "; cout<<nn; cout<<nn;
        while(q--){
            int x; cin>>x;
            // cout<<x<<" ";
            if(x==0) cout<<0<<" ";
            else if(x==n) cout<<b.back()<<" ";
            else{
                int ind=lower_bound(a.begin(),a.end(),x)-a.begin();
                if(a[ind]==x) cout<<b[ind]<<" ";
                else{
                    if(ind==0){
                        cout<<(int)(b[ind]*x/a[ind])<<" ";
                    }else{
                        // cout<<x<<" ";
                        // cout<<ind<<nn;
                        cout<<b[ind-1]+(int)((b[ind]-b[ind-1])*(x-a[ind-1])/(a[ind]-a[ind-1]))<<" ";
                    }
                }
            }
            // cout<<nn;
        }cout<<nn;
        // cout<<"-------------"<<nn;
    }
    return 0;
}