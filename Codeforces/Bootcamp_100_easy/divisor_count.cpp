#include<bits/stdc++.h>
using namespace std;
int divisorCount(int n){
    if(n==1 || n==2) return n;
    int divisors = 1;
    if(n%2==0){
        int cnt = 1;
        while(n%2==0){
            n/=2;
            cnt++;
        }
        divisors*=cnt;
    }
    if(n>1){
        for(int i = 3; i<=sqrt(n);i+=2){
            if(n%i==0){
                int cnt = 1;
                while(n%i==0){
                    n/=i;
                    cnt++;
                }
                divisors*= cnt;
            }
        }
    }
    if(n>1){
        divisors+=divisors;
    }
    return divisors;
}

int main(){
    int n,sum = 0; cin >> n;
    for(int i = 1; i<=n; i++){
        sum+=divisorCount(i);
    }
    cout << sum << "\n";
    return 0;
}