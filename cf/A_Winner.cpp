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
    ll n; cin>>n;
    map<string,ll>total_score, find_the_first;
    vector<pair<string,ll>>players;
    ll mx=INT_MIN;
    while(n--){
        string name;
        ll score;
        cin>>name>>score;
        players.pb({name,score});
        total_score[name]+=score;
    }
    for(auto &it: total_score) mx=max(mx, it.second);
    for(auto &it: players){
        find_the_first[it.first]+=it.second;
        if(find_the_first[it.first]>=mx && total_score[it.first]==mx){
            cout<<it.first<<nn;
            break;
        }
    }
    return 0;
}