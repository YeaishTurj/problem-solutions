#include<bits/stdc++.h>
using namespace std;
#define w(t) int t; cin>>t; while(t--)
#define nn "\n"
#define int long long
#define pb push_back
#define ld long double
const int m=1e9+7;
int mod(int n){
    return n%m;
}
vector<int>fact;
void factorial(){
    fact.pb(1);
    fact.pb(1);
    for(int i=2; i<1e5+10; i++){
        fact.pb(mod(mod(fact[i-1])*mod(i)));
    }
}
int32_t main(){
    factorial();
    w(t){
        int n; cin>>n;
        int ans=n*(n-1);
        cout<<mod(mod(ans)*mod(fact[n]))<<nn;
        // cout<<"-------------"<<nn;
    }
}