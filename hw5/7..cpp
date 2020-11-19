#include <stdio.h>
#include <math.h>
int main()
{
	int a,b,c;
	int i,j;
	scanf("%d %d %d",&a,&b,&c);
	i=a^b;
	j=i%c;
	printf("%d",j);
	return 0;
}
