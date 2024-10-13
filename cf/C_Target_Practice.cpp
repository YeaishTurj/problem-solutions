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
        int score=0;
        for(int i=1; i<=10; i++){
            for(int j=1; j<=10; j++){
                char ch; cin>>ch;
                if(ch=='X'){
                    if(i==1||j==1 || i==10 || j==10) score+=1;
                    else if(i==2||j==2 || i==9 || j==9) score+=2;
                    else if(i==3||j==3 || i==8 || j==8) score+=3;
                    else if(i==4||j==4 || i==7 || j==7) score+=4;
                    else if(i==5||j==5 || i==6 || j==6) score+=5;
                }
            }
        }
        cout<<score<<nn;
    }
    return 0;
}