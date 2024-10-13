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
        int n; cin>>n;
        int zero=0, neg=0;
        while(n--){
            int x; cin>>x;
            if(x==0) zero++;
            else if(x<0) neg++;
        }
        if(zero) cout<<0<<nn;
        else if(neg&1) cout<<0<<nn;
        else cout<<1<<nn<<1<<" "<<0<<nn;
    }
}
int main(){
    fast_IO
    solve();
    return 0;
}
