#include<iostream>
#include<set>
#include<utility>
#include<iterator>
using namespace std;
int main(){
    set <string> s;
    set <string> :: iterator it;
    pair<set<string>:: iterator , bool > p;
    string temp;
    int coun;
    while(cin >> temp){
        if(temp == "0") break;
        p = s.insert(temp);
        if(p.second == false) coun++;
    }
    cout << coun;
}