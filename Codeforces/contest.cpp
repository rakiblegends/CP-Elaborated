#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>> arr[i];
    }
    int count = 0,max =0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if((arr[j]-arr[i])>arr[i]){
                if(max>=count){
                    max = count;
                }
                count = 0;
                break;
            }else{
                count++;
            }
        }
    }
    cout << max << endl;
    return 0 ;
}