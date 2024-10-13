#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
#define Oset tree<ll, null_type, less<ll>, rb_tree_tag, tree_order_statistics_node_update>
#define fast_IO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define w(t) ll t; cin>>t; while(t--)
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
bool compare(pair<ll,ll>&a, pair<ll,ll>&b){
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
    string str; cin>>str;
    ll a, b; cin>>a>>b;
    vector<ll>dividedByA(str.size(),-1), dividedByB(str.size(),-1);
    ll i=0, rem=0;
    while(i<str.size()){
        rem=((rem*10LL)%a+(str[i]-'0')%a)%a;
        // if(rem==0 && i!=str.size()-1 && str[i+1]!=0) dividedByA.push_back(i);
        if(rem==0) dividedByA[i]=0;
        i++;
    }
    // reverse(str.begin(),str.end());
    i=str.size()-1, rem=0;
    while(i>=0){
        rem=(((str[i]-'0')%b*((binPow(10LL,str.size()-i-1))%b)%b)+rem)%b;
        // if(rem==0 && i!=str.size()-1 && str[i]!='0') dividedByB.push_back(str.size()-i-1);
        if(rem==0) dividedByB[i]=0;
        i--;
    }
    // for(auto &it: dividedByA) cout<<it<<" "; cout<<nn;
    // for(auto &it: dividedByB) cout<<it<<" "; cout<<nn;
    for(ll i=0; i<str.size()-1; i++){
        if(dividedByA[i]==0 && dividedByB[i+1]==0 && str[i+1]!='0'){
            cout<<"YES"<<nn;
            for(ll j=0; j<str.size(); j++){
                cout<<str[j];
                if(j==i) cout<<nn;
            }
            return 0;
        }
    }
    cout<<"NO";
}