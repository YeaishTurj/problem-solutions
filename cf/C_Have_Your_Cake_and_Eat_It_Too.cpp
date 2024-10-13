#include<bits/stdc++.h>
using namespace std;
#define fast_IO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define nn "\n"
#define int long long
#define pb push_back
int next_section(vector<pair<int,int>>&v,int x){
    int l=0,r=v.size()-1;
    while(l<=r){
        int mid=(l+r)/2;
        if(v[mid].first>x) r=mid-1;
        else l=mid+1;
    }
    return l;
}
void solve(){
    int n; cin>>n;
    deque<int>a(n),b(n),c(n),preA,preB,preC;
    vector<pair<int,int>>alice,bob,charlie;
    for(auto &it: a){
        cin>>it;
        if(preA.empty()) preA.pb(it);
        else preA.pb(preA.back()+it);
    }
    preA.push_front(0);
    for(auto &it: b){
        cin>>it;
        if(preB.empty()) preB.pb(it);
        else preB.pb(preB.back()+it);
    }
    preB.push_front(0);
    for(auto &it: c){
        cin>>it;
        if(preC.empty()) preC.pb(it);
        else preC.pb(preC.back()+it);
    }
    preC.push_front(0);
    int mn=(preA.back()+3-1)/3;
    // cout<<mn<<nn;
    // for(auto &it: a) cout<<it<<" "; cout<<nn;
    // for(auto &it: preA) cout<<it<<" "; cout<<nn;
    // for alice
    for(int i=0; i<n; i++){
        int l=i,r=lower_bound(preA.begin(),preA.end(),preA[i]+mn)-preA.begin()-1;
        if(r<n) alice.pb({l,r});
    }
    // for(auto &[l,r]: alice) cout<<l<<" "<<r<<nn; cout<<"========="<<nn;
    // for(auto &it: b) cout<<it<<" "; cout<<nn;
    // for(auto &it: preB) cout<<it<<" "; cout<<nn;
    // for bob
    for(int i=0; i<n; i++){
        int l=i,r=lower_bound(preB.begin(),preB.end(),preB[i]+mn)-preB.begin()-1;
        if(r<n) bob.pb({l,r});
    }
    // for(auto &[l,r]: bob) cout<<l<<" "<<r<<nn; cout<<"========="<<nn;
    // for(auto &it: c) cout<<it<<" "; cout<<nn;
    // for(auto &it: preC) cout<<it<<" "; cout<<nn;
    // for charlie
    for(int i=0; i<n; i++){
        int l=i,r=lower_bound(preC.begin(),preC.end(),preC[i]+mn)-preC.begin()-1;
        if(r<n) charlie.pb({l,r});
    }
    // for(auto &[l,r]: charlie) cout<<l<<" "<<r<<nn; cout<<"========="<<nn;
    vector<int>res;
    // alice,bob,charlie -- alice,charlie,bob
    res.pb(alice.front().first);
    res.pb(alice.front().second);
    
    int ind=next_section(bob,res.back());
    if(ind<bob.size()){
        res.pb(bob[ind].first);
        res.pb(bob[ind].second);
        ind=next_section(charlie,res.back());
        if(ind<charlie.size()){
            res.pb(charlie[ind].first);
            res.pb(charlie[ind].second);
            for(auto &it: res) it++;
            // abc
            cout<<res[0]<<" "<<res[1]<<" "<<res[2]<<" "<<res[3]<<" "<<res[4]<<" "<<res[5]<<nn;
            return;
        }
        res.pop_back();
        res.pop_back();
    }
    if(res.size()){
        ind=next_section(charlie,res.back());
        if(ind<charlie.size()){
            res.pb(charlie[ind].first);
            res.pb(charlie[ind].second);
            ind=next_section(bob,res.back());
            if(ind<bob.size()){
                res.pb(bob[ind].first);
                res.pb(bob[ind].second);
                for(auto &it: res) it++;
                // acb
                cout<<res[0]<<" "<<res[1]<<" "<<res[4]<<" "<<res[5]<<" "<<res[2]<<" "<<res[3]<<nn;
                return;
            }
        }
    }
    res.clear();

    // bob,alice,charlie -- bob,charlie,alice
    res.pb(bob.front().first);
    res.pb(bob.front().second);
    
    ind=next_section(alice,res.back());
    if(ind<alice.size()){ 
        res.pb(alice[ind].first);
        res.pb(alice[ind].second);
        ind=next_section(charlie,res.back());
        if(ind<charlie.size()){
            res.pb(charlie[ind].first);
            res.pb(charlie[ind].second);
            for(auto &it: res) it++;
            // bac
            cout<<res[2]<<" "<<res[3]<<" "<<res[0]<<" "<<res[1]<<" "<<res[4]<<" "<<res[5]<<nn;
            return;
        }
        res.pop_back();
        res.pop_back();
    }
    if(res.size()){
        ind=next_section(charlie,res.back());
        if(ind<charlie.size()){
            res.pb(charlie[ind].first);
            res.pb(charlie[ind].second);
            ind=next_section(alice,res.back());
            if(ind<alice.size()){
                res.pb(alice[ind].first);
                res.pb(alice[ind].second);
                for(auto &it: res) it++;
                // bca
                cout<<res[4]<<" "<<res[5]<<" "<<res[0]<<" "<<res[1]<<" "<<res[2]<<" "<<res[3]<<nn;
                return;
            }
        }
    }
    res.clear();
    // charlie,alice,bob -- charlie,bob,alice
    res.pb(charlie.front().first);
    res.pb(charlie.front().second);
    
    ind=next_section(alice,res.back());
    if(ind<alice.size()){
        res.pb(alice[ind].first);
        res.pb(alice[ind].second);
        ind=next_section(bob,res.back());
        if(ind<bob.size()){
            res.pb(bob[ind].first);
            res.pb(bob[ind].second);
                for(auto &it: res) it++;
                // cab
                cout<<res[2]<<" "<<res[3]<<" "<<res[4]<<" "<<res[5]<<" "<<res[0]<<" "<<res[1]<<nn;
            return;
        }
        res.pop_back();
        res.pop_back();
    }
    if(res.size()){
        ind=next_section(bob,res.back());
        if(ind<bob.size()){
            res.pb(bob[ind].first);
            res.pb(bob[ind].second);
            ind=next_section(alice,res.back());
            if(ind<alice.size()){
                res.pb(alice[ind].first);
                res.pb(alice[ind].second);
                for(auto &it: res) it++;
                // cba
                cout<<res[4]<<" "<<res[5]<<" "<<res[2]<<" "<<res[3]<<" "<<res[0]<<" "<<res[1]<<nn;
                return;
            }else res.clear();
        }
    }
    res.clear();
    cout<<-1<<nn;
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