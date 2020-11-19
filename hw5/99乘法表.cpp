#include <stdio.h>
int main()
{
	int i,j,n=0;
	for(i=1;i<=9;i++){
		for(j=1;j<=9;j++){	
		printf("%d*%d=%2d\t",i,j,i*j);
		n=n+1;
		if(n&&n%9==0){
			printf("\n");
		}
		}
	}
	return 0;
 } 
