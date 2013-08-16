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
	printf("\n ������ͷԪ��Ϊ  %d  ���� %d ��Ԫ�صĵ�������",head->data,length(head));
	return head;
}
//������ⳤ
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
//�������ӡ
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
//ɾ���ڵ�
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
//����ڵ�
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
//����
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
//���õ�����
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
//��֪���ڵ�N��ֵ������һ�������������м�ڵ�
node* searchmid(node *head,node *mid){
	node *temp=head;
	while(head->next->next!=NULL){
		head=head->next->next;
		temp=temp->next;
		mid=temp;
		mid->data=temp->data;
		
	}
	cout<<endl<<"�м�ڵ�Ϊ��"<<mid->data<<endl;
	cout<<"�ֲ�mid��ַ��"<<mid<<endl;
	cout<<"mid->next"<<mid->next->data<<endl;
	return mid;
}