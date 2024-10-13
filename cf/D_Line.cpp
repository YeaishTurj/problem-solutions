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
        string str; cin>>str;
        ll sum=0;
        vector<ll> value;
        for(ll i=0; i<n; i++){
            if(str[i]=='L') sum+=i;
            else sum+=n-i-1;
            if(n&1){
                if((str[i]=='L' && i<n/2) || (str[i]=='R' && i>n/2))
                    value.pb(abs(max(n-i-1,i)-min(n-i-1,i)));
            }else{
                if((str[i]=='L' && i<n/2) || (str[i]=='R' && i>=n/2))
                    value.pb(abs(max(n-i-1,i)-min(n-i-1,i)));
            }
        }
        sort(value.begin(), value.end(), greater<ll>());
        // for(auto &it: value) cout<<it<<" "; cout<<nn;
        for(ll i=0; i<n; i++){
            if(i<value.size()) sum+=value[i];
            cout<<sum<<" ";
        }
        cout<<nn;
        // cout<<"--------------"<<nn;
    }
    return 0;
}

// L L L L L   R R R R R
// 0 1 2 3 4   5 6 7 8 9
// 10/2=5