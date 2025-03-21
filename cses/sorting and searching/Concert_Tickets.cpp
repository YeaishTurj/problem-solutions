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
int32_t main(){
    fast_IO
    int n,m; cin>>n>>m;
    multiset<int>p;
    while(n--){
        int x; cin>>x;
        p.insert(x);
    }
    // for(auto &it: p) cout<<it<<" "; cout<<nn;
    while(m--){
        int x; cin>>x;
        auto it=p.lower_bound(x);
        if(it==p.begin()){
            if(*it==x){
                cout<<x<<nn;
                p.erase(it);
            }else{
                cout<<-1<<nn;
            }
        }else{
            if(it==p.end()){
                it--;
                cout<<*it<<nn;
                p.erase(it);
            }else{
                if(*it==x){
                    cout<<x<<nn;
                    p.erase(it);
                }else{
                    it--;
                    cout<<*it<<nn;
                    p.erase(it);
                }
            }
        }
    }
}