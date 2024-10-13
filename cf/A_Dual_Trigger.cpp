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
        int n; cin>>n;
        string str; cin>>str;
        
        int i=0, one=0, two=0;
        while(i<n){
            int j=i,cnt=0;
            while(j<n && str[j]=='1' && cnt<2){
                j++; cnt++;
            }
            if(cnt==1) one++;
            else if(cnt==2) two++;
            if(i==j) i++;
            else i=j;
        }
        
        if(!one){
            if(two==1) cout<<"NO"<<nn;
            else cout<<"YES"<<nn;
        }else if(!two){
            if(one&1) cout<<"NO"<<nn;
            else cout<<"YES"<<nn;
        }else{
            // cout<<one<<" "<<two<<nn;
            if(one&1) cout<<"NO"<<nn;
            else cout<<"YES"<<nn;
        }
    }
    return 0;
}