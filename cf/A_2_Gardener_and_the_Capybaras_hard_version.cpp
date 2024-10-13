#include<bits/stdc++.h>
using namespace std;
#define w(t) int t; cin>>t; while(t--)
#define nn "\n"
#define int long long
#define pb push_back
#define ld long double
int32_t main(){
    w(t){
        string s; cin>>s;
        if(s[0]=='a' && s[1]=='a'){
            cout<<"a a ";
            for(int i=2; i<s.size(); i++) cout<<s[i]; cout<<nn;
        }else if(s[0]=='b' && s[1]=='b'){
            cout<<"b b ";
            for(int i=2; i<s.size(); i++) cout<<s[i]; cout<<nn;
        }else if(s[0]=='a' && s[1]=='b'){
            cout<<"a ";
            int flag=0;
            for(int i=1; i<s.size()-1; i++){
                if(!flag && s[i]=='a') cout<<" ",flag++;
                cout<<s[i];
            }
            if(!flag) cout<<" ";
            cout<<s.back()<<nn;
        }else if(s[0]=='b' && s[1]=='a'){
            cout<<"b a ";
            for(int i=2; i<s.size(); i++) cout<<s[i]; cout<<nn;
        }
    }
}