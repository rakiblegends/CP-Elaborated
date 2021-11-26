#include <bits/stdc++.h>
using namespace std;
const int n=  100;
void sieve(int n){
    vec[0]= 0;
    vec[1]=0;
    for(int i =2; i<=sqrt(n);i++){
        if(vec[i]==1){
            for(int j = i * i; i*j<=n;j+=i){
                vec[j] = 0;
            }
        }
    }
}
int main(){
    // for(int i=0; i<40;i++){
    //     ara[i]='0';
    // }
    int ara [10];
    // memset(ara, false, sizeof(ara));
    ara[0] = true;ara[1]=true;
    int i,m;
    for(i=2;i<=sqrt(n);i++){
        if(ara[i]==false){
            for(int j=i*i;j<=n;j+=i){
                ara[j] = true;
            }
        }
    }
    for(i=2;i<=n;i++){
        if(ara[i]==false){
            cout<< i << " ";
        }
    }
    return 0;
}