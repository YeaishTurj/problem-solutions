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
bool check(vector<int>&v, int k){
    vector<int>one(32,0);
    for(int i=0; i<k; i++){
        for(int j=0; j<32; j++){
            one[j]+=!!(v[i]&(1LL<<j));
        }
    }
    int num=0;
    for(int i=0; i<32; i++){
        num+=binPow(2,i)*(!!one[i]);
    }
    int l=0,r=k;
    while(r<v.size()){
        for(int j=0; j<32; j++) one[j]-=!!(v[l]&(1LL<<j));
        for(int j=0; j<32; j++) one[j]+=!!(v[r]&(1LL<<j));
        int num1=0;
        for(int j=0; j<32; j++) num1+=binPow(2,j)*(!!one[j]);
        if(num1!=num) return 0;
        l++; r++;
    }
    return 1;
}
int32_t main(){
    fast_IO
    w(t){
        int n; cin>>n;
        vector<int>v(n);
        for(auto &it: v) cin>>it;
        int l=1,r=n;
        while(l<=r){
            int mid=(l+r)/2;
            if(check(v,mid)) r=mid-1;
            else l=mid+1;
        }
        cout<<l<<nn;
        // check(v,3);
        // cout<<"----------"<<nn;
    }
    return 0;
}