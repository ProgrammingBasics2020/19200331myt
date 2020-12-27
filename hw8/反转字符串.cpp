#include<stdio.h>
#include<string.h>
int fanzhuan(char *p,char *q)
{
	char tmp;
	if(p==NULL||q==NULL)
	    return -1;
	while(p!=q&&p<q){
		tmp=*p;
		*p=*q;
		*q=tmp;
		p++;
		q--;
	}
}
int main()
{
	char str[]="it is a cat";
	char *p=str,*q=str;
	char *pstr_end;
    pstr_end=str+strlen(str)-1;
	fanzhuan(p,pstr_end);      //全部反转1次
	
	for(;q!=pstr_end;q++){
		if(q!=" ")
		    continue;
		else{
		    q=q-1;
		    fanzhuan(p,q);
		    q=q+2;
		    p=q;
		}
	} 
	
	if(p=pstr_end)
	    fanzhuan(p,q);
	printf("%s",str);
	return 0;
 } 
