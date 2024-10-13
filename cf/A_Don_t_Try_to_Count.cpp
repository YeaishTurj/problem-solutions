#include<bits/stdc++.h>
using namespace std;
#define fast_IO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define w(t) int t; cin>>t; while(t--)
#define nn "\n"
#define ll long long
#define pb push_back
#define ld long double
ll binPow(ll n, ll k){
    if(k==0) return 1;
    else{
        ll turj=1;
        while(k){if(k&1) turj*=n; n*=n, k>>=1;}
        return turj;
    }
}
bool compare(pair<int,int>&a, pair<int,int>&b){
    if(a.first!=b.first){
        if(a.first<b.first) return false;
        return true;
    }else{
        if(a.second>b.second) return false;
        return true;
    }
}
int main(){
    fast_IO
    w(t){
        int n, m; cin>>n>>m;
        string x, s; cin>>x>>s;
        // cout<<x<<" "<<s<<nn;
        int cnt=0;
        while(x.find(s)==string::npos && x.size()<=max(3*n,3*m)){
            x+=x; cnt++;
        }
        if(x.find(s)==string::npos) cout<<-1<<nn;
        else cout<<cnt<<nn;
        // cout<<"--------------"<<nn;
    }
    return 0;
}