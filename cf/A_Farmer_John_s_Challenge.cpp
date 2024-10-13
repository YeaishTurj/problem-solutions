#include<bits/stdc++.h>
using namespace std;
#define fast_IO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define w(t) int t; cin>>t; while(t--)
#define nn "\n"
#define ll long long
#define pb push_back
#define ld long double
void solve(){
    w(t){
        ll n,k; cin>>n>>k;
        if(n==k) for(int i=0; i<n; i++) cout<<1<<" ";
        else if(k==1) for(int i=1; i<=n; i++) cout<<i<<" "; 
        else cout<<-1;
        cout<<nn;
        // cout<<"----------------"<<nn;
    }
}
int main(){
    fast_IO
    solve();
    return 0;
}
