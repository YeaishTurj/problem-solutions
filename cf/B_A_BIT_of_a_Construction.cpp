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
        if(n==1) cout<<k<<nn;
        else{
            int carry=0;
            vector<int>first(64,0),second(64,0);
            int num1=0,num2=0,flag=0;
            for(int i=0; i<64; i++){
                if(!carry && k&(1<<i)){
                    first[i]=1;
                }else if(!carry && !(k&(1<<i))){
                    first[i]=1;
                    second[i]=1;
                    carry=1;
                }else if(carry && !(k&(1<<i))){
                    first[i]=1;
                }else if(carry && k&(1<<i)){
                    first[i]=1;
                    second[i]=1;
                    carry=1;
                }
                num1+=(1LL<<i)*first[i];
                num2+=(1LL<<i)*second[i];
                if(num1+num2==k){
                    flag++;
                    break;
                }else if(num1+num2>k) break;

            }
            if(flag){
                cout<<num1<<" "<<num2<<" ";
                for(int i=0; i<n-2; i++) cout<<0<<" "; cout<<nn;

            }else cout<<-1<<nn;
        }
        // cout<<"-----------"<<nn;
    }
    return 0;
}