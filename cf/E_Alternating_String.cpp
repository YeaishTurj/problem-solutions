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
    int n; cin>>n;
    string s; cin>>s;
    if(n==1){
        cout<<1<<nn;
        return;
    }
    if(n&1){
        s="0"+s;
        vector<pair<vector<int>,vector<int>>>prefix;
        vector<int>v(26);
        prefix.pb({v,v});
        for(int i=1; i<=n; i++){
            auto even=prefix.back().first;
            auto odd=prefix.back().second;
            if(i&1){
                odd[s[i]-'a']++;
            }else{
                even[s[i]-'a']++;
            }
            prefix.pb({even,odd});
        }
        // cout<<s.substr(1)<<nn;
        // for(int i=1; i<=n; i++){
        //     cout<<i<<"->";
        //     auto even=prefix[i].first;
        //     auto odd=prefix[i].second;
        //     for(char ch='a'; ch<='z'; ch++){
        //         if(even[ch-'a']) cout<<ch<<even[ch-'a']<<" ";
        //     }
        //     cout<<"||";
        //     for(char ch='a'; ch<='z'; ch++){
        //         if(odd[ch-'a']) cout<<ch<<odd[ch-'a']<<" ";
        //     }
        //     cout<<nn;
        // }
        int mxEven=*max_element(prefix[n-1].first.begin(),prefix[n-1].first.end());
        int mxOdd=*max_element(prefix[n-1].second.begin(),prefix[n-1].second.end());
        int ans=n-1-mxEven-mxOdd;
        for(int i=1; i<n; i++){
            auto lastEven=prefix.back().first;
            auto lastOdd=prefix.back().second;
            auto prevEven=prefix[i-1].first;
            auto prevOdd=prefix[i-1].second;
            vector<int>newEven(26,0);
            vector<int>newOdd(26,0);
            if(i&1){        // odd index
                lastOdd[s[i]-'a']--;
                for(int j=0; j<26; j++){
                    newEven[j]+=prevEven[j]+lastOdd[j]-prevOdd[j];
                }
                for(int j=0; j<26; j++){
                    newOdd[j]+=prevOdd[j]+lastEven[j]-prevEven[j];
                }
                mxEven=*max_element(newEven.begin(),newEven.end());
                mxOdd=*max_element(newOdd.begin(),newOdd.end());
                ans=min(ans,n-1-mxEven-mxOdd);
                // cout<<n-1-mxEven-mxOdd<<nn;
            }else{          // even index
                lastEven[s[i]-'a']--;
                for(int j=0; j<26; j++){
                    newOdd[j]+=prevOdd[j]+lastEven[j]-prevEven[j];
                }
                for(int j=0; j<26; j++){
                    newEven[j]+=prevEven[j]+lastOdd[j]-prevOdd[j];
                }
                mxEven=*max_element(newEven.begin(),newEven.end());
                mxOdd=*max_element(newOdd.begin(),newOdd.end());
                ans=min(ans,n-1-mxEven-mxOdd);
                // cout<<n-1-mxEven-mxOdd<<nn;
            }
        }
        cout<<ans+1<<nn;
        return;
    }
    vector<int>odd(26),even(26);
    for(int i=0; i<n; i++){
        if(i&1) odd[s[i]-'a']++;
        else even[s[i]-'a']++;
    }
    cout<<n-*max_element(odd.begin(),odd.end())-*max_element(even.begin(),even.end())<<nn;
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