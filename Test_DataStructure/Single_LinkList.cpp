#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include "LinkList.h"
using namespace std;
node *creat(){
	node *head,*p,*s;
	int x,cycle=1;
	head=(node*)malloc(sizeof(node));
	p=head;
	while(cycle){
		printf("\n please input the data: ");
		scanf("%d",&x);
		if(x!=0){
			s=(node*)malloc(sizeof(node));
			s->data=x;
			printf("\n %d",s->data);
			p->next=s;
			p=s;
		}
		else cycle=0;
	}
	head=head->next;
	p->next=NULL;
	printf("\n 创建了头元素为  %d  包含 %d 个元素的单链表。。",head->data,length(head));
	return head;
}
//单链表测长
int length(node *head){
	int n=0;
	node *p;
	p=head;
	while(p!=NULL){
		p=p->next;
		n++;
	}
	return n;
}
//单链表打印
void print(node *head){
	node *p;
	int n;
	n=length(head);
	printf("\n These %d records are : \n",n);
	p=head;
	if(head!=NULL)
		while(p!=NULL){
			printf("\n |||| %d  ",p->data);
			p=p->next;
		}
}
//删除节点
node *del(node *head,int num){
	node *p1,*p2;
	p1=head;
	while(num!=p1->data && p1->next!=NULL){
		p2=p1;
		p1=p1->next;
	}
	if(num==p1->data){
		if(p1==head){
			head=p1->next;
			free(p1);
		}
		else
			p2->next=p1->next;
	}
	else
		printf("\n %d could not been found ",num);
	return head;
}
//插入节点
node *insert(node *head,int num){
	node *p0,*p1,*p2;
	p1=head;
	p0=(node*)malloc(sizeof(node));
	p0->data=num;
	while(p0->data>p1->data&&p1->next!=NULL){
		p2=p1;
		p1=p1->next;
	}
	if(p0->data<=p1->data){
		if(head==p1){
			p0->next=p1;
			head=p0;
		}
		else{
			p2->next=p0;
			p0->next-p1;
		}
	}
	else{
		p1->next=p0;
		p0->next=NULL;
	}
	return head;
}
//排序
node *sort(node *head){
	node *p;
	int n;
	int temp;
	n=length(head);
	if(head==NULL||head->next==NULL)
		return head;
	p=head;
	for(int j=1;j<n;++j){
		p=head;
		for(int i=0;i<n-j;++i){
			if(p->data>p->next->data){
				temp=p->data;
				p->data=p->next->data;
				p->next->data=temp;
			}
			p=p->next;
		}
	}
	return head;
}
//逆置单链表
node *reverse(node *head){
	node *p1,*p2,*p3;
	if(head==NULL||head->next==NULL)
		return head;
	p1=head;
	p2=p1->next;
	while(p2){
		p3=p2->next;
		p2->next=p1;
		p1=p2;
		p2=p3;
	}
	head->next=NULL;
	head=p1;
	return head;
}
//不知道节点N的值，遍历一次求出单链表的中间节点
node* searchmid(node *head,node *mid){
	node *temp=head;
	while(head->next->next!=NULL){
		head=head->next->next;
		temp=temp->next;
		mid=temp;
		mid->data=temp->data;
		
	}
	cout<<endl<<"中间节点为："<<mid->data<<endl;
	cout<<"局部mid地址："<<mid<<endl;
	cout<<"mid->next"<<mid->next->data<<endl;
	return mid;
}