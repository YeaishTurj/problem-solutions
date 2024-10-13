#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
#define Oset tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
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
ll lower_bound(vector<pair<ll,ll>>&v, ll x){
    ll l=0, r=v.size();
    while(l<=r){
        ll mid=(l+r)/2;
        if(v[mid].first==x) return mid;
        else if(v[mid].first<x) l=mid+1;
        else r=mid-1;   
    }
    return l;
}
int main(){
    fast_IO
    w(t){
        ll n; cin>>n;
        char trump; cin>>trump;
        vector<pair<char,int>>card,trumpCard;
        vector<pair<pair<int,char>,pair<int,char>>>res;
        for(int i=0; i<2*n; i++){
            string str; cin>>str;
            if(str[1]==trump) trumpCard.pb({str[1],str[0]-'0'});
            else card.pb({str[1],str[0]-'0'});
        }
        sort(card.begin(),card.end());
        sort(trumpCard.begin(),trumpCard.end());
        // for(auto &it: card) cout<<it.first<<it.second<<" "; cout<<nn;
        // for(auto &it: trumpCard) cout<<it.first<<it.second<<" "; cout<<nn;
        int i=0;
        while(card.size() && i<card.size()-1){
            if(card[i].first!='0' && card[i].first==card[i+1].first){
                res.pb({{card[i].second,card[i].first},{card[i+1].second,card[i+1].first}});
                card[i].first='0';
                card[i+1].first='0';
            }
            i++;
        }
        i=0;
        while(trumpCard.size() && card.size() && i<card.size()){
            if(card[i].first!='0'){
                for(int j=0; j<trumpCard.size(); j++){
                    if(trumpCard[j].first!='0'){
                        res.pb({{card[i].second,card[i].first},{trumpCard[j].second,trumpCard[j].first}});
                        card[i].first='0';
                        trumpCard[j].first='0';
                        break;
                    }
                }
            }
            i++;
        }
        i=0;
        while(trumpCard.size() && i<trumpCard.size()-1){
            if(trumpCard[i].first!='0'){
                res.pb({{trumpCard[i].second,trumpCard[i].first},{trumpCard[i+1].second,trumpCard[i+1].first}});
                trumpCard[i].first='0';
                trumpCard[i+1].first='0';
            }
            i++;
        }
        // for(auto &it: card) cout<<it.first<<it.second<<" "; cout<<nn<<nn;
        if(res.size()!=n) cout<<"IMPOSSIBLE"<<nn;
        else
            for(auto &it: res){
                pair<int,char>p1,p2;
                p1=it.first; p2=it.second;
                cout<<p1.first<<p1.second<<" "<<p2.first<<p2.second<<nn;
            }
        // cout<<"------------------------"<<nn;
    }
    return 0;
}