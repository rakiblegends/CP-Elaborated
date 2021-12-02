#include <bits/stdc++.h>
using namespace std;
vector <bool> primes(101,true);
void sieve(){
    primes[0]=false,primes[1]=false;
    for(int i=2;i*i<=100;i++){
        if(primes[i]==true){
            for(int j=i*i;j<=100;j+=i){
                primes[j]=false;
            }
        }
    }
}
int main(){
    
    return 0;
}