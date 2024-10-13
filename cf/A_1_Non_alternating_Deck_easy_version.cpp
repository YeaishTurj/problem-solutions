#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int cardOfAlice=0, cardOfBob=0;
        int card=0, cardCnt=0;
        while(card<=n){
            if((cardCnt/2)&1){
                cardOfBob+=min(n-card,2*cardCnt+1);
            }else{
                cardOfAlice+=min(n-card,2*cardCnt+1);
            }
            card+=2*cardCnt+1;
            cardCnt+=2;
        }
        cout<<cardOfAlice<<" "<<cardOfBob<<endl;
    }
}