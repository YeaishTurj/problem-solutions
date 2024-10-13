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
        ll a[n];
        map<ll,ll>preM,suffM;
        for(auto &it: a){
            cin>>it;
        }
        ll prefix[n]={},shuffix[n]={};
        for(int i=0; i<n; i++){
            preM[a[i]]++;
            ll mex=0;
            if(i) mex=prefix[i-1];
            while(preM.find(mex)!=preM.end() && mex<=i+1) mex++;
            prefix[i]=mex;
        }
        for(int j=n-1; j>=0; j--){
            suffM[a[j]]++;
            ll mex=0;
            if(j<n-1) mex=shuffix[j+1];
            while(suffM.find(mex)!=suffM.end() && mex<=n-j) mex++;
            shuffix[j]=mex;
        }
        // for(auto &it: a) cout<<it<<" "; cout<<nn;
        // for(auto &it: prefix) cout<<it<<" "; cout<<nn;
        // for(auto &it: shuffix) cout<<it<<" "; cout<<nn;
        ll flag=0,res=0;
        for(int i=0; i<n-1; i++){
            if(prefix[i]==shuffix[i+1]){
                flag=1;
                res=i+1;
                break;
            }
        }
        if(flag){
            cout<<2<<nn;
            cout<<1<<" "<<res<<nn<<res+1<<" "<<n<<nn;
        }else cout<<-1<<nn;
        // cout<<"---------------"<<nn;
    }
    return 0;
}