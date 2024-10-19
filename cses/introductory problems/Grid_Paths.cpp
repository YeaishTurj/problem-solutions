#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
#define Oset tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define fast_IO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define nn "\n"
#define int long long
#define pb push_back
#define ld long double
int binPow(int n, int k){
    int turj=1;
    while(k){if(k&1) turj*=n; n*=n, k>>=1;}
    return turj;
}
bool compare(pair<int,int>&a, pair<int,int>&b){
    if(a.first!=b.first){
        if(a.first<b.first) return false;
    }else{
        if(a.second>b.second) return false;
    }
    return true;
}
// up,down,left,right
int row[]={-1,1,0,0};
int col[]={0,0,-1,1};
int pathS[48];
int vis[9][9];
int path(int i, int j, int ind){
    // divide into two
    if(vis[i][j-1] && vis[i][j+1] && !vis[i-1][j] && !vis[i+1][j]) return 0;
    if(vis[i-1][j] && vis[i+1][j] && !vis[i][j-1] && !vis[i][j+1]) return 0;
    if(i==7 && j==1){
        // reached at destination
        return ind==48;
    }
    // path is finished without reaching destinaiton
    if(ind==48) return 0;
    // visit ind [i,j]
    vis[i][j]=1;
    int ways=0;
    if(pathS[ind]<4){
        // do whatever is asked to do
        int I=i+row[pathS[ind]];
        int J=j+col[pathS[ind]];
        if(!vis[I][J]){
            ways+=path(I,J,ind+1);
        }
    }else{
        // try every possible move
        for(int k=0; k<4; k++){
            int I=i+row[k];
            int J=j+col[k];
            if(!vis[I][J]){
                ways+=path(I,J,ind+1);
            }
        }
    }
    // undo visit ind [i,j]
    vis[i][j]=0;
    return ways;
}
int32_t main(){
    fast_IO
    string s; cin>>s;
    for(int i=0; i<s.size(); i++){
        if(s[i]=='U') pathS[i]=0;
        else if(s[i]=='D') pathS[i]=1;
        else if(s[i]=='L') pathS[i]=2;
        else if(s[i]=='R') pathS[i]=3;
        else pathS[i]=4;
    }
    for(int i=0; i<9; i++){
        for(int j=0; j<9; j++){
            if(i==0 || j==0 || i==8 || j==8) vis[i][j]=1;
            else vis[i][j]=0;
        }
    }
    // for(int i=0; i<9; i++){
    //     for(int j=0; j<9; j++){
    //         cout<<vis[i][j];
    //     }cout<<nn;
    // }
    // for(auto &it: pathS) cout<<it; cout<<nn;
    cout<<path(1,1,0);
}