#include<bits/stdc++.h>
using namespace std;
vector<int>v;
int main(){
    int n; cin>>n;
    v.resize(n);
    for(auto &it: v) cin>>it;
    vector<vector<int>>dp(n,vector<int>(3,0));
    // function<int(int,int)>days=[&](int i, int prev){
    //     // if(i<0) return 0;
    //     if(i==0){
    //         if(v[i]==0) return 0;
    //         if(v[i]==1){
    //             if(prev==2) return 0;
    //             return 1;
    //         }
    //         if(v[i]==2){
    //             if(prev==1) return 0;
    //             return 1;
    //         }
    //         if(v[i]==3) return 1;
    //     }
    //     if(dp[i][prev]!=-1) return dp[i][prev];
    //     int nothing=days(i-1,0);
    //     int gym=(prev==1||v[i]==0||v[i]==1)?0:1+days(i-1,1);
    //     int contest=(prev==2||v[i]==0||v[i]==2)?0:1+days(i-1,2);
    //     return dp[i][prev]=max({nothing,gym,contest});
    // };
    if(v[0]==0){
        for(int prev=0; prev<3; prev++) dp[0][prev]=0;
    }else if(v[0]==1){
        for(int prev=0; prev<3; prev++){
            if(prev!=2) dp[0][prev]=1;
        }
    }else if(v[0]==2){
        for(int prev=0; prev<3; prev++){
            if(prev!=1) dp[0][prev]=1;
        }
    }else{
        for(int prev=0; prev<3; prev++) dp[0][prev]=1;
    }
    for(int i=1; i<n; i++){
        for(int prev=0; prev<3; prev++){
            int nothing=dp[i-1][0];
            int gym=(prev==1||v[i]==0||v[i]==1)?0:1+dp[i-1][1];
            int contest=(prev==2||v[i]==0||v[i]==2)?0:1+dp[i-1][2];
            dp[i][prev]=max({nothing,gym,contest});
        }
    }
    cout<<n-*max_element(dp[n-1].begin(),dp[n-1].end());
}