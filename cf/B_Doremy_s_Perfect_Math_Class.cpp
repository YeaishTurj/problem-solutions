#include<bits/stdc++.h>
using namespace std;
#define w(t) int t; cin>>t; while(t--)
#define nn "\n"
#define int long long
#define pb push_back
#define ld long double
int32_t main(){
    w(t){
        int n; cin>>n;
        int a[n];
        int x=0;
        for(auto &it: a) cin>>it, x=gcd(x,it);
        cout<<a[n-1]/x<<nn;
    }
}