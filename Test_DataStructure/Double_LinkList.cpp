#include "LinkList.h"
//#include <stdio.h>
//#include <conio.h>
//#include <string.h>
#include <iostream>
dnode *creat_d(){
	dnode *head,*p,*s;
	int x,cycle=1;
	head=(dnode*)malloc(sizeof(dnode));
	p=head;
	while(cycle){
		printf("\n please input the data: ");
		scanf("%d",&x);
		if(x!=0){
			s=(dnode*)malloc(sizeof(dnode));
			s->data=x;
			printf("%d",s->data);
			p->next=s;
			s->pre=p;
			p=s;
		}
		else
			cycle=0;
	}
	head=head->next;
	head->pre=NULL;
	p->next=NULL;
	printf("\n 成功创建双链表头元素值为 %d ",head->data);
	return head;
}
dnode *del_d(dnode *head,int num){
	dnode *p1,*p2;
	p1=head;
	while(num!=p1->data&&p1->next!=NULL){
		p1=p1->next;
	}
	if(num==p1->data){
		if(p1==head){
			head=head->next;
			head->pre=NULL;
			free(p1);
		}
		else if(p1->next==NULL){
			p1->next->pre=p1->pre;
			p1->pre->next=p1->next;
		}
		else{
			p1->next->pre=p1->pre;
			p1->pre->next=p1->next;
		}
	}
	else
		printf("\n could not been found ",num);
	return head;
}
dnode *insert_d(dnode *head,int num){
	dnode *p0,*p1;
	p1=head;
	p0=(dnode *)malloc(sizeof(dnode));
	p0->data=num;
	while(p0->data>p1->data&&p1->next!=NULL){
		p1=p1->next;
	}
	if(p0->data<=p1->data){
		if(head==p1){
			p0->next=p1;
			p1->pre=p0;
			head=p0;
		}
		else{
			p1->pre->next=p0;
			p0->next=p1;
			p0->pre=p1->pre;
			p1->pre=p0;
		}
	}
	else{
		p1->next=p0;
		p0->pre=p1;
		p0->next=NULL;
	}
	return head;
}
void print_d(dnode *head){
	dnode *p;
	int n;
	n=length_d(head);
	printf("\n These %d records are : \n",n);
	p=head;
	if(head!=NULL)
		while(p!=NULL){
			printf("\n |||| %d  ",p->data);
			p=p->next;
		}
}
int length_d(dnode *head){
	int n=0;
	dnode *p;
	p=head;
	while(p!=NULL){
		p=p->next;
		n++;
	}
	return n;
}