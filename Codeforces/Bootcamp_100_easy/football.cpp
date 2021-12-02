#include<iostream>
using namespace std;

int main()
{
    string team;
    getline(cin,team);
    int cur_count=1,max_count=0;
    for(int i=1;i<team.length();i++){
        if(team[i]==team[i-1]){
            cur_count++;
        }else{
            if(cur_count>=max_count) max_count = cur_count;
            cur_count = 1;
        }
    }
    if(cur_count>=max_count) max_count = cur_count;
    if(max_count>=7) cout << "YES";
    else cout << "NO";
    return 0;
    
}
