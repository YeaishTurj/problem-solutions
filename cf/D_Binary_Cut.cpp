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
        string s; cin>>s;
        if(is_sorted(s.begin(),s.end())) cout<<1<<nn;
        else{
            int i=0;
            string str="";
            vector<string>v;
            while(i<s.size()){
                str.pb(s[i]);
                if(!is_sorted(str.begin(),str.end())){
                    str.pop_back();
                    v.pb(str);
                    str.clear();
                    str.pb(s[i]);
                }
                i++;
            }
            v.pb(str);
            int one_zero=0, cnt=0;
            for(auto &it: v){
                // cout<<it<<nn;
                if(!count(it.begin(),it.end(),'1') || !count(it.begin(),it.end(),'0')) cnt++;
                else one_zero++;
            }
            cout<<cnt+max(0LL,one_zero*2-1)<<nn;
        }
        // cout<<"-----------"<<nn;
    }
    return 0;
}