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
        int h=(s[0]-'0')*10+s[1]-'0', m=(s[3]-'0')*10+s[4]-'0';
        // cout<<h<<" "<<m<<nn;
        string ans(5,0);
        ans[2]=':';
        ans[3]=((m/10)%10)+'0';
        ans[4]=(m%10)+'0';
        if(h==0){
            ans[0]='1';
            ans[1]='2';
            cout<<ans<<" "<<"AM"<<nn;
        }else if(h==12){
            ans[0]='1';
            ans[1]='2';
            cout<<ans<<" "<<"PM"<<nn;
        }else if(h>12 && h<24){
            h-=12;
            ans[0]=((h/10)%10)+'0';
            ans[1]=(h%10)+'0';
            cout<<ans<<" "<<"PM"<<nn;
        }else{
            ans[0]=((h/10)%10)+'0';
            ans[1]=(h%10)+'0';
            cout<<ans<<" "<<"AM"<<nn;
        }
        
    }
}