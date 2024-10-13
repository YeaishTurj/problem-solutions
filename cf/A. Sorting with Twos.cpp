#include<bits/stdc++.h>
using namespace std;
#define fast_IO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define w(t) int t; cin>>t; while(t--)
#define nn "\n"
#define ll long long
#define pb push_back
#define ld long double
ll binPow(ll n, ll k){
    if(k==0) return 1;
    else{
        ll turj=1;
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
int main(){
    fast_IO
    w(t){
        int n; cin>>n;
        int max_m=log(n)/log(2), last_by_m=binPow(2, max_m);
        int a[n], b[n];
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        int flag=1;
        for(int i=1; i<=max_m; i++){
            for(int j=binPow(2, i-1); j<binPow(2, i)-1; j++){
                if(a[j]>a[j+1]) flag=0;
            }
        }
        for(int i=last_by_m;i<n-1; i++){
            if(a[i]>a[i+1]) flag=0;
        }
        cout<<(flag?"YES":"NO")<<nn;
    }
    return 0;
}


// #include<bits/stdc++.h>
// using namespace std;
// #define fast_IO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
// #define w(t) int t; cin>>t; while(t--)
// #define nn "\n"
// #define ll long long
// #define pb push_back
// #define ld long double
// ll binPow(ll n, ll k){
//     if(k==0) return 1;
//     else{
//         ll turj=1;
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
// int main(){
//     fast_IO
//     w(t){
//         int n; cin>>n;
//         int max_m=log(n)/log(2), last_by_m=binPow(2, max_m);
//         int a[n], b[n];
//         for(int i=0; i<n; i++){
//             cin>>a[i];
//         }
//         int mn=*min_element(a+last_by_m-1,a+n);
//         for(int i=max_m; i>=0; i--){
//             int mx=*max_element(a, a+binPow(2,i));
//             // cout<<mx<<" "<<mn<<nn;
//             for(int j=0; j<binPow(2, i); j++){
//                 a[j]-= (mx-mn);
//             }
//             if(i) mn=*min_element(a+binPow(2, i-1), a+binPow(2, i));
//         }
//         int flag=1;
//         for(int i=0; i<n-1; i++){
//             if(a[i]>a[i+1]) flag=0;
//         }
//         cout<<(flag?"YES":"NO")<<nn;
//         // cout<<"----------"<<nn;
//     }
//     return 0;
// }