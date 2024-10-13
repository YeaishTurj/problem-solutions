// #include<bits/stdc++.h>
// using namespace std;
// #define w(t) int t; cin>>t; while(t--)
// void solve(){
//     w(t){
//         int n, a, b; cin>>n>>a>>b;
//         int arr[n]={};
//         vector<int>left, right;
//         for(int i=1; i<=n; i++){
//             if(a<b && i>=a && i<=b){
//                 arr[i-1]=i;
//             }
//             else if(a>b && (i>=a || i<=b)) arr[i-1]=i;
//             if(a<b){
//                 if(i<a) right.push_back(i);
//                 if(i>b) left.push_back(i);
//             }else{
//                 if(i<a && i>n/2) right.push_back(i);
//                 if(i>b && i<=n/2) left.push_back(i);
//             }
//         }
//         if(a>b) reverse(arr, arr+n);
//         // cout<<a<<" "<<b<<endl;
//         vector<int>v;
//         for(auto &it: left) v.push_back(it);
//         for(auto &it: arr) if(it) v.push_back(it);
//         for(auto &it: right)  v.push_back(it);
//         sort(v.begin(), v.begin()+n/2);
//         sort(v.begin()+n/2, v.end());
//         if(v[0]==a && v[n-1]==b){
//             for(auto &it: v) cout<<it<<" "; cout<<endl;
//         }else cout<<-1<<endl;
        
//         // for(auto &it: arr) cout<<it<<" "; cout<<endl;
//     }
// }
// int main(){
//     solve();
//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;
#define w(t) int t; cin>>t; while(t--)
void solve(){
    w(t){
        int n, a, b; cin>>n>>a>>b;
        vector<int>v;
        v.push_back(a);
        for(int i=n; i>=1; i--){
            if(i!=a && i!=b) v.push_back(i);
        }
        v.push_back(b);
        sort(v.begin(), v.begin()+n/2);
        sort(v.begin()+n/2, v.end());
        if(v[0]==a && v[n-1]==b){
            for(auto &it: v) cout<<it<<" "; cout<<endl;
        }else cout<<-1<<endl;
    }
}
int main(){
    solve();
    return 0;
}
