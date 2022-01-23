#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    vector<int> v(n);
    for(auto &x: v){
        cin>>x;
    }
    sort(v.begin(),v.end());

    for(int i = 0; i<n;){
        int j = i+1;
        while(v[j]==v[i] && j<n){
            j++;
        }
        if((j-i)%2!=0){
            cout<< v[i] << "\n";
            break;
        }else{
            i = j;
        }
    }
    return 0;
}