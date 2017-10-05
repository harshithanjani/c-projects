//
// Created by deepti on 2/6/17.
//
#include <stdio.h>
#include <stdlib.h>

//int fibonacci(int n);

int fibo(int argc, char *argv[]) {
    if (argc!= 2)
    {
        printf("Usage: ./%s integer\n",argv[0]);
        return -1;
    }
    int num = atoi(argv[1]);
    if (num>=0) {
        printf("The Fibonacci Sequence till %d is: \n",num);
        for(int i=0;i<num;i++) {
            printf("%d \t",fibonacci(i));
        }
    }
    else {
        printf("Entered number must a positive integer.");
    }


}
int fibonacci(int n) {
    if (n == 0) {
        return 0;
    }
    else if (n == 1) {
        return 1;
    }
    else {
        return fibonacci(n-2)+fibonacci(n-1);
    }
}
