#include<stdio.h>
int main()
{
	int n,count;
	scanf("%d",&n); 
	while(n){
		n=n&(n-1);
		count++;
	}
	printf("%d",count);
	return 0;
 } 
