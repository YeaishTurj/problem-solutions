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
        string s1,s2;
        for(int i=0; i<n; i++){
            if(i%2==0) s1.pb('#'),s1.pb('#');
            else s1.pb('.'),s1.pb('.');
            if(i%2==0) s2.pb('.'),s2.pb('.');
            else s2.pb('#'),s2.pb('#');
        }
        for(int i=0; i<n; i++){
            if(i%2==0) cout<<s1<<nn<<s1<<nn;
            else cout<<s2<<nn<<s2<<nn;
        }

        // cout<<"--------------"<<nn;
    }
}