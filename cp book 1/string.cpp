#include <stdio.h>
#include<string.h>
void str_modify(char str[]){
    int flag = 0;
    int i,j,len;
    len = strlen(str);
    for(i=0;i<len;i++){
        if(str[i]>='a' && str[i]<='z'){
            if(flag == 0){
                flag = 1;
                str[i] = str[i] - 32;
                printf("%c",str[i]);
            }else{
                printf("%c",str[i]);
            }
        }else if((str[i]>='A' && str[i]<='Z') || (str[i]>='1' && str[i]<='9')){
            flag = 1;
            printf("%c",str[i]);
        }else{
            if(flag!=0){
                flag = 0;
                printf(" ");
            }
        }
    }
}
int main() 
{ 
    char str1[1000];
    gets(str1);
    str_modify(str1);
    return 0; 
}

