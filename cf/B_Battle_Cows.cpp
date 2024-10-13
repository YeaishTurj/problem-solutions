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
        int n,k; cin>>n>>k;
        int a[n], b[n];
        int mine, mx_pos, mx=-1;
        k--;
        for(int i=0; i<n; i++){
            cin>>a[i];
            b[i]=a[i];
            if(i==k) mine=a[i];
        }
        int change=k;
        for(int i=0; i<n; i++){
            if(a[i]>mine){
                change=i;
                break;
            }
        }
        swap(a[0],a[k]);
        swap(b[change],b[k]);
        int cnt1=0, cnt2=0;
        for(int i=0; i<n-1; i++){
            if(a[i]>a[i+1]){
                a[i+1]=a[i];
                if(a[i]==mine) cnt1++;
            }else{
                if(a[i+1]==mine) cnt1++;
            }
        }
        for(int i=0; i<n-1; i++){
            if(b[i]>b[i+1]){
                b[i+1]=b[i];
                if(b[i]==mine) cnt2++;
            }else{
                if(b[i+1]==mine) cnt2++;
            }
        }
        cout<<max(cnt1,cnt2)<<nn;
        // cout<<"----------------"<<nn;
    }
    return 0;
}