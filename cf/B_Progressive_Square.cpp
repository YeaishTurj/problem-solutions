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
        int n,c,d; cin>>n>>c>>d;
        vector<int>a(n*n);
        for(auto &it: a) cin>>it;
        sort(a.begin(),a.end());
        vector<vector<int>>mat(n,vector<int>(n,0));
        mat[0][0]=a[0];
        for(int i=0; i<n; i++){
            if(i!=0) mat[i][0]=mat[i-1][0]+c;
            for(int j=0; j<n; j++){
                if(j!=0){
                    mat[i][j]=mat[i][j-1]+d;
                }
            }
        }
        vector<int>v;
        for(auto &it: mat){
            for(auto &jt: it){
                v.pb(jt);
            }
        }
        sort(v.begin(),v.end());
        cout<<(a==v?"YES":"NO")<<nn;
        // cout<<"------------"<<nn;
    }
    return 0;
}