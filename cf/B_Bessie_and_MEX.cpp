#include<bits/stdc++.h>
using namespace std;
#define fast_IO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define w(t) int t; cin>>t; while(t--)
#define nn "\n"
#define ll long long
#define pb push_back
#define ld long double
bool compare(pair<int,int>&a, pair<int,int>&b){
    if(a.second>b.second) return false;
    return true;
}
void solve(){
    w(t){
        int n; cin>>n;
        set<int>s;
        int a[n];
        for(int i=0; i<n; i++){
            cin>>a[i];
            s.insert(i);
        }
        // for(auto &it: a) cout<<it<<" "; cout<<nn;
        // for(auto &it: s) cout<<it<<" "; cout<<nn;
        for(auto &it: a){
            if(it>0){
                cout<<*(s.begin())<<" ";
                s.erase(s.begin());
            }else{
                cout<<abs(it)+*(s.begin())<<" ";
                s.erase(abs(it)+*(s.begin()));
            }
        }
        cout<<nn;
        // cout<<"-----------------"<<nn;
    }
}
int main(){
    fast_IO
    solve();
    return 0;
}
