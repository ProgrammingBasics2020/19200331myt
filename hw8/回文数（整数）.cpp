#include<stdio.h>
int main()
{
	int i,n,origin,k=0;
	printf("input:");
	scanf("%d",&n);
	origin=n;
	while(n!=0){
		i=n%10;
		k=k*10+i;
	    n=n/10;	
	}
	if(origin==k)
	    printf("0");
	else
	    printf("-1");
	return 0;
 } 
