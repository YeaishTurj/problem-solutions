#include<bits/stdc++.h>
using namespace std;
#define w(t) int t; cin>>t; while(t--)
#define nn "\n"
#define int long long
#define pb push_back
#define ld long double
int32_t main(){
    w(t){
        int n,k; cin>>n>>k;
        int msb=0;
        // cout<<(bitset<7>(k))<<nn;
        for(int i=0; i<64; i++){
            if(k&(1LL<<i)) msb=i;
        }
        if(n==1) cout<<k<<nn;
        else{
            vector<int>v(n,0);
            v[0]=(1LL<<msb)-1;
            v[1]=k-v[0];
            for(auto &it: v) cout<<it<<" "; cout<<nn;
            // for(auto &it: v) cout<<bitset<7>(it)<<nn; cout<<nn;
        }
    }
}