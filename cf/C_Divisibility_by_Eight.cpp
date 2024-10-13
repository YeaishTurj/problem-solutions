#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define nn "\n"
#define w(t) int t; cin>>t; while(t--)
#define pb push_back
int binPow(int n, int k){
    if(k==0) return 0;
    else{
        ll turj=1;
        while(k){if(k&1) turj*=n; n*=n, k>>=1;}
        return turj;
    }
}
int main(){
    string str; cin>>str;
    vector<int>v; 
    int ans=0;
    reverse(str.begin(), str.end());
    for(auto &it: str) v.push_back(it-'0');
    int flag=0, n=str.size();
    for(int i=0; i<n; i++){
        if(v[i]==0 || v[i]==8){
            ans=v[i];
            flag=1; break;
        }else if(v[i]%2==0){
            if(v[i]==6){
                for(int j=i+1; j<n; j++){
                    if(v[j]&1){
                        if(v[j]==1 || v[j]==5 || v[j]==9){
                            ans=v[j]*10+v[i];
                            flag=1; break;
                        }else{
                            for(int k=j+1; k<n; k++){
                                if(v[k]&1){
                                    ans=v[k]*100+v[j]*10+v[i];
                                    flag=1; break;
                                }
                            }
                        }
                    }
                }
            }else if(v[i]==4){
                for(int j=i+1; j<n; j++){
                    if(v[j]%2==0){
                        if(v[j]==6 || v[j]==2){
                            ans=v[j]*10+v[i];
                            flag=1; break;
                        }else if(v[j]==8||v[j]==4||v[j]==0){
                            for(int k=j+1; k<n; k++){
                                if(v[k]%2!=0){
                                    ans=v[k]*100+v[j]*10+v[i];
                                    flag=1; break;
                                }
                            }
                        }
                    }
                }
            }else if(v[i]==2){
                for(int j=i+1; j<n; j++){
                    if(v[j]%2!=0){
                        if(v[j]==9||v[j]==5||v[j]==1){
                            for(int k=j+1; k<n; k++){
                                if(v[k]%2!=0){
                                    ans=v[k]*100+v[j]*10+v[i];
                                    flag=1; break;
                                }
                            }
                        }else if(v[j]==7||v[j]==3){
                            ans=v[j]*10+v[i];
                            flag=1; break;
                        }
                    }
                }
            }
        }
    }
    if(flag) cout<<"YES"<<endl<<ans;
    else cout<<"NO";
    return 0;
}