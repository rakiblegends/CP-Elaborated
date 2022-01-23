#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    vector<int> freq(n+1);
    int temp;
    for(int i = 0; i<n-1; i++){
        cin>> temp;
        freq[temp] = 1;
    }
    for(int i = 1; i<n; i++){
        if(!freq[i]) cout << i << "\n";
    }
    return 0;
}