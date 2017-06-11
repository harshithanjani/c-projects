//
// Created by deepti on 2/6/17.
//
#include <stdio.h>

int main(void){

    int wordCount = 0;
    FILE *rFile = fopen("", "r");
    if(rFile==NULL)
    {
        printf("File not found.");
    }
    wordCount += countWords(rFile);
    printf("%d", wordCount);
    return 0;
}

int countWords(FILE *f){
    int count = 0;
    char ch;
    while ((ch = fgetc(f)) != EOF){
        if (ch == '\n' || ch==' ')
            count++;
    }
    return count;
}