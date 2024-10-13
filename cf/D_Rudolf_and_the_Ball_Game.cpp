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
        int n,m,k; cin>>n>>m>>k;
        vector<pair<int,char>>v;
        while(m--){
            int dis; cin>>dis;
            char ch; cin>>ch;
            v.pb({dis,ch});
        }
        set<int>s;
        s.insert(k);
        for(auto &[dis,ch]: v){
            set<int>ss;
            for(auto &it: s){
                if(ch=='0') ss.insert((it+dis)%n==0?n:(it+dis)%n);
                else if(ch=='1') ss.insert((n+it-dis)%n==0?n:(n+it-dis)%n);
                else{
                    ss.insert((it+dis)%n==0?n:(it+dis)%n);
                    ss.insert((n+it-dis)%n==0?n:(n+it-dis)%n);
                }
                s.erase(it);
            }
            s=ss;
        }
        cout<<s.size()<<nn;
        for(auto &it: s) cout<<it<<" "; cout<<nn;
        // cout<<"----------"<<nn;
    }
    return 0;
}