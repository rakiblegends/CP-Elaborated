#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int count8=0;
    if(n<11) cout << 0;
    else{
        for(int i=0;s[i]!='\0';i++){
            if(s[i]=='8') count8++;
        }
        if(n/11>=count8) cout << count8<< endl;
        else cout << n/11 << endl;
    }
}