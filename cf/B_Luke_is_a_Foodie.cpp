#include<bits/stdc++.h>
using namespace std;
#define w(t) int t; cin>>t; while(t--)
#define nn "\n"
#define int long long
#define pb push_back
#define ld long double
int32_t main(){
    w(t){
        int n,x; cin>>n>>x;
        vector<int>v(n);
        for(auto &it: v) cin>>it;
        int change=0, mn=abs(v[0]-x), mx=v[0]+x;
        for(auto &it: v){
            int l=abs(it-x), r=it+x;
            if(l>mx || r<mn){
                change++;
                mn=l; mx=r;
            }else{
                mn=max(mn,l);
                mx=min(mx,r);
            }
        }
        cout<<change<<nn;
        // cout<<nn<<"----------"<<nn;
    }
}