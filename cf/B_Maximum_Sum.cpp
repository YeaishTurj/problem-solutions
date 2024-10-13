// #include<bits/stdc++.h>
// #include<ext/pb_ds/assoc_container.hpp>
// #include<ext/pb_ds/tree_policy.hpp>
// using namespace std;
// using namespace __gnu_pbds;
// #define Oset tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
// #define fast_IO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
// #define w(t) int t; cin>>t; while(t--)
// #define nn "\n"
// #define int long long
// #define pb push_back
// #define ld long double
// int binPow(int n, int k){
//     if(k==0) return 1;
//     else{
//         int turj=1;
//         while(k){if(k&1) turj*=n; n*=n, k>>=1;}
//         return turj;
//     }
// }
// bool compare(pair<int,int>&a, pair<int,int>&b){
//     if(a.first!=b.first){
//         if(a.first<b.first) return false;
//         return true;
//     }else{
//         if(a.second>b.second) return false;
//         return true;
//     }
// }
// const int M=1e9+7;
// int MOD(int n){
//     if(n>=0) return n%M;
//     else{
//         int temp= ceil(abs(n)*1.0/M) * M;
//         return abs(temp - abs(n));
//     }
// }
// int32_t main(){
//     fast_IO
//     w(t){
//         int n,k; cin>>n>>k;
//         int a[n];
//         for(auto &it: a) cin>>it;
//         int mx=0, curr=0, start=n, end=-1;
//         pair<int,int> s_e;
//         for(int i=0; i<n; i++){
//             // cout<<a[i]<<" ";
//             if(curr+a[i]<0){
//                 curr=0;
//                 start=n;
//                 end=-1;
//             }else{
//                 curr+=a[i];
//                 start=min(start,i);
//                 end=i;
//             }
//             if(curr>=mx){
//                 mx=curr;
//                 s_e={start,end};
//             }
//         }
//         if(curr>=mx){
//             mx=curr;
//             s_e={start,end};
//         }
//         // cout<<nn;
//         // cout<<mx<<nn;
//         // cout<<s_e.first<<" "<<s_e.second<<nn;
//         int total=mx;
//         for(int i=0; i<k; i++){
//             total = MOD( MOD(total) + MOD(mx) );
//             // cout<<mx<<" ";
//             mx = MOD(MOD(mx) * MOD(2));
//         }
//         for(int i=0; i<n; i++){
//             if(i<s_e.first || i>s_e.second) 
//                 total = total = MOD( MOD(total) + MOD(a[i]) );
//         }
//         cout<<total<<nn;
//         // cout<<"-------------"<<nn;
//     }
//     return 0;
// }




#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
#define Oset tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define fast_IO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define w(t) int t; cin>>t; while(t--)
#define nn "\n"
#define int long long
#define pb push_back
#define ld long double
int binPow(int n, int k){
    if(k==0) return 1;
    else{
        int turj=1;
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
const int M=1e9+7;
int MOD(int n){
    if(n>=0) return n%M;
    else{
        int temp= ceil(abs(n)*1.0/M) * M;
        return abs(temp - abs(n));
    }
}
int32_t main(){
    fast_IO
    w(t){
        int n,k; cin>>n>>k;
        int total=0, curr=0, mx=INT_MIN;
        int a[n];
        for(auto &it: a){
            cin>>it;
            total+=it;
            curr+=it;
            mx=max(mx,curr);
            if(curr<0) curr=0;
        }
        mx=max(mx,curr);
        while(k--){
            total = MOD( MOD(total) + MOD(mx));
            mx = MOD(2 * MOD(mx));
        }
        cout<<total<<nn;
    }
    return 0;
}