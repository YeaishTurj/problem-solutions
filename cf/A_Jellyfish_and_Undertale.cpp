#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        long long a, b, n;
         cin>>a>>b>>n;
        //yeaish jahan turj
        long long array[n],
         timer=b-1;
        for(int i=0; i<n; i++){
            cin>>array[i];
            timer+=min(array[i]+1,a);
            timer--; // turj
        }
        timer++; //turj
        cout<<timer<<endl;
    }
}