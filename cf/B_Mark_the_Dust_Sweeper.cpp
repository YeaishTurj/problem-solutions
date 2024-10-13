// #include<bits/stdc++.h>
// using namespace std;
// #define w(t) int t; cin>>t; while(t--)
// #define nn "\n"
// #define int long long
// #define pb push_back
// #define ld long double
// int32_t main(){
//     w(t){
//         int n; cin>>n;
//         vector<int>v(n);
//         for(auto &it: v) cin>>it;
//         vector<int>a(n,v[0]);
//         v.back()=a.back()=0;
//         if(v==a) cout<<v[0]*(n-1)<<nn;
//         else{
//             int l=0,r=0;
//             while(l<n){
//                 if(v[l]) break;
//                 l++;
//             }
//             while(r<n){
//                 if(!v[r] && l<r) break;
//                 r++;
//             }
//             // cout<<l<<" "<<r<<nn;
//             int ans=0;
//             while(r<n){
//                 if(!v[r]){
//                     v[r]++;
//                     v[l]--;
//                     if(!v[l]) l++;
//                     ans++;
//                 }
//                 r++;
//             }
//             // for(auto &it: v) cout<<it<<" "; cout<<nn;
//             cout<<accumulate(v.begin(),v.begin()+n-1,ans)<<nn;
//         }
//     }
// }


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
        int flag=0,ans=0;
        for(int i=0; i<n-1; i++){
            int x; cin>>x;
            if(x) flag++;
            ans+=x;
            if(!x && flag) ans++;
        }
        cin>>flag;
        cout<<ans<<nn;
    }
}