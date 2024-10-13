#include<bits/stdc++.h>
using namespace std;
#define w(t) int t; cin>>t; while(t--)
#define nn "\n"
#define int long long
#define pb push_back
#define ld long double
int32_t main(){
    w(t){
        int n; cin>>n;
        vector<int>mx_size(n+1,0),prev_pos(n+1,-1);
        for(int i=0; i<n; i++){
            int x; cin>>x;
            if(prev_pos[x]==-1){
                if(i&1) prev_pos[x]=1;
                else prev_pos[x]=0;
                mx_size[x]=1;
            }else{
                if(prev_pos[x]==0 && i&1){
                    mx_size[x]++;
                    prev_pos[x]=1;
                }else if(prev_pos[x] && i%2==0){
                    mx_size[x]++;
                    prev_pos[x]=0;
                }
            }
        }
        for(int i=1; i<=n; i++) cout<<mx_size[i]<<" "; cout<<nn;
    }
}