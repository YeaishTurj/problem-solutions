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
// void print(vector<int>&v){
//     for(auto &it: v) cout<<it; cout<<nn;
// }
// int32_t main(){
//     fast_IO
//     w(t){
//         int n; cin>>n;
//         string s; cin>>s;
//         vector<int>v;
//         for(auto &it: s) v.pb(it=='U'?1:0);
//         // print(v);
//         int turn=1, alice=1;
//         if(count(v.begin(),v.end(),1)==0) alice=0;
//         while(alice){
//             int flag=0;
//             if(!flag){
//                 for(int i=0; i<v.size(); i++){
//                     int prev=(i-1==-1)?v.size()-1:i-1, cur=i, next=(i+1==v.size())?0:i+1;
//                     // cout<<v[prev]<<" "<<v[cur]<<" "<<v[next]<<nn;
//                     if(v[prev] && v[cur] && v[next]){
//                         v[prev]^=1; v[next]^=1;
//                         v.erase(v.begin()+cur);
//                         flag++; break;
//                     }
//                 }
//             }
//             if(!flag){
//                 for(int i=0; i<v.size(); i++){
//                     int prev=(i-1==-1)?v.size()-1:i-1, cur=i, next=(i+1==v.size())?0:i+1;
//                     // cout<<v[prev]<<" "<<v[cur]<<" "<<v[next]<<nn;
//                     if(!v[prev] && v[cur] && v[next]){
//                         v[prev]^=1; v[next]^=1;
//                         v.erase(v.begin()+cur);
//                         flag++; break;
//                     }
//                 }
//             }
//             if(!flag){
//                 for(int i=0; i<v.size(); i++){
//                     int prev=(i-1==-1)?v.size()-1:i-1, cur=i, next=(i+1==v.size())?0:i+1;
//                     // cout<<v[prev]<<" "<<v[cur]<<" "<<v[next]<<nn;
//                     if(v[prev] && v[cur] && !v[next]){
//                         v[prev]^=1; v[next]^=1;
//                         v.erase(v.begin()+cur);
//                         flag++; break;
//                     }
//                 }
//             }
//             if(!flag){
//                 for(int i=0; i<v.size(); i++){
//                     int prev=(i-1==-1)?v.size()-1:i-1, cur=i, next=(i+1==v.size())?0:i+1;
//                     // cout<<v[prev]<<" "<<v[cur]<<" "<<v[next]<<nn;
//                     if(!v[prev] && v[cur] && !v[next]){
//                         v[prev]^=1; v[next]^=1;
//                         v.erase(v.begin()+cur);
//                         flag++; break;
//                     }
//                 }
//             }

//             if(!flag){
//                 if(turn) alice=0;
//                 break;
//             }else if(v.size()==1 && v[0]){
//                 if(turn) alice=0;
//                 break;
//             }else if(v.size()==1 && !v[0]){
//                 if(!turn) alice=0;
//                 break;
//             }

//             turn^=1;
//         }

//         cout<<(alice?"YES":"NO")<<nn;
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
void print(vector<int>&v){
    for(auto &it: v) cout<<it; cout<<nn;
}
int32_t main(){
    fast_IO
    w(t){
        int n; cin>>n;
        string s; cin>>s;
        int cnt=count(s.begin(),s.end(),'U');
        cout<<(cnt&1?"YES":"NO")<<nn;
    }    
    return 0;
}