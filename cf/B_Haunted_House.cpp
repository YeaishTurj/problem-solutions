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
        ll n; cin>>n; 
        string str; cin>>str;
        vector<ll>vecOfZero;
        for(ll i=0; i<n; i++){
            if(str[i]=='0'){
                vecOfZero.pb(i+1);
            }
        }
        ll swap=0, count=0, temp=n;
        reverse(vecOfZero.begin(), vecOfZero.end());
        for(auto &iter: vecOfZero){
            swap+=temp-iter;
            cout<<swap<<" ";
            temp--; count++;
        }
        while(count<n){
            cout<<-1<<" "; 
            count++;
        }
        cout<<nn;
    }
    return 0;
}