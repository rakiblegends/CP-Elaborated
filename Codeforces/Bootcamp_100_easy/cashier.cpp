 #include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n,l,a,temp=0,max=0,ti,li,sum=0;
    cin>> n>> l>> a;
    for(int i=0;i<n;i++){
        cin >> ti >> li;
        max = max + (ti-temp)/a;
        sum = ti + li;
        temp = ti+li;
    }
    max += (l - sum) / a;
    cout << max;
    return 0;
    
}