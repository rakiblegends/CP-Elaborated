#include<bits/stdc++.h>
#define N 10
using namespace std;

int main(){
    int count[N];
    for(int i=0;i<N;i++){
        count[i] =0;
    }
    string s[10];
    char temp[20];
    int i=0;
    while(cin>> temp){
        s[i] = temp;
        i++;
    }
    for(int j=0;j<i;j++){
        for(int k=j+1;k<i;k++){
            if(s[j]==s[k] and s[j]!="0"){
                count[j]+=1;
                s[k]="0";
            }
        }
    }
    for(int j=0;j<10;j++){
        if(count[j]>1){
            cout << s[j] << " = " << count[j] << endl;
        }
    }
    return 0;
}