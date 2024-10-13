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
        vector<vector<int>>v; map<int,int>m; set<int>s; vector<int>count[51];
        for(int i=0; i<n; i++){
            int k; cin>>k; vector<int>vec;
            for(int j=0; j<k; j++){
                int x; cin>>x;
                vec.pb(x); s.insert(x); count[x].pb(i); m[x]++;
            }
            v.pb(vec);
        }
        int mx=INT_MIN;
        for(auto &it: s){
            for(int i=0; i<51; i++){
                if(it==i){
                    map<int,int>mp; mp=m;
                    for(int j=0; j<count[i].size(); j++){
                        for(auto &jt: v[count[i][j]]){
                            mp[jt]--;
                        }
                    }
                    int cnt=0;
                    for(auto &jt: mp){
                        if(jt.second) cnt++;
                    }
                    mx=max(cnt,mx);
                }
            }
        }
        cout<<mx<<nn;
    }
    return 0;
}