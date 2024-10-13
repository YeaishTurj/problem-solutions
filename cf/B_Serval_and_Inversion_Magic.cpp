#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        string str; cin>>str;
        int same=-1, diff=-1, flag=1;
        for(int i=0; i<n/2; i++){
            if(str[i]!=str[n-i-1] && !i) diff=i;
            else if(str[i]!=str[n-i-1]){
                if(i-diff>1 && diff!=-1){
                    flag=0; break;
                }
                diff=i;
            }
        }
        cout<<(flag?"Yes":"No")<<endl;
    }
}