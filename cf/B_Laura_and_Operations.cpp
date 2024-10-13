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
int min(int a, int b, int c){
    vector<int>v={a,b,c};
	sort(v.begin(), v.end());
	for(auto &it: v) if(it) return it;
}
int main(){
    fast_IO
    w(t){
        int arr[3]={}, cnt=0;
        for(int i=0; i<3; i++){
            int x; cin>>x;
            arr[i]=x&1;
            if(arr[i]) cnt++;
        }
        // same parities will cancel each other
        // and different will remain
        for(auto &it: arr){
            if(cnt%2==0) it^=1;
            cout<<it<<" ";
        }
        cout<<nn;
    }
    return 0;
}