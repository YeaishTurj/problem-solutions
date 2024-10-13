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
        for(auto &it: a){
            cin>>it; ++it;
        }
        for(int i=0; i<n-1; i++){
            if(a[i+1]%a[i]==0) a[i+1]++;
        }
        for(auto &it: a) cout<<it<<" "; cout<<nn;
    }
}