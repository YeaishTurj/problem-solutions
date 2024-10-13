#include<bits/stdc++.h>
using namespace std;
#define w(t) int t; cin>>t; while(t--)
#define nn "\n"
#define int long long
#define pb push_back
#define ld long double
int32_t main(){
    w(t){
        int n,l,r; cin>>n>>l>>r;
        int a[n+1],flag=1;
        for(int i=1; i<=n; i++){
            int num=(r/i)*i;
            if(num<l) flag=0;
            a[i]=num;
        }
        if(!flag) cout<<"NO"<<nn;
        else{
            cout<<"YES"<<nn;
            for(int i=1; i<=n; i++) cout<<a[i]<<" "; cout<<nn;
        }
    }
}