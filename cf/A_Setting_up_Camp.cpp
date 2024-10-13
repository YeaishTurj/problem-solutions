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
        ll a,b,c; cin>>a>>b>>c;
        ll cnt=a;
        cnt+=b/3;
        ll rem=b%3;// 0,1,2
        if(rem==0){
            if(c){ // 1,2,3
                cnt+=c/3;
                c=c%3;
                cnt+=c/2;
                c=c%2;
                cnt+=c;
            }
            cout<<cnt<<nn;
        }else if(rem==1){
            // 1 extro
            if(c<2) cout<<-1<<nn;
            else{
                cnt++;
                c-=2;
                cnt+=c/3;
                c=c%3;
                cnt+=c/2;
                c=c%2;
                cnt+=c;
                cout<<cnt<<nn;
            }
        }else{
            // 2 extro
            if(c<1) cout<<-1<<nn;
            else{
                cnt++;
                c-=1;
                cnt+=c/3;
                c=c%3;
                cnt+=c/2;
                c=c%2;
                cnt+=c;
                cout<<cnt<<nn;
            }
        }
    }
}
int main(){
    fast_IO
    solve();
    return 0;
}
