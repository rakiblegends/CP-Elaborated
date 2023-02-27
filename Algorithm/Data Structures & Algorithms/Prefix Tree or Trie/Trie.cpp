#include<bits/stdc++.h>
using namespace std;

struct node{
    bool endmark;
    node* next[26+1];
    node(){
        endmark = false;
        for(int i = 0; i<26; i++){
            next[i] = NULL;
        }
    }
}*root;

void insert(string s){
    node* cur = root;
    int len = s.size();
    for(int i = 0; i<len; i++){
        int id = s[i]-'a';
        if(cur->next[id]==NULL){
            cur->next[id] = new node();
        }
        cur = cur->next[id];
    }
    cur->endmark = true;
}

bool search(string s){
    node* cur = root;
    int len = s.size();
    for(int i = 0; i<len; i++){
        int id = s[i]-'a';
        if(cur->next[id]==NULL) return false;
        cur = cur->next[id];
    }
    return cur->endmark;
}

void del(node* cur)
{
    for (int i = 0; i < 26; i++)
        if (cur->next[i])
            del(cur->next[i]);
    delete (cur);
}

int main(){
    root = new node();
    while(true){
        cout << "1.Insert\n2.Search\n0.Exit\n";
        int op; cin>>op;
        if(op==1){
            cout << "Enter the string: ";
            string s; cin>>s;
            insert(s);
        }else if(op==2){
            cout << "Enter the string: ";
            string s; cin>>s;
            if(search(s)) cout << "Found\n";
            else cout << "Not Found\n";
        }else break;
    }
    del(root);
    return 0;
}