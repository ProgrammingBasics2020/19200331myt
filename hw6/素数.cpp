#include<stdio.h>
int is_prime(int n)
{
	int j;
	for(j=2;j<n;j++){
	   if(n%j==0)
	        return 0;
	   else
	        return -1;
	    }
} 
int main()
{
	int x,y;
	printf("input:");
	scanf("%d",&x);
	y=is_prime(x);
	if(y==0)
	  printf("%d不是素数",x);
	else
	  printf("%d是素数",x); 
 } 
