#include <iostream>
#include "LinkList.h"
using namespace std;
//node *mid=(node*)malloc(sizeof(node));
int main(){
	/*@dgz#01#������Ĵ�����ɾ���ڵ㡢����ڵ㡢��������***/
	//����������
	/*node *h=creat();
	int L=length(h);
	cout<<endl<<"��������Ϊ�� "<<L<<endl<<"��ӡ���Ϊ�� "<<endl;
	print(h);*/
	//ɾ���ڵ�
	/*h=del(h,3);
	L=length(h);
	cout<<endl<<"ɾ���ڵ�3֮�󡣡�"<<"��������Ϊ�� "<<L<<endl<<"��ӡ���Ϊ�� "<<endl;
	print(h);*/
	//����ڵ�
	/*h=insert(h,22);
	L=length(h);
	cout<<endl<<"����ڵ�22֮�󡣡�"<<"��������Ϊ�� "<<L<<endl<<"��ӡ���Ϊ�� "<<endl;
	print(h);*/
	//����������
	/*h=sort(h);
	L=length(h);
	cout<<endl<<"����֮�󡣡�"<<"��������Ϊ�� "<<L<<endl<<"��ӡ���Ϊ�� "<<endl;
	print(h);*/
	//����������
	/*h=reverse(h);
	L=length(h);
	cout<<endl<<"����֮�󡣡�"<<"��������Ϊ�� "<<L<<endl<<"��ӡ���Ϊ�� "<<endl;
	print(h);*/
	//����һ������м�ڵ�
	//node *mid=(node*)malloc(sizeof(node));
	/*node *mid=NULL;
	cout<<"ȫ��mid��ַ��"<<mid<<endl;
	mid=searchmid(h,mid);
	cout<<endl<<"�м�ڵ�Ϊ��"<<mid->data<<endl;
	cout<<"ȫ��mid��ַ��"<<mid<<endl;*/
	/********end*********/

	/*@dgz#02#˫����Ĵ�����ɾ���ڵ㡢����ڵ�*/
	/*dnode *h_d;
	int del_num,insert_num;
	h_d=creat_d();
	print_d(h_d);
	cout<<"\n Int: ";
	cin>>del_num;
	h_d=del_d(h_d,del_num);
	print_d(h_d);
	cout<<"\n please input the insert data : ";
	cin>>insert_num;
	h_d=insert_d(h_d,insert_num);
	print_d(h_d);
	*/
	/**end**/

	/*@dgz#03#ѭ��������Լɪ������**/
	//int total_num;//������
	//int start_num;//��һ����ʼ��������
	//int pop_num;//�����ߺ�������
	//cout<<"���������� ������ || ��ʼ�������� || ���е��� ��"<<endl;
	//cin>>total_num>>start_num>>pop_num;
	//JOSEPHUS(total_num,start_num,pop_num);
	/**end**/
	/*@dgz#04#���еĳ�������Ӳ���**/
	queue *Hqueue=(queue*)malloc(sizeof(queue));
	Hqueue->first=NULL;
	Hqueue->rear=NULL;
	qnode *f;
	for(int i=0;i<10;i++){
		Hqueue=insert_q(Hqueue,i);
	}
	f=Hqueue->first;
	for(int i=0;i<10;i++){
		while(f->next!=NULL){
			cout<<f->data<<"->";
			f=f->next;
		}
	}
	
	/*************************bottom**************/
	cout<<endl<<"��enter���˳�������"<<endl;
	getchar();
	return 0;
}