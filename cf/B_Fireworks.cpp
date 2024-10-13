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
        ll a,b,m; cin>>a>>b>>m;
        ll div1=b-1, div2=b+m/a, div3=a-1, div4=a+m/b;
        // cout<<div1<<" "<<div2<<nn;
        // cout<<div3<<" "<<div4<<nn;
        ll for_a=div2-div1, for_b=div4-div3;
        cout<<for_a+for_b<<nn;
        // cout<<"------------"<<nn;
    }
}
int main(){
    fast_IO
    solve();
    return 0;
}
