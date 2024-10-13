#include<bits/stdc++.h>
using namespace std;
#define fast_IO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define w(t) int t; cin>>t; while(t--)
#define nn "\n"
#define ll long long
#define pb push_back
#define ld long double
vector<bool>v(1e5+1,1);
void solve(){
    w(t){
        ll n; cin>>n;
        string str; cin>>str;
        int flag=0;
        set<int>s;
        for(int i=1; i<=sqrt(n); i++){
            if(n%i==0) s.insert(i), s.insert(n/i);
        }
        // for(auto &it: s) cout<<it<<" "; cout<<nn;
        for(auto &it: s){
            if(it==n) break;
            string k1,k2;
            for(int i=0; i<it; i++){
                k1.pb(str[i]);
                k2.pb(str[i+it]);
            }
            // cout<<k1<<" "<<k2<<nn;
            int x=n/it;
            string s1,s2;
            for(int i=0; i<x; i++){
                s1.append(k1);
                s2.append(k2);
            }
            // cout<<s1<<" "<<s2<<nn;
            if(k1==k2){
                int cnt=0;
                for(int i=0; i<n; i++){
                    if(str[i]!=s1[i]) cnt++;
                }
                if(cnt<=1){
                    flag++;
                    cout<<it<<nn;
                    break;
                }
            }else{
                int cnt=0;
                for(int i=0; i<n; i++){
                    if(str[i]!=s1[i]) cnt++;
                }
                if(cnt<=1){
                    flag++;
                    cout<<it<<nn;
                    break;
                }
                cnt=0;
                for(int i=0; i<n; i++){
                    if(str[i]!=s2[i]) cnt++;
                }
                if(cnt<=1){
                    flag++;
                    cout<<it<<nn;
                    break;
                }
            }
        }
    if(!flag) cout<<n<<nn;
    // cout<<"---------------"<<nn;
    }
}
int main(){
    fast_IO
    solve();
    return 0;
}
