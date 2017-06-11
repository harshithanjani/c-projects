//
// Created by deepti on 2/6/17.
//
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int vowel(int argc,char *argv[]) {
    if (argc!= 2)
        {
            printf("Usage: ./%s integer\n",argv[0]);
            return -1;
        }
    int total = 0, a=0, e=0, i=0, o=0, u=0;
    for (int i=0; i<strlen(argv[1]); i++) {
        char s= tolower(argv[1][i]);
        switch(s) {
            case 'a':
                a++;
                break;
            case 'e':
                e++;
                break;
            case 'i':
                i++;
                break;
            case 'o':
                o++;
                break;
            case 'u':
                u++;
                break;
        }
    }
    total = a+e+i+o+u;
    printf("The total number of vowels are %d.\nThe total no of 'a' = %d.\nThe total no of 'e' = %d.\nThe total no of 'i' = %d.\nThe total no of 'o' = %d.\nThe total no of 'u' = %d.\n",total,a,e,i,o,u);

}

