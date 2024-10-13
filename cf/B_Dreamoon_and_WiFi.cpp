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
    string s1, s2; cin>>s1>>s2;
    int posByDrazil=0, posByDor=0;
    for(auto &it: s1)
        if(it=='+') posByDrazil++;
        else posByDrazil--;
    int cnt=0, prob=0;
    for(auto &it: s2)
        if(it=='?') cnt++;
        else if(it=='+') posByDor++;
        else posByDor--;
    // cout<<posByDrazil<<nn;
    // cout<<posByDor<<nn;
    for(int i=0; i<binPow(2,cnt); i++){
        int temp=posByDor;
        for(int j=0; j<cnt; j++){
            if(i&(1<<j)) temp++;
            else temp--;
        }
        // cout<<temp<<nn;
        if(temp==posByDrazil) prob++;
    }
    cout<<setprecision(20)<<(ld)prob*(ld)1.0/(ld)binPow(2,cnt)<<nn;
    //0.205078
    return 0;
}