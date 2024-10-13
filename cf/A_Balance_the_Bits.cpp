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
int32_t main(){
    fast_IO
    w(t){
        int n; cin>>n;
        string s; cin>>s;
        if(n&1) cout<<"NO"<<nn;
        else if(s.front()=='0' || s.back()=='0') cout<<"NO"<<nn;
        else{
            int one=count(s.begin(),s.end(),'1'), zero=n-one;
            if(one&1 || zero&1) cout<<"NO"<<nn;
            else{
                string s1(n,'0'),s2(n,'0');
                int cnt1=0, cnt0=0;
                // cout<<one<<" "<<zero<<nn;
                for(int i=0; i<n; i++){
                    if(s[i]=='1'){
                        if(cnt1<one/2) s1[i]=s2[i]='(';
                        else s1[i]=s2[i]=')';
                        cnt1++;
                    }else{
                        if(cnt0&1) s1[i]='(',s2[i]=')';
                        else s1[i]=')',s2[i]='(';
                        cnt0++;
                    }
                }
                cout<<"YES"<<nn<<s1<<nn<<s2<<nn;
            }
        }
    }
    return 0;
}