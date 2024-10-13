#include<bits/stdc++.h>
using namespace std;
#define fast_IO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define w(t) int t; cin>>t; while(t--)
#define nn "\n"
#define ll long long
#define pb push_back
#define ld long double
void solve(){
    vector<int>v;
    for(int i=1; i<=100000; i++){
        int n=i, flag=1;
        while(n){
            if(n%10!=0 && n%10!=1) flag=0;
            n/=10;
        }
        if(flag) v.pb(i);
    }
    // for(auto &it: v) cout<<it<<" "; cout<<nn;
    w(t){
        int n; cin>>n;
        int ans=0;
        if(find(v.begin(), v.end(), n)!=v.end()){
            cout<<"YES"<<nn;
            
        }else{
            while(1){
                int flag=0;
                for(auto &it: v){
                    if(n%it==0 && it>1){
                        flag=1;
                        n/=it;
                    }
                }
                if(!flag) break;
                if(n==1){
                    ans=1;
                    break;
                }
            }
            cout<<(ans?"YES":"NO")<<nn;            
        }

    }
}
int main(){
    fast_IO
    solve();
    return 0;
}
