#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    string s;
    cin.ignore();
    while(t--){
        cin >> s;
        getline(cin,s);
        int count =1,flag =1;
        for(int i=0;i<s.length();i++){
            if(s[i]==' ' && flag!=0){
                count+=1;
                flag=0;
            }else if((s[i]>='0' && s[i]<'9') || s[i]=='-'){
                flag =1;
            }
        }
        cout<< count << endl;

    }
    return 0;
}