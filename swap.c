//
// Created by deepti on 2/6/17.
//
#include <stdio.h>

int sort(int argc,char *argv[])
{
    if (argc!= 2)
    {
        printf("Usage: ./%s integer array\n",argv[0]);
        return -1;
    }
    int index = 0;
    printf("%zu",(sizeof(argv[1])/sizeof(int)) + 1);
    while (index<(sizeof(argv[1])/sizeof(int))) {
        int minIndex = miniIndex(argv[1],index);
        argv[1] = swap(argv[1], index, minIndex);
        index = index + 1;
    }
    for (int i=0; i<(sizeof(argv[1])/sizeof(int)); i++) {
        printf("The sorted array is %d\t",argv[1][i]);
    }

}
int miniIndex(int array[], int index) {
    int min = array[index];
    int minIndex = index;
    while (index<sizeof(array)/sizeof(int)) {
        if (array[index]<min) {
            min = array[index];
            minIndex = index;
        }
        index = index +1;
    }
    return minIndex;
}

int swap(int array[], int index1, int index2) {
    int a = array[index1];
    array[index1] = array[index2];
    array[index2] = a;
    return array;
}