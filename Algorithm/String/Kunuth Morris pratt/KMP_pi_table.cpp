// Add some code
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    for(int tt =1; tt<=t; tt++){
        string s,p;
        cin>>s>>p;
        int cnt=0;
        //Constructing the pi table.
        vector<int> pi(p.size());
        int now = -1;
        pi[0] = -1;
        for(int i = 1; i<p.size();i++){
            while(now!=-1 && p[now+1]!=p[i]){
                now = pi[now];
            }
            if(p[now+1]==p[i]) now++;
            pi[i] = now;
        }
        
        // Now KMP

        now = -1;
        for(int i = 0; i<s.size(); i++){
            while(now!=-1 && p[now+1]!=s[i]){
                now = pi[now];
            }
            if(p[now+1]==s[i]) now++;
            if(now==p.size()-1) cnt++;
        }

        cout << "Case " << tt << ": " << cnt <<"\n";

    }
    return 0;
}
