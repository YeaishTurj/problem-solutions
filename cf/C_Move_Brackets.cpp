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
        string str; cin>>str;
        stack<char>s;
        for(auto &it: str){
            if(!s.empty() && s.top()=='(' && it==')'){
                s.pop();
            }else if(it=='(') s.push(it);
        }
        cout<<s.size()<<nn;
    }
}
int main(){
    fast_IO
    solve();
    return 0;
}
