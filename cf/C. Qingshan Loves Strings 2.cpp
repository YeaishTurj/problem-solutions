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
        int n; cin>>n;
        string str; cin>>str;
        int flag=1, zero=0, one=0;
        for(int i=0; i<n; i++){
            if(str[i]!=str[n-i-1]) flag=0;
            if(str[i]=='0') zero++;
            else one++;
        }
        if(one!=zero) cout<<-1<<nn; // if the count of one and zero are not equal, it can never be fixed
        else{
            int i=0;
            vector<int>v;
            while(i<n){
                if(i<str.size()){
                    if(str[i]==str[str.size()-i-1]){
                        if(str[i]=='1'){
                            v.pb(i);
                            str.insert(i, "01");
                        }else{
                            v.pb(str.size()-i);
                            str.insert(str.size()-i, "01");
                        }
                    }                    
                }
                i++;
            }
            // cout<<str<<nn;
            if(v.size()>300) cout<<-1<<nn;
            else{
                cout<<v.size()<<nn;
                for(auto &it: v) cout<<it<<" "; cout<<nn;
            }
        }
        // cout<<"--------"<<nn;
    }
    return 0;
}