#include <stdio.h>
#include <math.h>
int main()
{
	int n,i,j;
	printf("input(n>=3)");
	scanf("%d",&n);
	j=sqrt(n);
	for(i=2;i<=n;i++){ 
		if(n%i==0)
		break;} 
    if(i<j)
	printf("%d��������",n);
	else 
	printf("%d������",n);
	
	return 0;		
 } 
