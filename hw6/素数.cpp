#include<stdio.h>
int is_prime(int n)
{
	int j;
	for(j=22;j<n;j++){
	   if(n%j==0)
	        return -1;
	   else
	        return 0;
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
