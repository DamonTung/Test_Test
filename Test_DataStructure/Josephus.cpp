#include "LinkList.h"
#include <iostream>
void JOSEPHUS(int n, int k,int m){
	LinkList p,r,list,curr;

	//����ѭ������
	p=(LinkList)malloc(sizeof(LNode));
	p->data=0;
	p->link=p;
	curr=p;
	for(int i=1;i<n;i++){
		LinkList t=(LinkList)malloc(sizeof(LNode));
		t->data=i;
		t->link=curr->link;
		curr->link=t;
		curr=t;
	}

	//�ѵ�ǰָ���ƶ�����һ����������
	r=curr;
	while(k--){
		r=p,
		p=p->link;
	}
	while(n--){
		for(int s=m-1;s--;r=p,p=p->link);
		r->link=p->link;
		printf("%d->",p->data);
		free(p);
		p=r->link;
	}
}