#include<bits/stdc++.h>
using namespace std;
int count_oc = 0;
vector<int> createLps(string pattern){
    vector<int> lps(pattern.length());//lps vector declaring
    int indx = 0;
    for(int i = 1 ; i<pattern.length();){
        if(pattern[i]==pattern[indx]){
            i++;indx++;
            lps[i-1]=indx;
        }else{
            if(indx!=0){
                indx = lps[indx-1];
            }else{
                lps[i]=indx;
                i++;
            }
        }
    }
    return lps;
}
void kmp(string text, string pattern){
    vector <int> lps(pattern.length());
    lps = createLps(pattern);
    int i = 0,j=0;// i-->text and j--> pattern
    while(i<text.length()){
        if(text[i]==pattern[j]){
            i++; j++;
        }else{
            if(j!=0){
                j = lps[j-1];
            }else{
                i++;
            }
        }
        if(j==pattern.length()){
            count_oc++;
            //the index of found position in text is i-pattern.length()
            j = lps[j-1];
        }
    }
}

int main(){
    int t; cin>>t;
    for(int i =  1; i<=t; i++){
        count_oc = 0;
        string text,pattern; 
        cin>>text>>pattern;
        kmp(text,pattern);
        cout << "Case " << i << ": "<< count_oc << "\n";
    }
}
