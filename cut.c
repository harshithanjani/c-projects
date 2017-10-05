#include<stdio.h>

int main()
{
	int n,c=1,i,j,k,l=0,m=0,g=0;
	scanf("%d",&n);
	int x[100],h[100];
	for(i=1;i<=n;i++)
	{ scanf("%d",&x[i]);}
	for(j=1;j<=n;j++)
	{ scanf("%d",&h[j]);}
	for(k=2;k<=n;k++)
	{
		if(m==0)
		{
			if((x[k]-h[k])>x[k-1])
			{	c++;
				printf("throwing it to the left\n ");
				l=1;
			}
			if(l!=1)
			{
				if((x[k]-h[k])>(x[k-1]+h[k-1]))
				{       c++;
					printf("throwing it to the left\n");
				}
			}
		}


		if(m==1){
			if((x[k]+h[k])<x[k+1])
			{ c++;
				printf("throwing it to the right\n");
				g=1;}
			if(g!=1)
			{
				if((x[k]+h[k])>(x[k+1]-h[k+1]))
				{c++;
					printf("throwing it to the right\n");}
			}}
	}
	printf("%d",c);
	return 0;
}


