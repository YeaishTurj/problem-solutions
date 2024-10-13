#include<bits/stdc++.h>
using namespace std;
#define w(t) int t; cin>>t; while(t--)
#define nn "\n"
#define int long long
#define pb push_back
#define ld long double
int32_t main(){
    w(t){
        int a,b,c; cin>>a>>b>>c;
        int ans=a;
        ans+=b/3;
        if(b%3==1){
            c-=2;
            ans++;
            if(c<0) ans=-1;
        }else if(b%3==2){
            c--;
            ans++;
            if(c<0) ans=-1;
        }
        if(ans>-1){
            ans+=c/3;
            if(c%3) ans++;
        }
        cout<<ans<<nn;
    }
}