#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
#define Oset tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
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
    ll n; cin>>n;
    map<string,ll>m;
    for(int i=0; i<n; i++){
        ll c; string str;
        cin>>c>>str;
        sort(str.begin(),str.end());
        if(m.find(str)==m.end()) m[str]=c;
        else m[str]=min(m[str],c);
    }
    // for(auto &it: m) cout<<it.first<<" "<<it.second<<nn;
    ll ans=INT_MAX;
    for(auto &it: m){
        if(it.first=="A"){
            if(m.find("B")!=m.end() && m.find("C")!=m.end()){
                ans=min(ans,m["A"]+m["B"]+m["C"]);
            }
            if(m.find("BC")!=m.end()) ans=min(ans,m["A"]+m["BC"]);
        }else if(it.first=="B"){
            if(m.find("A")!=m.end() && m.find("C")!=m.end()){
                ans=min(ans,m["A"]+m["B"]+m["C"]);
            }
            if(m.find("AC")!=m.end()) ans=min(ans,m["B"]+m["AC"]);
        }else if(it.first=="C"){
            if(m.find("B")!=m.end() && m.find("A")!=m.end()){
                ans=min(ans,m["A"]+m["B"]+m["C"]);
            }
            if(m.find("AB")!=m.end()) ans=min(ans,m["C"]+m["AB"]);
        }else if(it.first=="AB"){
            if(m.find("BC")!=m.end()) ans=min(ans,m["AB"]+m["BC"]);
            if(m.find("AC")!=m.end()) ans=min(ans,m["AB"]+m["AC"]);
        }else if(it.first=="BC"){
            if(m.find("AB")!=m.end()) ans=min(ans,m["AB"]+m["BC"]);
            if(m.find("AC")!=m.end()) ans=min(ans,m["BC"]+m["AC"]);
        }else if(it.first=="AC"){
            if(m.find("BC")!=m.end()) ans=min(ans,m["AC"]+m["BC"]);
            if(m.find("AB")!=m.end()) ans=min(ans,m["AB"]+m["AC"]);
        }else ans=min(ans,it.second);
    }
    cout<<(ans==INT_MAX?-1:ans)<<nn;
    // cout<<"-----------------"<<nn;
    return 0;
}