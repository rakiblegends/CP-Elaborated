#include<bits/stdc++.h>
#define M 1000010
using namespace std;
bitset <M> primes ;
void sieve(){
    primes[0]=true,primes[1]=true;
    for(long long int i=2;i*i<=M;i++){
        if(primes[i]==false){
            for(long long int j=i*i;j<=M;j+=i){
                primes[j]=true;
            }
        }
    }
}
int f(int n);
int main(){
    sieve();
    long long int n,sum=0;cin>>n;
    cout << f(n);
    cout << log(25)/log(5);
}
int f(int n){
    if(n==1){
        return 1;
    }else if(n==2){
        return 2;
    }else{
        int divisors = 1;
        for(long long int i=2;i*i<=n; i++){
                if(primes[])
            }
        }
        return divisors;
    }
}