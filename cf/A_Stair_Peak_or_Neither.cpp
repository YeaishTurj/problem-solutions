#include<bits/stdc++.h>
using namespace std;
#define w(t) int t; cin>>t; while(t--)
#define nn "\n"
#define int long long
#define pb push_back
#define ld long double
int32_t main(){
    w(t){
        int a,b,c; cin>>a>>b>>c;
        if(a<b && b<c) cout<<"STAIR"<<nn;
        else if(a<b && b>c) cout<<"PEAK"<<nn;
        else cout<<"NONE"<<nn;
    }
}