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
        string str; cin>>str;
        if((str.find("pie")==string::npos) && (str.find("map")==string::npos)) cout<<0<<nn;
        else{
            string temp="mapie";
            int i=0;
            vector<int>v;
            while(i<n){
                int j=0;
                while(j<5 && str[i+j]==temp[j]){
                    j++;
                }
                if(j==5){
                    v.pb(i+2);
                }
                if(j==0) j++;
                i=i+j; 
            }
            // for(auto &it: v) cout<<it<<" "; cout<<nn;
            reverse(v.begin(),v.end());
            int ans=v.size();
            temp.clear();
            for(int i=0; i<n; i++){
                if(v.size() && i==v.back()){
                    v.pop_back();
                    continue;
                }
                temp.pb(str[i]);
            }
            str=temp;
            string map="map", pie="pie";
            i=0;
            while(i<str.size()){
                int j=0;
                while(j<3 && str[i+j]==map[j]){
                    j++;
                }
                if(j==3){
                    ans++;
                }
                if(j==0) j++;
                i=i+j; 
            }
            i=0;
            while(i<str.size()){
                int j=0;
                while(j<3 && str[i+j]==pie[j]){
                    j++;
                }
                if(j==3){
                    ans++;
                }
                if(j==0) j++;
                i=i+j; 
            }
            cout<<ans<<nn;
        }
    }
    return 0;
}