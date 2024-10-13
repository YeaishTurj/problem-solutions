#include<bits/stdc++.h>
using namespace std;
#define w(t) int t; cin>>t; while(t--)
#define nn "\n"
#define int long long
#define pb push_back
#define ld long double
int32_t main(){
    w(t){
        int a,b,xk,yk,xq,yq; 
        cin>>a>>b>>xk>>yk>>xq>>yq;
        set<pair<int,int>>k,q;
        int row[]={1,-1},col[]={1,-1};
        for(int i=0; i<2; i++){
            int x=xk+row[i]*b;
            for(int j=0; j<2; j++){
                int y=yk+col[j]*a;
                k.insert({x,y});
            }
            int y=yk+col[i]*b;
            for(int j=0; j<2; j++){
                x=xk+row[j]*a;
                k.insert({x,y});
            }
            x=xq+row[i]*b;
            for(int j=0; j<2; j++){
                y=yq+col[j]*a;
                q.insert({x,y});
            }
            y=yq+col[i]*b;
            for(int j=0; j<2; j++){
                x=xq+row[j]*a;
                q.insert({x,y});
            }
        }
        int ans=0;
        for(auto &it: q) if(k.find(it)!=k.end()) ans++;
        cout<<ans<<nn;
        // cout<<"----------"<<nn;
    }
}