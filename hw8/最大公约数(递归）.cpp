#include <stdio.h>
int gcd(int m,int n)
{
	if(n==0) return m;
	return gcd(n,m%n);
}
int main()
{
	int x,y,yueshu;
	printf("ÇëÊäÈë£º");
	scanf("%d%d",&x,&y); 
	if(x>y)
	    yueshu=gcd(x,y);
	else
	    yueshu=gcd(y,x);
	printf("%d",yueshu);
	return 0;
}
