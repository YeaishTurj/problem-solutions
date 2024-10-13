#include<bits/stdc++.h>
using namespace std;
#define w(t) int t; cin>>t; while(t--)
void solve(){
    w(t){
        int n; cin>>n;
        string str; cin>>str;
        string newStr(n,'?');
        int flag=0;
        char prev;
        for(int i=0; i<n; i++){
            if((str[i]=='B' || str[i]=='R') && !flag){
                flag=1; prev=str[i];
            }
            if(flag){
                if('?'==str[i] && 'B'==prev){
                    newStr[i]='R';
                    prev='R';
                }
                else if('?'==str[i] && 'R'==prev){
                    newStr[i]='B';
                    prev='B';
                }else{
                    newStr[i]=str[i];
                    prev=str[i];
                }
            }
        }
        if('?'==newStr[0] && '?'==newStr[n-1]){
            newStr[0]='R';
            prev='R';
            for(int i=0; i<n; i++){
                if('?'==newStr[i] && 'B'==prev){
                    newStr[i]='R';
                    prev='R';
                }
                else if('?'==newStr[i] && 'R'==prev){
                    newStr[i]='B';
                    prev='B';
                }
            }
        }else{
            flag=0;
            for(int i=n-1; i>=0; i--){
                if('?'==newStr[i] && !flag){
                    prev=newStr[i+1];
                    flag=1;
                }
                if('?'==newStr[i] && 'B'==prev){
                    newStr[i]='R';
                    prev='R';
                }
                else if('?'==newStr[i] && 'R'==prev){
                    newStr[i]='B';
                    prev='B';
                }
            }
        }
        cout<<newStr<<endl;
    }
}
int main(){
    solve();
    return 0;
}
