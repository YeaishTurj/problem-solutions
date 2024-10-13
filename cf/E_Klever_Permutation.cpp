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
        ll n,k; cin>>n>>k;
        ll a[n], first=1, second=n;
        for(int i=0; i<k; i++){
            ll j=i;
            if(i%2==0){
                while(j<n){
                    a[j]=first;
                    first++;
                    j+=k;
                }
            }else{
                while(j<n){
                    a[j]=second;
                    second--;
                    j+=k;
                }
            }
        }
        for(auto &it: a) cout<<it<<" "; cout<<nn;
    }
    return 0;
}
// 0	1	2	3	4	5	6	7	8	9	10	11	12	
// 1	13	8	7	2	12	9	6	3	11	10	5	4	
// 1	7	8	13	2	6	9	12	3	5	10	11	4	
