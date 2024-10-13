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
        string s, t; cin>>s>>t;
        int flagT=1, flagS=1;
        vector<char>v;
        for(int i=0; i<max(n, m); i++){
            if(t[i]==t[i+1] && i<m-1) flagT=0;
            if(s[i]==s[i+1] && i<n-1){
                flagS=0;
                v.pb(s[i]);
            }
        }
        if(flagS) cout<<"Yes"<<nn;
        else if(!flagT) cout<<"No"<<nn;
        else{
            for(int i=0; i<v.size(); i++){
                if(v[i]=='0'){
                    if(t[0]=='0' || t[m-1]=='0') flagT=0;
                }else{
                    if(t[0]=='1' || t[m-1]=='1') flagT=0;
                }
            }
            cout<<(flagT?"Yes":"No")<<nn;
        }
        // cout<<"------------"<<nn;
    }
    return 0;
}