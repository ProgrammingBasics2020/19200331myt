#include<stdio.h>
int fac_bit_count(int n)
{
	int i,sum=1,count=0;
	for(i=1;i<=n;i++){
		sum*=i;
	}
	while(sum!=0){
		count++;
		sum/=10;
    }
    return count;
}
int main()
{
	int n,s;
	printf("input:");
	scanf("%d",&n);
	s=fac_bit_count(n);
	printf("%d",s);
	return 0;
}
