#include <stdio.h>
#include<string.h>
char* removed(char *str,int p)
{
	if(str[0]=='\0')
		return "No";
	if(strlen(str)==1)
		return str;
	int n=strlen(str);
	int i,count=0,k=0,temp;
	for(i=1;i<n;i++)
	{
		if(str[i-1]!=str[i])
		{
			str[k]=str[i-1];
			k++;
		}
		else
		{	
			temp=i;
			while(str[i-1]==str[i])
			{
				count++;
				i++;
				if(count==p)
					break;
			}
			if(count<p)
				i=temp+1;
		}
	}
		str[k++]=str[i-1];
		str[k]='\0';
return str;
			



}



int main()
{
	char str[5000];
	int p;
	scanf("%s",str);
	scanf("%d",&p);
	printf("%s",removed(str,p));
	return 0;
}


