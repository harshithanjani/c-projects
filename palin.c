//
// Created by deepti on 2/6/17.
//
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int palin(int argc,char *argv[])
{
    if (argc!= 2)
    {
        printf("Usage: ./%s string\n",argv[0]);
        return -1;
    }
    if (strlen(argv[1])==0 || strlen(argv[1])==1) {
        printf("It's a palindrome.");
    }
    int x=0;
    for(int i=strlen(argv[1])-1;i>=0;i--){
        if(tolower(argv[1][i])==tolower(argv[1][x])){
            x++;
        }
        else if(tolower(argv[1][i])!=tolower(argv[1][x])){
            printf("The entered string is not a palindrome");
            break;
        }
        if(x==strlen(argv[1])-1){
            printf("The entered string is a palindrome");
        }

        }


}