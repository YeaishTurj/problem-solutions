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
        for(auto &it: a) cin>>it;
        sort(a,a+n);
        vector<int>v={a[0],a[n-1],a[1],a[n-2]};
        int ans=0;
        for(int i=0; i<4; i++){
            ans+=abs(v[i]-v[(i+1)%4]);
        }
        cout<<ans<<nn;
    }
}