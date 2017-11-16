#include<stdio.h>
int array[3000];
int DP[1000][1000];
int N,k;
int max(int a, int b);
int func(int curr, int limit) 	
{
if(limit>=k-1)
	return func(curr+1,0);
if(curr>=N)
	return 0;
if(DP[curr][limit]==0)
{
	DP[curr][limit]=max(func(curr+1,limit+1)+array[curr],func(curr+1,0));
	
}
return DP[curr][limit];
}

int main()
{
	scanf("%d %d",&N,&k);
	int i;
	for(i=0;i<N;i++)
		scanf("%d",&array[i]);
	printf("%d\n",func(0,0));
	return 0;	
}

int max(int a,int b)
{
if(a>b)
	return a;
else
	return b;
}
