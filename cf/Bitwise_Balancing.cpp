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
    int b,c,d; cin>>b>>c>>d;
    if(b==d){
        cout<<0<<nn;
        return;
    }
    vector<int>ans(64,0);
    for(int i=0; i<64; i++){
        int bb=(b>>i)&1;
        int cc=(c>>i)&1;
        int dd=(d>>i)&1;
        if(bb && cc && dd) ans[i]=0;
        else if(bb && cc && !dd) ans[i]=1;
        else if(bb && !cc && dd) ans[i]=0;
        else if(bb && !cc && !dd) ans[i]=0;
        else if(!bb && cc && dd) ans[i]=1;
        else if(!bb && cc && !dd) ans[i]=1; //
        else if(!bb && !cc && dd) ans[i]=1;
        else if(!bb && !cc && !dd) ans[i]=0;
    }
    int res=0;
    for(int i=0; i<64; i++)
        res+=(ans[i]*binPow(2,i));
    int a=res;
    if((a|b) - (a&c) == d) cout<<a<<nn;
    else cout<<-1<<nn;
    // cout<<res<<nn;
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