#include<bits/stdc++.h>
using namespace std;
int factorizes[100];
int factsize=0;
vector<int> prime;
void sieve(int n){
    n++;
    vector <int> primes(n,0);
    primes[0]=1;primes[1]=1;
    for(int i = 2; i*i<=n;i++){
        if(primes[i]==0){
            for(int j = i*i; j<=n ;j+=i){
                primes[j]=1;
            }
        }
    }
    for(int i = 2; i<=n; i++){
        if(primes[i]==0){
            prime.push_back(i);
        }
    }
}
void primeFactorizes(int n){
    int sqrtN = sqrt(n);
    sieve(sqrtN);
    for(int i = 0; i<prime.size();i++){
        if(n%prime[i]==0){
            while(n%prime[i]==0){
                n/=prime[i];
                factorizes[factsize]=prime[i];
                factsize++;
            }
        }
    }
    if(n>1){
        factorizes[factsize]=n;
        factsize++;
    }
}
int main(){
    int n; cin>>n;
    primeFactorizes(n);
    for(int i = 0; i<factsize;i++){
        cout << factorizes[i]<< " ";
    }
    cout << "\n";
    return 0;
}