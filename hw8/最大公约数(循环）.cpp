#include <stdio.h>
int swap(int x,int y)
 {        
    int temp;          
    temp=x;
    x=y;
    y=temp;
   }
   
int main()
{
	int m,n,t,r;
	printf("input:");
	scanf("%d%d",&m,&n);
	if(m<n)
	swap(m,n);
	while(n!=0)
	{
		r=m%n;
		m=n;
		n=r;
	}
	printf("%d",m);
    return 0;
}
