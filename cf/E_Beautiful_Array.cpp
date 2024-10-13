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
    int n,k; cin>>n>>k;
    vector<int>v(n);
    map<int,int>m;
    for(auto &it: v){
        cin>>it;
        m[it]++;
    }
    vector<int>odd;
    for(auto &it: m){
        if(it.second&1) odd.pb(it.first);
    }
    if(odd.size()<=1) cout<<0<<nn;
    else{
        sort(odd.begin(),odd.end());
        map<int,vector<int>>mp;
        for(auto &it: odd){
            mp[it%k].pb(it);
        }
        int odd_cnt=0;
        for(auto &it: mp){
            odd_cnt+=(it.second.size()&1);
        }
        if(odd_cnt>1) cout<<-1<<nn;
        else{
            // cout<<k<<nn;
            int ans=0;
            for(auto &[cnt,arr]: mp){
                // cout<<cnt<<"-> ";
                // for(auto &it: arr) cout<<it<<" "; cout<<nn;
                if(arr.size()&1){
                    if(arr.size()==1) continue;
                    deque<int>suffix,prefix;
                    for(int i=arr.size()-1; i>=1; i-=2){
                        if(i==arr.size()-1) suffix.pb(arr[i]-arr[i-1]);
                        else suffix.pb(suffix.back()+arr[i]-arr[i-1]);
                    }
                    reverse(suffix.begin(),suffix.end());
                    suffix.push_back(0);
                    // for(auto &it: suffix) cout<<it<<" "; cout<<nn;
                    for(int i=0; i<arr.size()-1; i+=2){
                        if(i==0) prefix.pb(arr[i+1]-arr[i]);
                        else prefix.pb(prefix.back()+arr[i+1]-arr[i]);
                    }
                    prefix.push_front(0);
                    // for(auto &it: prefix) cout<<it<<" "; cout<<nn;
                    int mn=INT_MAX;
                    for(int i=0; i<min(prefix.size(),suffix.size()); i++){
                        mn=min(mn,prefix[i]/k+suffix[i]/k);
                    }
                    ans+=mn;
                }else{
                    for(int i=0; i<arr.size()-1; i+=2){
                        ans+=(arr[i+1]-arr[i])/k;
                    }                    
                }
            }
            cout<<ans<<nn;
        }
    }
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