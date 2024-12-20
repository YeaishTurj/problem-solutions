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
    int n, m, L; 
    cin>>n>>m>>L;
    vector<pair<int, int>> obs, power_up;
    for(int i=0; i<n; i++){
        int l, r; 
        cin>>l>>r;
        obs.pb({l, r});
    }
    for(int i=0; i<m; i++){
        int x, v; 
        cin>>x>>v;
        power_up.pb({x, v});
    }
    int jump=1, cnt=0;
    priority_queue<int> unusedPow;
    int ind=0;
    for(int i=0; i<n; i++){
        int l=obs[i].first, r=obs[i].second;
        while(ind<m && power_up[ind].first<l){
            unusedPow.push(power_up[ind].second);
            ind++;
        }

        while(jump<=(r-l+1)){
            if (unusedPow.empty()){
                cout<<-1<<nn;
                return;
            }
            jump+=unusedPow.top();
            unusedPow.pop();
            cnt++;
        }
    }
    cout<<cnt<<nn;
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

// 7 14
// 30 40

// 2 2
// 3 1
// 3 5
// 18 2
// 22 32

// -----------
// 4 6 
// 15 18 
// 20 26 
// 34 38 

// 1 2
// 8 2
// 10 2

// -----------
// 10 14

// 1 6power.begin(),power.end(),
// 1 2
// 1 2
// 16 9
// -----------
// 5 9 - 5

// 2 3
// 2 2

// -----------
