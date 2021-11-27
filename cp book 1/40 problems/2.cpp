#include<bits/stdc++.h>
using namespace std;
vector <bool> primes(100,true);

int main()
{
    int t;
    cin>> t;
    while(t--){
        vector <int> arr;
        vector <int> :: iterator it;
        float temp,n,sum=0.00;
        cin >> n;
        for(int i=0;i<n;i++){
            cin>> temp;
            arr.push_back(temp);
        }
        for(it = arr.begin();it!=arr.end();it++){
            sum+=*it;
        }
        float avg = sum/n;
        // printf("%.2f\n",avg);
        cout <<fixed << setprecision(2) << avg << endl;
    }
    return 0;
}