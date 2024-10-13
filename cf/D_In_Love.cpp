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
    int q; cin>>q;
    map<pair<int,int>,int>m;
    multiset<pair<int,int>>s;
    while(q--){
        char ch; cin>>ch;
        int l, r; cin>>l>>r;
        if(ch=='+'){
            m[{l,r}]++;
            s.insert({r,l});
        }else{
            m[{l,r}]--;
            if(m[{l,r}]==0) m.erase({l,r});
            s.erase(s.find({r,l}));
        }
        // for(auto it=m.begin(); it!=m.end(); it++)
        //     cout<<"("<<it->first.first<<","<<it->first.second<<") ";
        // cout<<nn;
        // for(auto it=m.rbegin(); it!=m.rend(); it++)
        //     cout<<"("<<it->first.first<<","<<it->first.second<<") ";
        // cout<<nn;

        if(m.size() && s.begin()->first < m.rbegin()->first.first) cout<<"YES"<<nn;
        else cout<<"NO"<<nn; 
    }
    return 0;
}


// (1,3), (2,2), (2,3), (3,4)
// 31 22 32 43---------store in {r,l} format in set
// 22 31 32 43
// 13, 22, 23, 34-----------store in {l,r} format in map