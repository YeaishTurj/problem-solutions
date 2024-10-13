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
        int n,k; cin>>n>>k;
        deque<int>d(n);
        int total=0;
        for(auto &it: d){
            cin>>it;
            total+=it;
        }
        if(total<=k) cout<<n<<nn;
        else{
            int turn=1, cnt=0;
            while(k>0 && d.size()){
                if(turn){
                    int first=d.front(), last=d.back();
                    if(first<=last){
                        if(k>=2*first-1){
                            k-=2*first-1;
                            d.pop_front();
                            cnt++;
                            d.back()-=first-1;
                            turn^=1;
                        }else break;
                    }else{
                        if(k>=2*last){
                            k-=2*last;
                            d.pop_back();
                            cnt++;
                            d.front()-=last;
                        }else break;
                    }
                }else{
                    int first=d.front(), last=d.back();
                    if(last<=first){
                        if(k>=2*last-1){
                            k-=2*last-1;
                            d.pop_back();
                            cnt++;
                            d.front()-=last-1;
                            turn^=1;
                        }else break;
                    }else{
                        if(k>=2*first){
                            k-=2*first;
                            d.pop_front();
                            cnt++;
                            d.back()-=first;
                        }else break;
                    }
                }
            }
            cout<<cnt<<nn;
        }
        // cout<<"-----------"<<nn;
    }
    return 0;
}