#include <stdio.h>
int main()
{
	int i=17;
    printf("i=%o\n",i);
	printf("i=%x\n",i);
	
	int s[32],k=0;
	scanf("%d",&i);
	while(i!=0){
    	s[k++]=i%2;
	    i/=2;
	}
	for(k--;k>=0;k--){
		printf("%d",s[k]);
	}
	return 0; 
 } 
