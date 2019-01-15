/*
    TASK: Start here
    LANG: CPP
    AUTHOR: Parnikkapore
    VENV: posn2
*/
#include<bits/stdc++.h>
using namespace std;

#define ALWHITE "G"
#define ALCYAN "F"

char word[100], cur, rowHdr[5]=ALCYAN;
int col, row=1, subpage=1;

char* strccat(char* str, char chr){
    char cstr[2] = {chr, '\0'};
    return strcat(str, cstr);
}

void newRow(){
    if(++row <= 24){
        printf("\nOL,%d,%s", row, rowHdr);
    }else{
        subpage++; row=1;
        printf("\nPN,1000%d\nPS,8000\nSC,000%d\nOL,1,%s", subpage, subpage, rowHdr);
    }
    col=0;
}

int main()
{
    printf("PN,10001\nPS,8000\nSC,0001\nOL,1,F");
    do{
        cur = char(getchar());
        if(cur==' ' || cur=='\n'){
            if(col+strlen(word)+(cur==' ') > 39){
                newRow();
            }
            if(word[0]!='\0' || cur==' '){
                printf("%s ", word);
                col += strlen(word)+1;
            }else{
                strcpy(rowHdr, ALWHITE); printf("%s", word); newRow();
            }
            word[0] = '\0'; //Clear it
        }else{
            strccat(word, cur);
        }
    }while(cur!=EOF);
    return 0;
}
