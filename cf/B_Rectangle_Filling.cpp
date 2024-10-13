#include<bits/stdc++.h>
using namespace std;
#define w(t) int t; cin>>t; while(t--)
#define nn "\n"
#define int long long
#define pb push_back
#define ld long double
int32_t main(){
    w(t){
        int n,m; cin>>n>>m;
        vector<vector<int>>v(n,vector<int>(m,0));
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                char ch; cin>>ch;
                if(ch=='W') v[i][j]++;
            }
        }
        // for(int i=0; i<n; i++){
        //     for(int j=0; j<m; j++){
        //         cout<<v[i][j];
        //     }cout<<nn;
        // }
        int mnw=INT_MAX,mxw=INT_MIN;
        int mnb=INT_MAX,mxb=INT_MIN;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(v[i][j]){
                    mnw=min(mnw,j);
                    mxw=max(mxw,j);
                }else{
                    mnb=min(mnb,j);
                    mxb=max(mxb,j);
                }
            }
        }
        int mnwt=INT_MAX,mxwt=INT_MIN;
        int mnbt=INT_MAX,mxbt=INT_MIN;
        for(int j=0; j<m; j++){
            for(int i=0; i<n; i++){
                if(v[i][j]){
                    mnwt=min(mnwt,i);
                    mxwt=max(mxwt,i);
                }else{
                    mnbt=min(mnbt,i);
                    mxbt=max(mxbt,i);
                }
            }
        }
        // cout<<mnw<<" "<<mxw<<nn;
        // cout<<mnwt<<" "<<mxwt<<nn;
        int flag=0;
        if(mnw==0 && mxw==(m-1) && mnwt==0 && mxwt==(n-1)) flag++;
        if(mnb==0 && mxb==(m-1) && mnbt==0 && mxbt==(n-1)) flag++;
        cout<<(flag?"YES":"NO")<<nn;
        // cout<<"-------------"<<nn;
    }
}