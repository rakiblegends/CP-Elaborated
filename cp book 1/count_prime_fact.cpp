#include <bits/stdc++.h>
using namespace std;
bool ara[101]; // boolean aray initialize false which indicates prime
// int log(int n,int base){
//     int log=0;
//     while(n>=base){
//         log+=1;
//         n/=base;
//     }
//     return log;
// }
void sieve(bool ara[],int n){ // genrating prime number using sieve
    n++;
    ara[0]=true;// 0 and 1 is not prime
    ara[1]=true;
    for(int i=2;i<=sqrt(n);i++){
        if(ara[i]==false){
            for(int j = i*i;j<=n;j+=i){
                ara[j] = true;
            }
        }
    }
}

int main() 
{
   vector <int> prime;//prime number here
   vector <int> :: iterator it;
   vector <int> count(100,0);//counting which prime num how many times
   vector <int> :: iterator it1;
   sieve(ara,100);
   for(int i = 2;i<=100;i++){
       if(ara[i]==false){
           prime.push_back(i);
       }
   }
   int n,temp;
   cin>>n;//input the number
   for(int i=n;i>=2;i--){
       temp = i;
       for(int j=2;j<=i;j++){
           if(ara[temp]==false){
               count[temp]+=1;
               break;
           }else{
              while(temp){
                  if(temp%j==0){
                      count[j]+=1;
                      temp/=j;
                  }else{
                      break;
                  }
              }
           }
       }
   }
   //Alternative short solution
//    for(int i = 2;i<=n;i++){
//         if(ara[i]==false){
//             for(int j=1;j<=log(n,i);j++){
//                 count[i]+= (n/pow(i,j));
//             }
//         }
//     }
   for(int i = 2;i<=n;i++){
       if(count[i]!=0){
           cout << "(" << i << "," << count[i] << ")"<< "\t";
       }
   }
   return 0;
}

