#include<iostream>
#include<math.h>
using namespace std;
int isTprime(long long int n){
    if(n==4){
        return 1;
    }
    long long int sqrtN = sqrt(n);
    if((sqrtN*sqrtN)==n && (sqrtN%2)!=0){
        for(int i = 3; i*i<=sqrtN; i+=2){
            if(sqrtN%i==0){
                return 0;
            }
        }
        return 1;
    }else{
        return 0;
    }
}
int main(){
    long long int n;cin>>n;
    if(isTprime(n)){
        cout << "YES\n";
    }else{
        cout <<"NO\n";
    }
    return 0;
}
