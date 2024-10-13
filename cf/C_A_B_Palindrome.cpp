#include<bits/stdc++.h>
using namespace std;
#define fast_IO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define w(t) int t; cin>>t; while(t--)
#define nn "\n"
#define ll long long
#define pb push_back
#define ld long double
ll binPow(ll n, ll k){
    if(k==0) return 1;
    else{
        ll turj=1;
        while(k){if(k&1) turj*=n; n*=n, k>>=1;}
        return turj;
    }
}
bool compare(pair<int,int>&a, pair<int,int>&b){
    if(a.first!=b.first){
        if(a.first<b.first) return false;
        return true;
    }else{
        if(a.second>b.second) return false;
        return true;
    }
}
int main(){
    fast_IO
    w(t){
        int a, b; cin>>a>>b;
        string str; cin>>str;
        int flag=1, n=str.size(), i=0, ques=0;
        vector<int>v;
        while(a>=0 && b>=0 && i<n/2){
            if(str[i]=='0'){
                if(str[n-i-1]=='1'){
                    flag=1; break;
                }else{
                    a-=2;
                    if(a<0){
                        flag=1; break;
                    }
                    str[i]=str[n-i-1]='0';
                }
            }else if(str[i]=='1'){
                if(str[n-i-1]=='0'){
                    flag=1; break;
                }else{
                    b-=2;
                    if(b<0){
                        flag=1; break;
                    }
                    str[i]=str[n-i-1]='1';
                }
            }else{
                if(str[n-i-1]=='0'){
                    a-=2;
                    if(a<0){
                        flag=1; break;
                    }
                    str[i]=str[n-i-1]='0';
                }else if(str[n-i-1]=='1'){
                    b-=2;
                    if(b<0){
                        flag=1; break;
                    }
                    str[i]=str[n-i-1]='1';
                }else ques++, v.pb(i);
            }
            i++;
        }
        i=0;
        while(ques--){
            if(a-2>=0){
                str[v[i]]=str[n-v[i]-1]='0';
                a-=2; i++;
            }else if(b-2>=0){
                str[v[i]]=str[n-v[i]-1]='1';
                b-=2; i++;
            }else{
                flag=0; break;
            }
        }
        if(n&1){
            if(str[n/2]=='0') a--;
            else if(str[n/2]=='1') b--;
            else{
                if(a>b) str[n/2]='0', a--;
                else str[n/2]='1', b--;
            }
        }
        // cout<<a<<" "<<b<<" "<<ques<<nn;
        // cout<<str<<nn;
        if(a==0 && b==0 && flag) cout<<str<<nn;
        else cout<<-1<<nn;
        // cout<<"-------------"<<nn;
    }
    return 0;
}