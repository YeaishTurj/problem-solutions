#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
#define Oset tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define fast_IO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
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
void solve(){
    int n,q; cin>>n>>q;
    string a,b; cin>>a>>b;
    vector<vector<int>>prefixA(n+1,vector<int>(26)),prefixB(n+1,vector<int>(26));
    for(int i=0; i<n; i++){
        prefixA[i+1]=prefixA[i];
        prefixA[i+1][a[i]-'a']+=1;
        prefixB[i+1]=prefixB[i];
        prefixB[i+1][b[i]-'a']+=1;
    }
    // for(int i=0; i<n+1; i++){
    //     for(int j=0; j<26; j++){
    //         if(prefixA[i][j]) cout<<char(j+'a')<<prefixA[i][j]<<" ";
    //     }cout<<nn;
    // }
    while(q--){
        int l,r; cin>>l>>r;
        // for a
        vector<int>A(26,0),B(26,0);
        int beshi=0,kom=0;
        for(int i=0; i<26; i++){
            A[i]=prefixA[r][i]-prefixA[l-1][i];
            B[i]=prefixB[r][i]-prefixB[l-1][i];
            
        }
        for(int i=0; i<26; i++){
            if(A[i]>B[i]) beshi+=A[i]-B[i];
            if(B[i]>A[i]) kom+=B[i]-A[i];
        }
        // for(int i=0; i<26; i++){
        //     if(A[i]) cout<<char(i+'a')<<A[i]<<" ";
        // }cout<<nn;
        // for(int i=0; i<26; i++){
        //     if(B[i]) cout<<char(i+'a')<<B[i]<<" ";
        // }cout<<nn;
        // cout<<beshi<<" "<<kom<<nn;
        // cout<<"==="<<nn;
        cout<<beshi<<nn;
    }
}
int32_t main(){
    fast_IO
    int tt=1;
    cin>>tt;
    while(tt--){
        solve();
        // cout<<"-----------"<<nn;
    }
    return 0;
}