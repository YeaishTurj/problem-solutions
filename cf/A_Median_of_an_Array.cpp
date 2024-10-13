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
        vector<int>v(n);
        for(auto &it: v) cin>>it;
        sort(v.begin(),v.end());
        // for(auto &it: v) cout<<it<<" "; cout<<nn;
        int mid=(n+1)/2-1;
        // cout<<v[mid]<<nn;
        int cnt=0;
        for(int i=mid; i<n; i++){
            if(v[mid]==v[i]) cnt++;
        }
        cout<<cnt<<nn;
    }
}