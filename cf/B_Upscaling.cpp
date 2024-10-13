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
        int tempi=1;
        for(int i=0; i<2*n; i+=2){
            int temp=1;
            for(int j=0; j<2*n; j+=2){
                if(tempi){
                    if(temp) cout<<"##", temp^=1;
                    else cout<<"..", temp^=1;
                }else{
                    if(temp) cout<<"..", temp^=1;
                    else cout<<"##", temp^=1;
                }
            }cout<<nn;
            temp=1;
            for(int j=0; j<2*n; j+=2){
                if(tempi){
                    if(temp) cout<<"##", temp^=1;
                    else cout<<"..", temp^=1;
                }else{
                    if(temp) cout<<"..", temp^=1;
                    else cout<<"##", temp^=1;
                }
            }cout<<nn;
            tempi^=1;
        }
        // cout<<"---------------------"<<nn;
    }
}
int main(){
    fast_IO
    solve();
    return 0;
}
