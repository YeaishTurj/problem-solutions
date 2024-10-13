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
ll sum(int n){
    ll ans=0;
    while(n){
        ans+=n%10;
        n/=10;
    }
    return ans;
}
// ll smallest1(ll n){
//     ll l=0, r=90, ans=-1;
//     while(l<=r){
//         ll mid=(l+r)/2;
//         // cout<<mid<<nn;
//         ll x = (-mid + sqrt(binPow(mid,2)+4*n)) / 2;
//         // cout<<x<<nn<<"-----------"<<nn;
//         if((binPow(x,2)+mid*x-n)==0){
//             ans=mid;
//             r=mid-1;
//         }else l=mid+1;
//     }
//     return ans;
// }
// ll smallest2(ll n){
//     ll l=0, r=90, ans=-1;
//     while(l<=r){
//         ll mid=(l+r)/2;
//         // cout<<mid<<nn;
//         ll x = (-mid + sqrt(binPow(mid,2)+4*n)) / 2;
//         // cout<<x<<nn<<"-----------"<<nn;
//         if((binPow(x,2)+mid*x-n)==0){
//             ans=x;
//             r=mid-1;
//         }else r=mid-1;
//     }
//     return ans;
// }
int main(){
    fast_IO
    ll n; cin>>n;
    // cout<<smallest1(n)<<nn;
    // cout<<smallest2(n)<<nn;
    ll mn=INT_MAX;
    for(ll i=1; i<=90; i++){
        ll x= (ll)(-i + sqrt( binPow(i, 2) + 4 * n)) /2 ;
        // cout<<x<<nn;
        if((binPow(x,2)+sum(x)*x-n)==0) mn=min(x,mn);
    }
    // if(smallest1(n)>0 && smallest2(n)>0) cout<<min(smallest1(n), smallest2(n))<<nn;
    // else if(smallest1(n)<0 && smallest2(n)<0) cout<<-1<<nn;
    // else cout<<max(smallest1(n), smallest2(n))<<nn;
    if(mn==INT_MAX) cout<<-1;
    else cout<<mn;
    return 0;
}

//2