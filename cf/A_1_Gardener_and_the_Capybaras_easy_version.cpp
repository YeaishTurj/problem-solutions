#include<bits/stdc++.h>
using namespace std;
#define w(t) int t; cin>>t; while(t--)
#define nn "\n"
#define int long long
#define pb push_back
#define ld long double
void res(string &s){
    string a;
    for(int i=0; i<s.size(); i++){
        a.pb(s[i]);
        string b;
        for(int j=i+1; j<s.size(); j++){
            b.pb(s[j]);
            string c;
            for(int k=j+1; k<s.size(); k++){
                c.pb(s[k]);
            }
            if(!a.empty() && !b.empty() && !c.empty()){
                if((a<=b && b>=c) || (a>=b && b<=c)){
                    cout<<a<<" "<<b<<" "<<c<<nn;
                    return;
                }
            }
        }
    }
}
int32_t main(){
    w(t){
        string s; cin>>s;
        res(s);
    }
}