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
        string s,res; cin>>s;
        unordered_map<char,int>check={{'a',1},{'b',0},{'c',0},{'d',0},{'e',1}};
        reverse(s.begin(),s.end());
        int i=0;
        while(i<n){
            if(i+1<n && check[s[i]] && !check[s[i+1]]){
                res.pb(s[i]);
                res.pb(s[i+1]);
                res.pb('.');
                i+=2;
            }else if(i+2<n && !check[s[i]] && check[s[i+1]] && !check[s[i+2]]){
                res.pb(s[i]);
                res.pb(s[i+1]);
                res.pb(s[i+2]);
                res.pb('.');
                i+=3;
            }
        }
        if(res.back()=='.') res.pop_back();
        reverse(res.begin(),res.end());
        cout<<res<<nn;
    }
}