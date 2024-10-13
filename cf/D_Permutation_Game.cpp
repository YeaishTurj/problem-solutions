#include<bits/stdc++.h>
using namespace std;
#define w(t) int t; cin>>t; while(t--)
#define nn "\n"
#define int long long
#define pb push_back
#define ld long double 
int32_t main(){
    w(t){
        int n,k,b,s; cin>>n>>k>>b>>s;
        b--; s--;
        int p[n],a[n];
        for(int i=0; i<n; i++){
            cin>>p[i],p[i]--;
        }
        for(int i=0; i<n; i++) cin>>a[i];
        vector<int>bodya, sasha;
        int start=b;
        do{
            bodya.pb(a[start]);
            start=p[start];
        }while(start!=b);
        start=s;
        do{
            sasha.pb(a[start]);
            start=p[start];
        }while(start!=s);
        int score1=0, score2=0, total=0;
        for(int i=0; i<min(k,(long long)(bodya.size())); i++){
            total+=bodya[i];
            score1=max(score1,total+(k-i-1)*bodya[i]);
        }
        total=0;
        for(int i=0; i<min(k,(long long)(sasha.size())); i++){
            total+=sasha[i];
            score2=max(score2,total+(k-i-1)*sasha[i]);
        }
        // cout<<score1<<" "<<score2<<nn;
        if(score1>score2) cout<<"Bodya"<<nn;
        else if(score2>score1) cout<<"Sasha"<<nn;
        else cout<<"Draw"<<nn;
        // cout<<nn<<"----------"<<nn;
    }
}