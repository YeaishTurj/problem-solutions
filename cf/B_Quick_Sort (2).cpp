#include<bits/stdc++.h>
using namespace std;
#define w(t) int t; cin>>t; while(t--)
#define nn "\n"
#define int long long
#define pb push_back
#define ld long double
int32_t main(){
    w(t){
        int n,k; cin>>n>>k;
        int ord=0;
        for(int i=0; i<n; i++){
            int x; cin>>x;
            if(x==ord+1) ord++;
        }
        cout<<(n-ord+k-1)/k<<nn;
    }
}