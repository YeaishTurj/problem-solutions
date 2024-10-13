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
        string s; cin>>s;
        string nine(n,'9');
        if(s!=nine){
            if(s[0]!='9'){
                for(auto &it: s) cout<<'9'-it; cout<<nn;
            }else{
                string total(n+1,1);
                string ans;
                reverse(s.begin(),s.end());
                int carry=0;
                for(auto &it: s){
                    int dig=it-'0';
                    if(dig+carry>1){
                        ans.pb(11-(dig+carry)+'0');
                        carry=1;
                    }else{
                        ans.pb(1-(dig+carry)+'0');
                        carry=0;
                    }
                }
                reverse(ans.begin(),ans.end());
                cout<<ans<<nn;
            }
        }else{
            for(int i=0; i<n-1; i++) cout<<1;
            cout<<2<<nn;
        }

    }
}