#include<stdio.h>

int main()
{
	int len1=5,len2=4;
	int n1[5]={4,6,8,9,9};
	int n2[4]={0,3,8,10};
	int n3[len1+len2];
	int i=0,j=0,k=0;
	while(i<len1 && j<len2)
	{
		if (n1[i]<n2[j])
			n3[k++]=n1[i++];
		else 
			n3[k++]=n2[j++];
	}
	while(i<len1)
	{
		n3[k]=n1[i];
		k++;
		i++;
	}
	while(j<len2)
	{
		n3[k]=n2[j];
		k++;  
		j++;                 }

	for(i=0;i<(len1+len2);i++)
		printf("%d ",n3[i]);
	return 0;
}

