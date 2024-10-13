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
const int N=1e6+1;
int a[N]={};
void prime(){
    a[0]=1;
    a[1]=1;
    for(int i=2; i<=sqrt(N); i++){
        if(a[i]==0){
            for(int j=i*i; j<N; j+=i){
                a[j]=1;
            }
        }
    }
}
int main(){
    fast_IO
    prime();
    int n; cin>>n;
    for(int i=4; i<n; i++){
        if(a[i] && a[n-i]){
            cout<<i<<" "<<n-i; break;
        }
    }
    return 0;
}