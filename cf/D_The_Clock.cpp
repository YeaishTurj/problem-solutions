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
bool IsPalindrome(int hh, int mm){
    string hhStr(2,'0'), mmStr(2,'0');
    int i=1;
    while(hh){
        hhStr[i]=hh%10+'0';
        hh/=10; i--;
    }
    i=1;
    while(mm){
        mmStr[i]=mm%10+'0';
        mm/=10; i--;
    }
    reverse(mmStr.begin(), mmStr.end());
    if(mmStr==hhStr) return true;
    return false;
}
int main(){
    // fast_IO
    w(t){
        int hh, mm, x; scanf("%d:%d%d", &hh, &mm, &x);
        int cnt=0, hh1=hh, mm1=mm;
        while(true){
            if(IsPalindrome(hh1,mm1)) cnt++;
            hh1=((hh1*60+mm1+x)/60)%24;
            mm1=(hh1*60+mm1+x)%60;
            // cout<<hh1<<":"<<mm1<<nn;
            if(hh==hh1 && mm==mm1) break;
        }
        cout<<cnt<<nn;
        // cout<<"----------"<<nn;
    }
    return 0;
}