#include<bits/stdc++.h>
using namespace std;
int coun[10];
int fact(int i){
    int ans = 1;
    if(i==0) return 1;
    for(int j = i;j>=1;j--){
        ans*=j;
    }
    return ans;
}
int main(){
    string s[10];
    string temp;
    int i = 0;
    int ans;
    while(1){
        cin >> temp;
        if(temp=="0") break;
        s[i] = temp;
        i++;
    }
    for(int j=0;j<i;j++){
        for(int k=j+1;k<i;k++){
            if(s[j]==s[k]){
                coun[j]++;
                s[k] = "00";
            }
        }
    }
    int divided=1,an;
    for(int j=0;j<i;j++){
        if(coun[j]>0){
            divided*=fact(coun[j]+1);
        }
    }
    an = fact(i)/divided;
    cout << "1/" << an;
    return 0;
}
