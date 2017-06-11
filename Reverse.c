//
// Created by deepti on 2/6/17.
//
#include <stdio.h>
#include <string.h>

int reverse(int argc, char *argv[]) {
    if(argc < 2)
    {
        printf("Enter a string.");
        return 1;
    }
    printf("The reversed form of %s is:\n",argv[1]);

    char fml[30]="";
    for (int i=(strlen(argv[1])-1); i>= 0; i--) {
        fml[strlen(fml)] = argv[1][i];

    }
    printf("%s",fml);

}

