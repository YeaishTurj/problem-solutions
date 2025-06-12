// a[n]
// beauty of x = set bit of x
// beauty of array = summation of beauty(a[i])
// one oper = a[i]++
// max beauty(a) after max k oper

// 1  -> 10000  -> 1 ->--0

// 2  -> 01000 -> 1 ->--0
// 3  -> 11000 -> 2 ->--1

// 4  -> 00100 -> 1 ->--0
// 5  -> 10100 -> 2 ->--1
// 6  -> 01100 -> 2
// 7  -> 11100 -> 3 ->--3

// 8  -> 00010 -> 1 ->--0
// 9  -> 10010 -> 2 ->--1
// 10 -> 01010 -> 2
// 11 -> 11010 -> 3 ->--3
// 12 -> 00110 -> 2
// 13 -> 10110 -> 3
// 14 -> 01110 -> 3
// 15 -> 11110 -> 4 ->--7

// 16 -> 00001 -> 1 ->--0
// 17 -> 10001 -> 2 ->--1
// 18 -> 01001 -> 2 
// 19 -> 11001 -> 3 ->--3
// 20 -> 00101 -> 2 
// 21 -> 10101 -> 3
// 22 -> 01101 -> 3
// 23 -> 11101 -> 4 ->--7
// 24 -> 00011 -> 2 
// 25 -> 10011 -> 3
// 26 -> 01011 -> 3
// 27 -> 11011 -> 4
// 28 -> 00111 -> 3
// 29 -> 10111 -> 4
// 30 -> 01111 -> 4
// 31 -> 11111 -> 5 ->--15

// 32 -> 000001 -> 1





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
int gcd(int a,int b){
    if(b==0) return a;
    return gcd(b,a%b);
}
bool compare(pair<int,int>&a, pair<int,int>&b){
    if(a.first!=b.first){
        if(a.first<b.first) return false;
    }else{
        if(a.second>b.second) return false;
    }
    return true;
}
int val(vector<int>&v){
    int res=0;
    for(int i=0; i<64; i++){
        res+=v[i]*(1LL<<i);
    }
    return res;
}
void solve(){
    int n,k; cin>>n>>k;
    vector<vector<int>>a;
    for(int i=0; i<n; i++){
        int x; cin>>x;
        vector<int>temp;
        for(int i=0; i<64; i++){
            temp.pb(x&(1LL<<i));
        }
        a.pb(temp);
    }
    int ans=0;
    sort(a.begin(),a.end());
    // for(auto &it: a) cout<<val(it)<<" "; cout<<nn;
    int last=0;
    for(int i=0; i<64; i++){
        for(auto &it: a){
            // cout<<it[i]<<" ";
            if(it[i]) ans++;
            else{
                int prev=val(it);
                it[i]=1LL;
                int curr=val(it);
                // cout<<prev<<" "<<curr<<" ,";
                if(k>0){
                    if(curr>prev && (curr-prev)<=k){
                        last=(curr-prev);
                        k-=(curr-prev);
                        ans++;
                    }else{
                        it[i]=0LL;
                    }
                }
            }

        }
    }
    // cout<<last<<" "<<k<<nn;
    cout<<ans<<nn;
}
int32_t main(){
    fast_IO
    int tt=1;
    cin>>tt;
    while(tt--){
        solve();
        // cout<<nn<<"-----------"<<nn;
    }
    return 0;
}

// 0
// 000
// 001
// 010
// 100
// 111