#include "LinkList.h"
#include <iostream>

//入队
queue *insert_q(queue *HQ,int x){
	qnode *s;
	s=(qnode*)malloc(sizeof(qnode));
	s->data=x;
	s->next=NULL;
	if(HQ->rear==NULL){
		HQ->first=s;
		HQ->rear=s;
	}
	else {
		HQ->rear->next=s;
		HQ->rear=s;
	}
	return HQ;
}

//出队
queue *del_q(queue *HQ){
	qnode *p;
	int x;
	if(HQ->first==NULL){
		printf("\n队列已空，不能执行出队操作。。。");
	}
	else {
		x=HQ->first->data;
		p=HQ->first;
		if(HQ->first==HQ->rear){
			HQ->first=NULL;
			HQ->rear=NULL;
		}
		else {
			HQ->first=HQ->first->next;
			free(p);
		}
	}
	return HQ;
}