#include<iostream>
#include<string>
#include<vector>
#include<utility>
#include<iterator>
using namespace std;

int main(){
    vector <pair<string , int >> v;
    vector <pair<string , int >> :: iterator it;
    v.push_back(make_pair("rakib",21));
    v.push_back(make_pair("mahedi",22));
    for(it = v.begin();it!= v.end();it++){
        cout << it->first << " " << it->second << "\n";
     }
    return 0;
}