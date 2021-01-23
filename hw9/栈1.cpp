#include<stdio.h>
#include<stdlib.h>
typedef struct node          //节点 
{
	int data;
	struct node *next;
}Node;

typedef struct stack         //栈 
{
	Node *top;
	int count;
 } Link_Stack;

Link_Stack *Creat_stack()      //创建栈 
{
	Link_Stack *s;
	s=(Link_Stack*)malloc(sizeof(Link_Stack));
	if(s=NULL){
	    printf("错误，即将退出\n");
	    exit(10);
	}
	else{
	    printf("成功\n");}
	s->count=0;
    s->top=NULL;
    return s;
}

Link_Stack *Push_stack(Link_Stack *s, int a)   //入栈 
{
	if(s==NULL)
	    return NULL;
	Node *temp;
	temp=(Node*)malloc(sizeof(temp));
	temp->data=a;
	temp->next=s->top;
	s->top=temp;
	s->count++;
	return s;
}

Link_Stack *Pop_stack(Link_Stack *s)	  //出栈 
{
	Node *temp;
	temp=s->top;
	if(s->top==NULL){
		printf("栈为空");
		return s;
	}
	else{
		printf("\npop success");
		s->top=s->top->next;
		free(temp);
		s->count--;
		return s;
	}
}
int main()
{
	int i;
    Link_Stack *s;
	s=Creat_stack();
	int n=5;
	int input[6]={10,20,30,40,50,60};
	for(i=0;i<=n;i++){
		Push_stack(s,input[i]);
	} 
	Pop_stack(s);
    return 0;
}
