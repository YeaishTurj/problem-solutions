#include<bits/stdc++.h>
using namespace std;
long long factorial(long long n)
{
    if (n == 0 || n == 1)
        return 1;
    return n * factorial(n - 1);
}
void solve(){
    int t; cin>>t;
    while(t--){
        string str; cin>>str;
        vector<int>one,zero;
        for(int i=0; i<str.size(); i++){
            if(str[i]=='0') zero.push_back(i);
            else one.push_back(i);
        }
        long long oper=0, oper2=0;
        int prev=0;
        long long ans=0;
        if(str[0]=='1'){
            prev=1;
            int temp=0;
            for(int i=1; i<str.size(); i++){
                if(prev && str[i]=='1') oper++;
                else if(prev && str[i]=='0' || !prev && str[i]=='1'){
                    prev^=1;
                }
                else if(!prev && str[i]=='0') oper++;
            }
            // if(prev)ans+=oper*(oper+1);
        }else{
            prev=0;
            for(int i=1; i<str.size(); i++){
                if(prev && str[i]=='1') oper++;
                else if(prev && str[i]=='0' || !prev && str[i]=='1'){
                    prev=prev^1;
                    // ans+=oper*(oper+1);
                }
                else if(!prev && str[i]=='0') oper++;
            }
            // if(!prev)ans+=oper*(oper+1);
        }
        long long z=1,o=1;
        for(int i=0; i<str.size()-1; i++){
            if(str[i]=='0'){
                if(str[i+1]=='0') z++;
                else{
                    if(z>1) ans+=factorial(z); z=1;
                }
            }else{
                if(str[i+1]=='1') o++;
                else{
                    if(o>1)ans+=factorial(o); o=1;
                }
            }
        }
        // cout<<z<<" "<<o<<endl;
        if(z>1) ans+=factorial(z);
        if(o>1) ans+=factorial(o);
        // string revStr=str;
        // reverse(revStr.begin(), revStr.end());
        // if(revStr[0]=='1'){
        //     prev=1;
        //     for(int i=1; i<revStr.size(); i++){
        //         if(prev && revStr[i]=='1') oper2++;
        //         else if(prev && revStr[i]=='0' || !prev && revStr[i]=='1') prev^=0;
        //         else if(!prev && revStr[i]=='0') oper2++;
        //     }
        // }else{
        //     prev=0;
        //     for(int i=1; i<revStr.size(); i++){
        //         if(prev && str[i]=='1') oper2++;
        //         else if(prev && revStr[i]=='0' || !prev && revStr[i]=='1') prev=prev^1;
        //         else if(!prev && revStr[i]=='0') oper2++;
        //     }
        // }
        // oper=min(oper2,oper);

        if(!oper) cout<<0<<" "<<1<<endl;
        else{
            cout<<oper<<" "<<ans<<endl;
        }
        // cout<<"-----------------"<<endl;
    }
}
int main(){
    solve();
    vector<int>vec;
    for(int i=0; i<100; i++) vec.push_back(i);
}