#include<stdio.h>
#include<stdlib.h> 
int main()
{
	int n;
	printf("input:");
	scanf("%d",&n);
	if(n&(n-1))
	    printf("-1");
	else
	    printf("0");
	return 0;
 } 
