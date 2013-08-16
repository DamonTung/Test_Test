#include <iostream>
#include "LinkList.h"
using namespace std;
//node *mid=(node*)malloc(sizeof(node));
int main(){
	/*@dgz#01#单链表的创建、删除节点、插入节点、排序、逆置***/
	//创建单链表
	/*node *h=creat();
	int L=length(h);
	cout<<endl<<"单链表长度为： "<<L<<endl<<"打印输出为： "<<endl;
	print(h);*/
	//删除节点
	/*h=del(h,3);
	L=length(h);
	cout<<endl<<"删除节点3之后。。"<<"单链表长度为： "<<L<<endl<<"打印输出为： "<<endl;
	print(h);*/
	//插入节点
	/*h=insert(h,22);
	L=length(h);
	cout<<endl<<"插入节点22之后。。"<<"单链表长度为： "<<L<<endl<<"打印输出为： "<<endl;
	print(h);*/
	//单链表排序
	/*h=sort(h);
	L=length(h);
	cout<<endl<<"排序之后。。"<<"单链表长度为： "<<L<<endl<<"打印输出为： "<<endl;
	print(h);*/
	//单链表逆置
	/*h=reverse(h);
	L=length(h);
	cout<<endl<<"逆置之后。。"<<"单链表长度为： "<<L<<endl<<"打印输出为： "<<endl;
	print(h);*/
	//遍历一次求出中间节点
	//node *mid=(node*)malloc(sizeof(node));
	/*node *mid=NULL;
	cout<<"全局mid地址："<<mid<<endl;
	mid=searchmid(h,mid);
	cout<<endl<<"中间节点为："<<mid->data<<endl;
	cout<<"全局mid地址："<<mid<<endl;*/
	/********end*********/

	/*@dgz#02#双链表的创建、删除节点、插入节点*/
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

	/*@dgz#03#循环链表解决约瑟夫环问题**/
	//int total_num;//总人数
	//int start_num;//第一个开始报数的人
	//int pop_num;//出列者喊道的数
	//cout<<"请依次输入 总人数 || 开始报数的人 || 出列的数 ："<<endl;
	//cin>>total_num>>start_num>>pop_num;
	//JOSEPHUS(total_num,start_num,pop_num);
	/**end**/
	/*@dgz#04#队列的出队与入队操作**/
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
	cout<<endl<<"按enter键退出。。。"<<endl;
	getchar();
	return 0;
}