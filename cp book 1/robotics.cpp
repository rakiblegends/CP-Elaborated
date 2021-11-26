#include<bits/stdc++.h>
using namespace std;
int main()
{
    int board[9][9];
    int x,y;
    cout << "Enter initial point : ";
    cin>>x>>y;
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            board[i][j]=1;
        }
    }
    int n,a,b;
    cout<< "Enter how many blocked cells are there: ";
    cin>> n;
    for (int i=0;i<n;i++){
        cout << "Enter the blocked cells : ";
        cin >> a >> b;
        board[a][b] = 0;
    }
    char c;
    while(1){
        cin >> c;
        if(c=='S'){
            break;
        }
        if(c=='U' && x!=0 && board[x-1][y]==1){
            x--;
        }else if(c=='D' && x!=8 && board[x+1][y]==1){
            x++;
        }
        else if(c=='R' && y!=8 && board[x][y+1]==1){
            y++;
        }
        else if(c=='L' && y!=0 && board[x][y-1]==1){
            y--;
        }
    }
    cout << x << "\t" << y;
    return 0;
}