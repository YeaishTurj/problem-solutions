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
        int n; cin>>n;
        char a[n][n];
        vector<pair<int,int>>v;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                cin>>a[i][j];
                if(a[i][j]=='*') v.pb({i,j});
            }
        }
        if(v[0].first==v[1].first){
            if(v[0].first<n-1){
                a[v[0].first+1][v[0].second]='*';
                a[v[1].first+1][v[1].second]='*';
            }else if(v[0].first>0){
                a[v[0].first-1][v[0].second]='*';
                a[v[1].first-1][v[1].second]='*';
            }
        }else if(v[0].second==v[1].second){
            if(v[0].second<n-1){
                a[v[0].first][v[0].second+1]='*';
                a[v[1].first][v[1].second+1]='*';
            }else if(v[0].second>0){
                a[v[0].first][v[0].second-1]='*';
                a[v[1].first][v[1].second-1]='*';
            }
        }else{
            a[v[0].first][v[1].second]='*';
            a[v[1].first][v[0].second]='*';
        }
        
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                cout<<a[i][j];
            }
            cout<<nn;
        }
        // cout<<"---------------"<<nn;
    }
    return 0;
}