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
    if(k==0) return 1;
    else{
        int turj=1;
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
int32_t main(){
    fast_IO
    w(t){
        int n,k; cin>>n>>k;
        deque<int>v(n);
        map<int,int>pos;
        for(int i=1; i<=k; i++) pos[i]=-1;
        map<int,priority_queue<int>>dis;
        for(int i=0; i<n; i++){
            int x; cin>>x;
            dis[x].push(i-pos[x]-1);
            pos[x]=i;
        }
        for(int i=1; i<=k; i++) dis[i].push(n-pos[i]-1);
        int mn=INT_MAX;
        for(auto &it: dis){
            // cout<<it.first<<nn;
            auto pq=it.second;
            // while(!pq.empty()){
            //     cout<<pq.top()<<" "; pq.pop();
            // }
            if(pq.size()==1) mn=min(mn, pq.top()/2);
            else if(pq.size()>1){
                int top1=pq.top(); pq.pop();
                int top2=pq.top();
                if(top1/2<=top2) mn=min(mn, top2);
                else mn=min(mn,top1/2);
                // cout<<top1<<" "<<top2<<nn;
                // mn=min({mn, top1/2, top2});
            }
            // cout<<nn;
        }
        cout<<mn<<nn;
        // cout<<"---------------"<<nn;
    }
    return 0;
}