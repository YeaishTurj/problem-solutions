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
        set<int>s;
        cout<<2<<nn;
        for(int i=1; i<=n; i++) s.insert(i);
        if(n<4){
            for(auto &it: s) cout<<it<<" "; cout<<nn;
        }else{
            for(int i=1; i<=n; i++){
                int j=i;
                while(j<=n && s.find(j)!=s.end()){
                    cout<<j<<" ";
                    s.erase(j);
                    j*=2;
                }
            }
            for(auto &it: s) cout<<it<<" "; cout<<nn;
        }
    }
}