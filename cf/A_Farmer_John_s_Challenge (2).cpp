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
        if(n!=k && k!=1) cout<<-1<<nn;
        else{
            for(int i=1; i<=n; i++){
                if(n==k) cout<<1<<" ";
                else cout<<i<<" ";
            }cout<<nn;
        }
    }
}