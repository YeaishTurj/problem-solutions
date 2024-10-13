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
void solve(){
    int x; cin>>x;
    vector<int>v;
    for(int i=0; i<64; i++){
        v.pb(!!(x&(1LL<<i)));
    }
    // for(auto &it: v) cout<<it; cout<<nn;
    int i=0;
    while(i<64){
        int j=i;
        while(j<64 && v[i] && v[i]==v[j]) j++;
        if(j-i<2) i++;
        else{
            for(int k=i; k<j; k++){
                if(k==i) v[k]=-1;
                else v[k]=0;
            }
            v[j]=1;
            i=j;
        }
    }
    cout<<32<<nn;
    for(int i=0; i<32; i++) cout<<v[i]<<" "; cout<<nn;
}
int32_t main(){
    fast_IO
    int tt=1;
    cin>>tt;
    while(tt--){
        solve();
        // cout<<"-----------"<<nn;
    }
    return 0;
}
// #include<bits/stdc++.h>
// #include<ext/pb_ds/assoc_container.hpp>
// #include<ext/pb_ds/tree_policy.hpp>
// using namespace std;
// using namespace __gnu_pbds;
// #define Oset tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
// #define fast_IO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
// #define nn "\n"
// #define int long long
// #define pb push_back
// #define ld long double
// int binPow(int n, int k){
//     int turj=1;
//     while(k){if(k&1) turj*=n; n*=n, k>>=1;}
//     return turj;
// }
// bool compare(pair<int,int>&a, pair<int,int>&b){
//     if(a.first!=b.first){
//         if(a.first<b.first) return false;
//     }else{
//         if(a.second>b.second) return false;
//     }
//     return true;
// }
// void solve(){
//     int x; cin>>x;
//     if(x==1) cout<<1<<nn<<1<<nn;
//     else if(!(x&(x-1))){
//         int n;
//         for(int i=0; i<32; i++){
//             if(x&(1LL<<i)) n=i;
//         }
//         // cout<<n<<nn;
//         vector<int>ans;
//         for(int i=0; i<=n; i++){
//             if(i==n) ans.pb(1);
//             else ans.pb(0);
//         }
//         cout<<ans.size()<<nn;
//         for(auto &it: ans) cout<<it<<" "; cout<<nn;
//     }else if(!(x&(x+1))){
//         int n;
//         for(int i=0; i<32; i++){
//             if((x+1)&(1LL<<i)) n=i;
//         }
//         // cout<<n<<nn;
//         vector<int>ans;
//         for(int i=0; i<=n; i++){
//             if(i==n) ans.pb(1);
//             else if(i==0) ans.pb(-1);
//             else ans.pb(0);
//         }
//         cout<<ans.size()<<nn;
//         for(auto &it: ans) cout<<it<<" "; cout<<nn;
//     }else{
//         vector<int>v;
//         for(int i=0; i<33; i++){
//             v.pb(!!(x&(1LL<<i)));
//         }
//         int flag=1;
//         for(int i=0; i<32; i++){
//             if(v[i] && v[i]==v[i+1]) flag=0;
//         }
//         if(flag){
//             vector<int>res;
//             while(x){
//                 res.pb(x&1);
//                 x>>=1;
//             }
//             cout<<res.size()<<nn;
//             for(auto &it: res) cout<<it<<" "; cout<<nn;
//         }else{
//             vector<int>res;
//             while(x){
//                 // cout<<x<<"-> ";
//                 if(x&1){
//                     if(x%4==1) res.pb(1), x--;
//                     else res.pb(-1), x++;
//                 }else{
//                     res.pb(0);
//                 }
//                 // cout<<x<<"\n";
//                 x>>=1LL;
//             }
//             cout<<res.size()<<nn;
//             for(auto &it: res) cout<<it<<" "; cout<<nn;
//         }
//     }
// }
// int32_t main(){
//     fast_IO
//     int tt=1;
//     cin>>tt;
//     while(tt--){
//         solve();
//         cout<<"-----------"<<nn;
//     }
//     return 0;
// }