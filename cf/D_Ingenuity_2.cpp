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
    int n; cin>>n;
    string s; cin>>s;
    map<char,int>m;
    for(auto &it: s) m[it]++;
    int rN=0,rS=0,rE=0,rW=0,hN=0,hS=0,hE=0,hW=0;
    int mnEW=min(m['E'],m['W']),mnNS=min(m['N'],m['S']);
    // for(auto &it: m) cout<<it.first<<" "<<it.second<<nn; cout<<nn;
    m['E']-=mnEW;
    m['W']-=mnEW;
    m['N']-=mnNS;
    m['S']-=mnNS;
    // for(auto &it: m) cout<<it.first<<" "<<it.second<<nn;
    map<char,deque<char>>mp;
    int r=0, h=0;
    for(int i=0; i<mnEW/2; i++){
        mp['E'].pb('R');
        mp['E'].pb('H');
        mp['W'].pb('R');
        mp['W'].pb('H');
        r++; h++;
    }
    if(mnEW&1){
        mp['E'].pb('R');
        mp['W'].pb('R');
        r++;
    }
    for(int i=0; i<mnNS/2; i++){
        mp['N'].pb('R');
        mp['N'].pb('H');
        mp['S'].pb('R');
        mp['S'].pb('H');
        r++; h++;
    }
    if(mnNS&1){
        mp['N'].pb('H');
        mp['S'].pb('H');
        h++;
    }
    if(m['E']%2==0){
        for(int i=0; i<m['E']/2; i++){
            mp['E'].pb('R');
            mp['E'].pb('H');
            r++; h++;
        }
    }
    if(m['W']%2==0){
        for(int i=0; i<m['W']/2; i++){
            mp['W'].pb('R');
            mp['W'].pb('H');
            r++; h++;
        }
    }
    if(m['N']%2==0){
        for(int i=0; i<m['N']/2; i++){
            mp['N'].pb('R');
            mp['N'].pb('H');
            r++; h++;
        }
    }
    if(m['S']%2==0){
        for(int i=0; i<m['S']/2; i++){
            mp['S'].pb('R');
            mp['S'].pb('H');
            r++; h++;
        }
    }
    if(m['E']&1 || m['W']&1 || m['N']&1 || m['S']&1 || !r || !h){
        cout<<"NO"<<nn;
        return;
    }
    for(auto &it: s){
        cout<<mp[it].front();
        mp[it].pop_front();
    }cout<<nn;
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