#include<bits/stdc++.h>
using namespace std;
#define w(t) int t; cin>>t; while(t--)
#define nn "\n"
#define int long long
#define pb push_back
#define ld long double
int32_t main(){
    w(t){
        int n,a,b; cin>>n>>a>>b;
        if(2*a<b){
            cout<<a*n<<nn;
        }else{
            int ans=(n/2)*b;
            if(n&1) ans+=a;
            cout<<ans<<nn;
        }
    }
}