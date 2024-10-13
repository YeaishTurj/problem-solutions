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
    ll r, c; cin>>r>>c;
    char a[r+2][c+2];
    for(int i=1; i<=r; i++){
        for(int j=1; j<=c; j++){
            cin>>a[i][j];
        }
    }
    int flag=1;
    for(int i=1; i<=r; i++){
        for(int j=1; j<=c; j++){
            if(a[i][j]=='.') a[i][j]='D';
        }
    }
    for(int i=1; i<=r; i++){
        for(int j=1; j<=c; j++){
            if(a[i][j]=='S'){
                if(a[i][j+1]=='W' || a[i][j-1]=='W' || a[i+1][j]=='W' || a[i-1][j]=='W') flag=0;
            }
        }
    }
    if(flag){
        cout<<"Yes"<<nn;
        for(int i=1; i<=r; i++){
            for(int j=1; j<=c; j++)
                cout<<a[i][j];
            cout<<nn;
        }
    }else{
        cout<<"No"<<nn;
    }
    return 0;
}