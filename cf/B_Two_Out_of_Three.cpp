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
        int a[n], b[n]={}, flag=1;
        vector<int>hash[101];
        map<int,int>m;
        for(int i=0; i<n; i++){
            cin>>a[i];
            hash[a[i]].pb(i);
            if(hash[a[i]].size()>1) m[a[i]]++;
        }
        int cnt=1;
        if(m.size()>1){ // number of same element should be greater than 1
            for(auto &it: hash){
                if(it.size() && it.size()>1){
                    // for(auto &jt: it) cout<<jt<<" "; cout<<nn;
                    for(int i=0; i<it.size()-1; i++){ // in the case of same elements, we should apply any one condition on them
                        if(i%2==0){
                            if(cnt==1){
                                b[it[i]]=1;
                                b[it[i+1]]=2;
                            }else{
                                b[it[i]]=1;
                                b[it[i+1]]=3;
                            }
                        }// here we used only two condition, condition 1 & 2, and this should work, as 1, 2, 3 already have come by cond-1, 2 
                    }
                    if(it.size()&1){ // if there is any element left, we make it as same the same element of the applied condition
                        if(cnt==1) b[it[it.size()-1]]=1;
                        else b[it[it.size()-1]]=3;
                    }
                    cnt^=1;
                }
            }
            for(auto &it: b) 
                if(it) cout<<it<<" ";
                else cout<<2<<" "; 
            cout<<nn;
        }else cout<<-1<<nn;
        // cout<<"------------------"<<nn;
    }
    return 0;
}