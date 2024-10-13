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
        char ch[8][8];
        vector<pair<int,int>>v;
        for(int i=0;i<8;i++)
            for(int j=0;j<8;j++)
                cin>>ch[i][j];
        for(int i=0;i<8;i++){
            int cnt=0, pos;
            for(int j=0;j<8;j++){
                if(ch[i][j]=='#') cnt++, pos=j;
            }
            v.pb({cnt,pos});
        }
        // for(auto &it: v) cout<<it.first<<" "<<it.second<<nn;
        for(int i=0;i<v.size();i++){
            if(i!=0 && i!=7 && v[i].first==1 && v[i-1].first==2 && v[i+1].first==2){
                cout<<i+1<<" "<<v[i].second+1<<nn; break;
            }
        }
        // cout<<"-----------"<<nn;
    }
    return 0;
}