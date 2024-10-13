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
        ll n, s; cin>>n>>s;
        ll a[n], sum=0;
        vector<int>one, revOne;
        for(int i=0; i<n; i++){
            cin>>a[i];
            if(a[i]) one.pb(i), revOne.pb(n-i-1), sum++;;
        }
        reverse(revOne.begin(), revOne.end());
        if(sum<s) cout<<-1<<nn;
        else if(sum==s) cout<<0<<nn;
        else{
            // for(auto &it: a) cout<<it<<" "; cout<<nn;
            // for(auto &it: one) cout<<it<<" "; cout<<nn;
            // for(auto &it: revOne) cout<<it<<" "; cout<<nn;
            ll cnt=0, i=0, j=n-1;
            vector<int>prefix, suffix;
            while(sum!=s){
                if(a[i]^a[j]){
                    if(a[i]){
                        prefix.pb(i); sum--; i++;
                        // cout<<i<<" "<<j<<nn; 
                        // cout<<"not equal and one"<<nn;
                    }else{
                        suffix.pb(j); sum--; j--;
                        // cout<<i<<" "<<j<<nn; 
                        // cout<<"not equal and zero"<<nn;
                    }
                }else{
                    if(a[i]){
                        int nearestOneFromBeginning=upper_bound(one.begin(),one.end(),i)-one.begin();
                        int nearestOneFromEnding=upper_bound(revOne.begin(),revOne.end(),n-j-1)-revOne.begin();
                        int nextOne=one[nearestOneFromBeginning], prevOne=n-revOne[nearestOneFromEnding]-1;
                        // cout<<i<<" "<<j<<nn; 
                        // cout<<nextOne<<" "<<prevOne<<nn; 
                        if(abs(nextOne-i)<abs(prevOne-j)){
                            prefix.pb(i); sum--; i++;
                            // cout<<"equal and one and first part"<<nn;
                        }else{
                            suffix.pb(j); sum--; j--;
                            // cout<<"equal and one and last part"<<nn;
                        }
                    }else{
                        int nearestOneFromBeginning=upper_bound(one.begin(),one.end(),i)-one.begin();
                        int nearestOneFromEnding=upper_bound(revOne.begin(),revOne.end(),n-j-1)-revOne.begin();
                        int nextOne=one[nearestOneFromBeginning], prevOne=n-revOne[nearestOneFromEnding]-1;
                        // cout<<i<<" "<<j<<nn; 
                        // cout<<nextOne<<" "<<prevOne<<nn;
                        if(abs(nextOne-i)<abs(prevOne-j)){
                            i=nextOne; prefix.pb(i); sum--; i++;
                        // cout<<"equal and zero and first part"<<nn;
                        }else{
                            j=prevOne; suffix.pb(j); sum--; j--;
                        // cout<<"equal and zero and last part"<<nn;
                        }
                    }
                }
                if(i>=n || j<0 || sum==s) break;
            }
            // for(auto &it: prefix) cout<<it<<" "; cout<<nn;
            // for(auto &it: suffix) cout<<it<<" "; cout<<nn;
            if(prefix.size()) cnt+=prefix[prefix.size()-1]+1;
            if(suffix.size()) cnt+=n-suffix[suffix.size()-1];
            cout<<cnt<<nn;
            // cout<<nextOne<<" "<<prevOne<<nn;
        }
        // cout<<"---------------"<<nn;
    }
    return 0;
}