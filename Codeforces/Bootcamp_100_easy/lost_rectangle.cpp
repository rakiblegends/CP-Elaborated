#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
        long long int num,temp=0,i;cin >> num;
        vector <long long int> factorizes;
        for(i=2;i*i<=num;i++){
            if(num%i==0){
                temp = (i+(num/i))*2;
                factorizes.push_back(temp);
            }
        }
        if(temp == 0) cout << (num+1)*2 << '\n';
        else{
            cout << *min_element(factorizes.begin(), factorizes.end())<< "\n";
        }
    return 0;
}
