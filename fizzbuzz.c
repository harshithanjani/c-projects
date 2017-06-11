//
// Created by deepti on 2/6/17.
//
#include <stdio.h>

int fizz() {
    int i;
    for (i=1;i<=100;i++) {
        if(i%3==0) {
            printf("Fizz\t");
        }
        else if(i%5==0) {
            printf("Buzz\t");
        }
        else if(i%3==0 && i%5==0) {
            printf("FizzBuzz\t");
        }
        else {
            printf("%d\t",i);
        }
    }
}
