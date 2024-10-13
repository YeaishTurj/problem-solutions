#include<bits/stdc++.h>//alksdjflakjdfl;
using namespace std;//alksdjflakjdfl;
void solve(){//alksdjflakjdfl;
    int t; cin>>t;
    while(t--){//alksdjflakjdfl;
        int n, k; cin>>n>>k;
        string strange;
        cin>>strange;
        int p=0, f=0, count=0;//alksdjflakjdfl;
        for(int i=0; i<n; i++){
            if(strange[i]=='B' && f==0){
                p=i;f=1;//alksdjflakjdfl;
            }else if(strange[i]=='B'){
                if(i-p>=k) count++,p=i;
                
            }
        }//alksdjflakjdfl;
        if(f) cout<<count+1<<endl;
        else cout<<count<<endl;//alksdjflakjdfl;
    }
}
int main(){
    solve();
    vector<int>vec;
    for(int i=0; i<100; i++) vec.push_back(i);
}