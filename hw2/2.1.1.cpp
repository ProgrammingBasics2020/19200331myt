#include <stdio.h>
#define N 2
#define M N+3
int main()
{
	int a=0256,b=256,c=0x256;
	printf("%d,%d,%d\n",a,b,c);
	printf("%d\n",M*4);
	return 0;
}
