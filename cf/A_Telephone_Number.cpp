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
int search(string str, int n, char ch){
    int l=0, r=n;
    while(l<=r){
        int mid=(l+r)/2;
        if(str[mid]==ch) return mid;
        else if(str[mid]<ch) l=mid+1;
        else r=mid-1;
    }
    return -1;
}
int main(){
    fast_IO
    w(t){
        int n; cin>>n;
        string str; cin>>str;
        int flag=0, ind;
        for(int i=0; i<n; i++){
            if(str[i]=='8'){
                flag=1; ind=i; break;
            }
        }
        if(flag && (n-ind>=11)) cout<<"YES"<<nn;
        else cout<<"NO"<<nn;
    }
    return 0;
}