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
        ll a[n],flag1=1, flag2=1;
        for(auto &it: a) cin>>it;
        for(int i=0; i<n/2; i++){
            flag1=1, flag2=1;
            if(a[i]!=a[n-i-1]){
                int j=0,k=n-1;
                while(j<k){
                    if(a[j]==a[i]) j++;
                    else if(a[k]==a[i]) k--;
                    else if(a[j]!=a[k]){
                        flag1=0; break;
                    }else j++, k--;
                }
                j=0, k=n-1;
                while(j<k){
                    if(a[j]==a[n-i-1]) j++;
                    else if(a[k]==a[n-i-1]) k--;
                    else if(a[j]!=a[k]){
                        flag2=0; break;
                    }else j++, k--;
                }
                break;
            }
        }
        cout<<((flag1+flag2)?"YES":"NO")<<nn;
        // cout<<"-------------------"<<nn;
    }
    return 0;
}