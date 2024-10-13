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
    string s; cin>>s;
    int n=s.size(),mx=INT_MIN;
    string ans;
    for(char ch='a'; ch<='z'; ch++){
        string mid;
        mid.pb(ch);
        string newS;
        for(int i=0; i<n; i++){
            string first;
            for(int j=0; j<i; j++){
                first+=s[j];
            }
            string last;
            for(int j=i; j<n; j++){
                last+=s[j];
            }
            newS=first+mid+last;
            // cout<<newS<<nn;
            int cnt=2;
            for(int i=1; i<newS.size(); i++){
                if(newS[i]==newS[i-1]) cnt+=1;
                else cnt+=2;
            }
            if(cnt>mx){
                mx=cnt;
                ans=newS;
            }
        }

        newS=s+mid;
        int cnt=2;
        for(int i=1; i<newS.size(); i++){
            if(newS[i]==newS[i-1]) cnt+=1;
            else cnt+=2;
        }
        if(cnt>mx){
            mx=cnt;
            ans=newS;
        }
    }
    cout<<ans<<nn;
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