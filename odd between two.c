#include<stdio.h>
int main()
{
	int l,u,i,j;
	scanf("%d %d",&l,&u);
	for(i=l;i<=u;i++)
	{
		if(i%2!=0)
		{
			printf("%d\n",i);
		}
	}
	return 0;
}
