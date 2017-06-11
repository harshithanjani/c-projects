#include <stdio.h>
#define MAX 18
//int factorial(int n);

int edigit() {
    int n;
    printf("Enter number of digits:");
    scanf("%d",&n);
    int maximum;
    if (n<1)
    {
        printf("Digits should be greater than or equal to 1");
        return -1;
    }
    else if(n>MAX)
    {
        maximum = MAX;
    }
    else if(n<5)
    {
        maximum = 5;
    }
    else {
        maximum = n;
    }

    int i;
    double e = 1.0;
    for (i=1;i<=maximum;i++) {
        e = e + 1.0/factorial(i);
    }
    printf("e = %f \n",e);
    return 0;
}



int factorial(int n)
{
    int i;
    int val = 1;
    for (i=1;i<=n;i++) {
        val = val*i;
    }
    return val;
}
//
// Created by deepti on 2/6/17.
//

