#include<bits/stdc++.h>
using namespace std;
int main(){
    string x,y,z; cin>>x>>y;
    int flag=1;
    for(int i=0; i<x.size(); i++){
        if(y[i]>x[i]) flag=0;
    }
    if(flag) cout<<y;
    else cout<<-1;
}