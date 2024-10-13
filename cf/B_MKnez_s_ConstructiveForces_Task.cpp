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
        if(n&1){
            if(n==3) cout<<"NO"<<nn;
            else{
                int num=(n-5)/2+1;
                cout<<"YES"<<nn;
                for(int i=0; i<n; i++){
                    if(i%2==0) cout<<num<<" ";
                    else cout<<-1*(num+1)<<" ";
                }cout<<nn;
            }
        }else{
            cout<<"YES"<<nn;
            for(int i=0; i<n; i++){
                if(i&1) cout<<-22<<" ";
                else cout<<22<<" ";
            }cout<<nn;
        }
    }
}