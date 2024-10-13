#include<bits/stdc++.h>
using namespace std;
#define fast_IO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define w(t) int t; cin>>t; while(t--)
#define nn "\n"
#define ll long long
#define pb push_back
#define ld long double
void solve(){
    w(t){
        ll n; cin>>n;
        string str; cin>>str;
        ll prefix[n]={}, suffix[n]={};
        for(int i=0; i<n; i++){
            if(!i){
                if(str[i]=='0') prefix[i]++;
            }else{
                prefix[i]=prefix[i-1];
                if(str[i]=='0') prefix[i]++;
            }
        }
        for(int i=n-1; i>=0; i--){
            if(i==n-1){
                if(str[i]=='1') suffix[i]++;
            }else{
                suffix[i]=suffix[i+1];
                if(str[i]=='1') suffix[i]++;
            }
        }
        vector<pair<ll ,ll>>v,ans;
        // for(auto &it: prefix) cout<<it<<" "; cout<<nn;
        // for(auto &it: suffix) cout<<it<<" "; cout<<nn;
        // for(int i=0; i<n-1; i++){
        //     int j=i+1;
        //     if(suffix[i]>=ceil(j*1.0/2) && prefix[i+1]>=ceil((n-j)))
        // }
        if(suffix[0]>=ceil(n*1.0/2)) v.pb({n/2-0,0});
        if(prefix[n-1]>=ceil(n*1.0/2)) v.pb({abs(n/2-n),n});
        for(int i=0; i<n-1; i++){
            int j=i+1;
            if(prefix[i]>=ceil((j)*1.0/2) && suffix[i+1]>=ceil((n-j)*1.0/2)) v.pb({abs(n/2-j),j});
        }
        sort(v.begin(),v.end());
        // for(auto &it: v) cout<<it.first<<" "<<it.second<<nn;
        auto it=v[0];
        int i=0;
        while(i<n && it.first==v[i].first){
            ans.pb(v[i++]);
        }
        ll res=INT_MAX;
        double dis=INT_MAX;
        // for(auto &it: ans) cout<<it.first<<" "<<it.second<<nn;
        for(auto &it: ans){
            if(abs(n/2.0-it.second*1.0)<=dis){
                dis=abs(n/2.0-it.second*1.0);
            }
        }
        for(auto &it: ans){
            if(abs(n/2.0-it.second*1.0)==dis){
                res=min(res,it.second);
            }
        }
        cout<<res<<nn;
        // cout<<"-------------------"<<nn;
    }
}
int main(){
    fast_IO
    solve();
    return 0;
}
