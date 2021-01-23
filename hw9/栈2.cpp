#include <iostream>
#include<stdio.h>
#include<stdlib.h> 
typedef struct no
{
    int data;
    struct no *pnext;              
    struct no *ppre;
}node;

typedef struct 
{
    node head;	          
    node tail;
}lht;

void link_show(const lht *p)
{
    node *pn=(node*)p->head.pnext;
 	while(pn!=&p->tail)
 	{
 		printf("%d ",pn->data);
 		pn=pn->pnext;
 	}
 	printf("\n");
 }

void link_init(lht *p)
{
 	p->head.pnext=&p->tail;
 	p->head.ppre=NULL;
 	p->tail.pnext=NULL;				 
 	p->tail.ppre=&p->head;
}

void link_deinit(lht *p)
{
  	node *pf=NULL,*pm=NULL,*pl=NULL;
  	while(p->head.pnext!=&p->tail)
  	{
    	pf=&p->head;
    	pm=pf->pnext;
    	pl=pm->pnext;
    	pf->pnext=pm->pnext;
    	pl->ppre=pf; 
	    free(pm);
    	pm=NULL;
	}
}

int link_empty(lht **p)
{
 	if((*p)->head.pnext==&(*p)->tail)   
 	    return 1;
 	return 0;
}

int link_add(lht *p,int i)
{	
  	node *pf=NULL,*pm=NULL,*pl=NULL,*pn=NULL;  
  	pn=(node*)malloc(sizeof(node));
  	if(pn==NULL)
    	return 0;
  	pf=&p->head;
  	pm=pf->pnext;
  	pl=pm->pnext;
  	pf->pnext=pn;
  	pn->pnext=pm;
	pn->ppre=pf; 
	pm->ppre=pn;
	pn->data=i;
	
	return 1;
}

int link_sub(lht *p)     
{
  	node *pf=NULL,*pm=NULL,*pl=NULL,*pn=NULL;
  	pf=&p->head;
  	pm=pf->pnext;
  	pl=pm->pnext;
  	pf->pnext=pm->pnext;
  	pl->ppre=pm->ppre;
	free(pm);
	pm=NULL; 	
}
	
void link_pop(lht *p)       
{	
	if(link_empty((lht **)&p))  
	    return; 
	node *pf=NULL,*pm=NULL,*pl=NULL;;
	lht l1={0};
	link_init(&l1);      
	pf=&p->head;
	pm=pf->pnext;
	pl=pm->pnext;
	while(pl!=NULL)
	{
		link_add(&l1,pm->data);  
		pf->pnext=pm->pnext;
  		pl->ppre=pm->ppre;
		free(pm);
		pm=NULL; 
		pm=pf->pnext;
		pl=pm->pnext;
	} 
	link_sub(&l1);   
    pf=&l1.head;
    pm=pf->pnext;         
    pl=pm->pnext;
	node *pf1=NULL,*pm1=NULL,*pl1=NULL,*pn=NULL;
		pf1=&p->head;
	while(pm!=&l1.tail)
   {
  	    pn=(node*)malloc(sizeof(node));
    	if(pn==NULL)
     	    return; 
     	pm1=pf1->pnext;	
    	pf1->pnext=pn;
    	pn->pnext=pm1;
    	pn->ppre=pf1; 
    	pm1->ppre=pn;
	    pn->data=pm->data;
        pm=pm->pnext;
	} 

	link_deinit(&l1);	
} 

int main() {
	lht l1={0};
	link_init(&l1);
	link_add(&l1,1);
	link_add(&l1,2);
	link_add(&l1,3);
	link_add(&l1,4);
	link_add(&l1,5);
	link_add(&l1,6);
	link_pop(&l1);	
	link_show(&l1);
	return 0;
}
