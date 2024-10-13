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
        ll n; cin>>n;
        string str; cin>>str;
        ll hash[26]={};
        for(int i=0; i<n; i++){
            if(!hash[str[i]-'a']) hash[str[i]-'a']=i+1;
        }
        ll res=0;
        for(int i=0; i<26; i++){
            if(hash[i]) res+=n-hash[i]+1;
        }
        cout<<res<<nn;
        // cout<<"--------------"<<nn;
    }
}
int main(){
    fast_IO
    solve();
    return 0;
}
