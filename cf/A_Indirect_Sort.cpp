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
        vector<ll>a(n), b;
        for(auto &it: a){
            cin>>it; b.pb(it);
        }
        for(int l=0; l<n; l++){
            for(int j=1; j<n; j++){
                for(int k=j+1; k<n; k++){
                    if(a[j]>a[k]){
                        int flag=0;
                        for(int i=0; i<j; i++){
                            if(a[i]<=a[k]){
                                flag=1;
                                swap(a[j],a[k]); break;
                            }
                        }
                        if(flag) break;
                    }
                }
            }
        }
        // for(auto &it: a) cout<<it<<" "; cout<<nn;
        sort(b.begin(),b.end());
        if(b==a) cout<<"Yes"<<nn;
        else cout<<"No"<<nn;
    }
    return 0;
}