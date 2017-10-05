#include<stdio.h>
int binary(int arr[],int len, int n) 
{
	int min=0;
	int max = n-1;

	while(min<=max) 
	{
		int mid = (min + max)/2;
		if (arr[mid] == n)
			return 1;
		if (arr[mid]<n)
			min = mid+1;
		if(arr[mid]>n)
			max=mid-1;

	}
	return 0;
}
int main()
{
	int array[]={0.1,2,4,7,8,13,19,100,212,323,4343};
	int n = 21;
	int len = sizeof(array)/sizeof(array[0]);
	int result = binary(array,len,n);
	if (result == 1)
		printf("Found\n");
	else 	
		printf("It ain't here, look elsewhere\n");
	return 0;
}

