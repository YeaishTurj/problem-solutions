#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
#define Oset tree<ll, null_type, less<ll>, rb_tree_tag, tree_order_statistics_node_update>
#define fast_IO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define w(t) ll t; cin>>t; while(t--)
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
bool compare(pair<ll,ll>&a, pair<ll,ll>&b){
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
        ll n; cin>>n;
        ll ans=INT_MAX;
        for(ll one=0; one<=2; one++){
            for(ll three=0; three<=1; three++){
                for(ll six=0; six<=4; six++){
                    for(ll ten=0; ten<=2; ten++){
                        ll left=n-one-three*3-six*6-ten*10;
                        if(left%15==0 && left>=0) ans=min(ans,left/15+one+three+six+ten);
                        // cout<<left<<nn;
                    }
                }
            }
        }
        cout<<ans<<nn;
    }
    return 0;
}