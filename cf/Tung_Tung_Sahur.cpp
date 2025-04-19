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
int gcd(int a,int b){
    if(b==0) return a;
    return gcd(b,a%b);
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
    string p,s;
    cin>>p>>s;
    vector<pair<char,int>>pV,sV;
    int i=0;
    while(i<p.size()){
        int j=i;
        while(j<p.size() && p[j]==p[i]) j++;
        pV.pb({p[i],j-i});
        i=j;
    }
    i=0;
    while(i<s.size()){
        int j=i;
        while(j<s.size() && s[j]==s[i]) j++;
        sV.pb({s[i],j-i});
        i=j;
    }
    if(pV.size()!=sV.size()){
        cout<<"NO"<<nn;
        return;
    }
    // for(auto [x,y]:pV){
    //     cout<<x<<" "<<y<<nn;
    // }
    // cout<<nn;
    // for(auto [x,y]:sV){
    //     cout<<x<<" "<<y<<nn;
    // }
    for(int i=0; i<pV.size(); i++){
        char lCh=pV[i].first;
        char rCh=sV[i].first;
        int l=pV[i].second;
        int r=sV[i].second;
        if(lCh!=rCh){
            cout<<"NO"<<nn;
            return;
        }
        if(l<=r && r<=2*l){
            continue;
        }else{
            cout<<"NO"<<nn;
            return;
        }
    }
    cout<<"YES"<<nn;
}
int32_t main(){
    fast_IO
    int tt=1;
    cin>>tt;
    while(tt--){
        solve();
        // cout<<nn<<"-----------"<<nn;
    }
    return 0;
}