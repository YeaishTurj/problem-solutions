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
        vector<ll>v(n) ,v2(n);
        ll sum=0, sum2=0;
        for(int i=0; i<n; i++){
            cin>>v[i]; sum+=v[i];
            v2[i]=v[i];
        }
        sum2=sum;
        for(int i=0; i<n-1;){
            if(sum+2*(-v[i]-v[i+1])>sum && i<n-1){
                sum+=2*(-v[i]-v[i+1]);
                v[i+1]*=-1; i++;
            }else i+=2;
        }
        for(int i=0; i<n-1;){
            if(sum2+2*(-v2[i]-v2[i+1])>sum2 && i<n-1){
                sum2+=2*(-v2[i]-v2[i+1]);
                v2[i+1]*=-1; i++;
            }else i+=1;
        }
        // cout<<sum<<nn;
        cout<<max(sum, sum2)<<nn;
    }
    return 0;
}