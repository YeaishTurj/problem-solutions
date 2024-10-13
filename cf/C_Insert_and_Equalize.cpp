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
        ll a[n], all_odd=1, all_even=1;
        for(auto &it: a){
            cin>>it;
        }
        sort(a,a+n);
        vector<ll>v;
        for(int i=0; i<n-1; i++){
            v.pb(a[i+1]-a[i]);
        }
        // cout<<all_even<<" "<<all_odd<<nn;
        // for(auto &it: a) cout<<it<<" "; cout<<nn;
        // for(auto &it: v) cout<<it<<" "; cout<<nn;
        if(!v.size()) cout<<1<<nn;
        else{
            ll x=0;
            for(auto &it: v){
                x=__gcd(x, it);
            }
            // cout<<x<<nn;
            
            ll mx=a[n-1];
            ll cnt=0;
            for(auto &it: a){
                cnt+=(mx-it)/x;
            }
            // cout<<cnt<<nn;
            ll flag=0, cnt1=cnt;
            for(int i=n-1; i>=0; i--){
                if(i){
                    if((a[i]-x)!=a[i-1]){
                        flag=1;
                        cnt1+=(a[n-1]-(a[i]-x))/x;
                        break;
                    }
                }else{
                    flag=1;
                    cnt1+=(a[n-1]-(a[i]-x))/x;
                }

            }
            cout<<min(cnt+n, cnt1)<<nn;
        }
        // cout<<"-----------------"<<nn;
    }
    return 0;
}