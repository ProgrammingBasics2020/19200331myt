#include<stdio.h>
int gy(int x,int y)
{
	int m,t;
	while(y!=0){
		if(x<y){
			m=x;
			x=y;
			y=m;
		}
	t=x%y;
	x=y;
	y=t;
    }
    return x;
}
int gb(int x,int y)  //两数相乘除以最大公约数 
{
	int t,m,n;
	n=x*y;
	t=gy(x,y);
	m=n/t;
	return m;
}
int main()
{
	int m,n,i,j;
	scanf("%d%d",&m,&n);
	i=gy(m,n);
	j=gb(m,n);
	printf("最大公约数=%d\n最小公倍数=%d",i,j);
	return 0;
 } 
