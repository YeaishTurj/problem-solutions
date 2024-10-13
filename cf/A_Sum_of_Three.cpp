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
        ll n; cin>>n;
        ll flag=0;

        vector<vector<ll>>reminder={{1,1,1},{1,1,2},{2,2,1},{2,2,2}};
        // for(int i=0; i<reminder.size(); i++){
        //     for(int j=0; j<reminder[i].size(); j++){
        //         cout<<reminder[i][j]<<" ";
        //     }cout<<nn;
        // }

        // n = 3*a+(1|2) + 3*b+(1|2) + 3*c+(1|2)
        // (n-((1|2)+(1|2)+(1|2)))/3= a+b+c

        for(int i=3; i<=6; i++){
            vector<ll>num;
            if((n-i)%3==0){
                ll res=(n-i)/3;
                // cout<<i<<" "<<res<<nn;
                num.pb(0);
                num.pb(1);
                if(res-1>=0) num.pb(res-1);
                // sort(num.begin(), num.end());
                // for(auto &it: num) cout<<it<<" "; cout<<nn;
                set<ll>s;
                if(num.size()==3){
                    for(int j=0; j<3; j++){
                        s.insert(3*num[j]+reminder[i-3][j]);
                    }
                }
                if(s.size()==3){
                    flag=1;
                    cout<<"YES"<<nn;
                    for(auto &it: s) cout<<it<<" "; cout<<nn;
                    break;
                }
            }
        }
        if(!flag) cout<<"NO"<<nn;
        // cout<<"---------------"<<nn;
    }
    return 0;
}