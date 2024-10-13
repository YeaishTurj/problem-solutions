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
        string str; cin>>str;
        vector<int>lowerInd, upperInd;
        for(int i=0; i<str.size(); i++){
            if(isupper(str[i])){
                if(str[i]=='B' && upperInd.size()){
                    str[upperInd[upperInd.size()-1]]='0';
                    upperInd.pop_back();
                }else{
                    upperInd.push_back(i);
                }
            }
            else if(islower(str[i])){
                if(str[i]=='b' && lowerInd.size()){
                    str[lowerInd[lowerInd.size()-1]]='0';
                    lowerInd.pop_back();
                }else{
                    lowerInd.push_back(i);
                }
            }
        }
        for(auto &it: str){
            if(it!='0' && it!='B' && it!='b') cout<<it;
        }
        cout<<nn;
    }
    return 0;
}