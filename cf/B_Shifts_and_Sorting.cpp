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
        int cnt=count(s.begin(),s.end(),'0');
        if(cnt==0 || cnt==s.size()) cout<<0<<nn;
        else{
            vector<int>zero;
            int one=-1;
            for(int i=0; i<s.size(); i++){
                if(one==-1 && s[i]=='1') one=i;
                if(one!=-1 && s[i]=='0') zero.pb(i); 
            }
            int ans=0;
            for(auto &it: zero){
                ans+=(it-one+1);
                one++;
            }
            cout<<ans<<nn;
        }
        // cout<<"-------------"<<nn;
    }
}