#include <iostream>
#include <io.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <iomanip>
#include "func.h"
#include <vector>
#include "base.h"
#include <ostream>
using namespace std;

union{
	unsigned char a;
	unsigned int i;
}u;
int arr[10][10];

/*ģ������Ԫ����ʧ�ܡ�����/
//template<class T>
//ostream & operator << (ostream & out, const Test<T>& obj);      // ģ������Ԫǰ������ 
//template<class T>
//class Test;
//
//template <class T>
//class Test
//{
//private:
//	T num;
//public:
//	Test(T n){num=n;}
//	Test(const Test<T> & copy){num=copy.num;}
//	friend ostream & operator << <>(ostream & out,const Test<T> &obj);
//	//~Test(void);
//};
//template<class T>
//ostream & operator << (ostream & out, const Test<T>& obj){
//	out<<obj.num;
//	return out;
//}
/*����ʧ�ܡ�����*/
int main(void)

{
	/*@dgz#1***&f(t)***************************/
	//int   t=5;

	//cout<<f(t)<<endl;  //a = 9

	//f(t)=20;             //a = 20

	//cout<<f(t)<<endl;     //t = 5,a = 20  a = 25

	//t=f(t);                //a = 30 t = 30

	//cout<<f(t)<<endl;     //t = 60
	/******************end***********************/

	/*@dgz#2***swap*/
	/*int x=9;
	int y=34;
	swap(x,y);*/
	/****************end***************************/
	/*@dgz#3** remove comment */
	/*int fd,n;
	char buf[102400];
	cout<<"�������ÿ�ʼ��������"<<endl;
	fd=open("D:\\test.txt",O_RDWR,0666);
	if(fd==-1){
		return -1;
	}
	n=read(fd,buf,sizeof(buf));
	if(n==-1||n==0){
		close(fd);
		return -1;
	}
	removecomment(buf,n);
	*(buf+n)='\0';
	printf(buf);

	write(fd,buf,n);

	close(fd);*/
	/**********************end**********************/
	/*@dgz#4**test sizeof()*/
	/*���� union ��struct */
	/*typedef   union   {long   i;   int   k[5];   char   c;}   DATE;
	struct   data   {   int   cat;   DATE   cow;   double   dog;}   too;
	DATE   max;
	printf("union:%d\n",sizeof(DATE));
	printf("struct:%d\n",sizeof(data));
	printf("max:%d",sizeof(max));
	printf( "%d \n",sizeof(data)+sizeof(max));

	cout<<"sizeof(fighter):"<<sizeof(aircraft)<<endl;//3*4=12
	cout<<"sizeof(float):"<<sizeof(float)<<endl;
	cout<<"sizeof(union):"<<sizeof(u_1)<<endl;//4
	int **a[3][4];
	cout<<"int **a[3][4]��ռ�ڴ��СΪ�� "<<sizeof(a)<<" ���ֽڡ�"<<endl;
	cout <<"string ���ʹ�СΪ�� "<<sizeof(string)<<" ���ֽڡ�"<<endl;
	/*sizeof(string) һ��Ϊ4���˴��ڱ��������*/
	/*cout<<"sizeof(A):"<<sizeof(A)<<endl;
	cout<<"sizeof(B):"<<sizeof(B)<<endl;
	cout<<"sizeof(C):"<<sizeof(C)<<endl;
	cout<<"sizeof(D):"<<sizeof(D)<<endl;*/
	/******************end******************/
	/*@dgz#5**test reference & pointer*/
	/*A c_a;
	B *c_b=(B*)(&c_a);
	c_b->fun();*/
	/*���Ϊ1��Ұ����ǿ��ת����a��ַ���ݿ�����b�����c_bָ���a��Ĵ洢�ռ䣬������fun�Ǳ�����������ʶ����m_c�����׵�ַ��ƫ��������Ӧ��a��m_a��a��ַ��ƫ����*/
	/*************end**************/
	/*@dgz#6**test pointer*/
	/*int *ptr;
	ptr=(int*)0x8000;
	*ptr=0xaabb;*/
	/*Test_Test.exe�е�0x011449c8 ����δ��������쳣:0xC0000005: д��λ��0x00008000ʱ�������ʳ�ͻ:����ʱ���� ���������Ƕ�ָ�����һ������ĵ�ַ�� Ӧ��ֹ���÷�*/
	/************** end ************/

	/*@dgz#7**begin struct*/
	
	//S s;
	//cout<<"s.i��ַ��"<<&s.i<<"|| length��"<< sizeof(s.i)<<endl;
	//cout<<"s.p��ַ��"<<&s.p<<"|| length��"<< sizeof(s.p)<<endl;
	//cout<<"s.i��ֵ��"<<s.i<<"||s.p��ֵ��"<<s.p<<endl;
	//cout<<"sizeof(int)��"<<sizeof(int) <<endl;
	//int *p = &s.i;
	//cout << "sizeof(p)��"<<sizeof(p) <<endl;
	//p[0] = 4;
	//p[1] = 3;
	//cout<<"p[0]��ַ��"<<&p[0]<<"||p[0]��ֵ��"<<p[0]<<endl;
	//cout<<"p[1]��ַ��"<<&p[1]<<"||p[1]��ֵ��"<<p[1]<<endl;
	//cout<<"p ��ַ��"<<&p<<"||p ��ֵ��"<<p<<endl;
	//cout<<"s.i��ֵ��"<<s.i<<"||s.p��ֵ��"<<s.p<<endl;
	//s.p = p;
	//cout<<"s.p��ַ��"<<&s.p<<"||s.p��ֵ��"<<s.p<<endl;
	//s.p[1] = 1;
	//cout<<"ִ��s.p[1]=1֮�󡣡���"<<endl;
	//cout<<"s.p��ַ��"<<&s.p<<"||s.p��ֵ��"<<s.p<<endl;
	//cout<<"s.p[1]��ַ��"<<&s.p[1]<<endl;
	////cout<<"s.p[1]��ֵ��"<<s.p[1]<<endl;//s.p[1]�Ѿ����ܶ�ȡ
	////s.p[0] = 2;
	//cout<<"s.p[0]��ַ��"<<&s.p[0]<<endl;
	//cout<<"s.p[0]��ֵ��"<<s.p[0]<<endl;
	/*64λϵͳ��Ϊ�������ݶ������� ���ṹ����4�ֽڵ�int ��8�ֽڵ�ָ��֮������4�ֽڵĿռ䣬��ʱ�˳�����ȫ�������У���int ��ָ���� ռͬ�ȵ��ڴ��ֽ�������������������һ�佫������δ��������쳣: 0xC0000005: д��λ�� 0x00000001 ʱ�������ʳ�ͻ*/
	/**************end************/
	/*@dgz#8**test ��ָ��  ��;ָ��*/
	//int *pInt=new int;
	//*pInt=10;
	//cout<<"*pInt: "<<*pInt<<endl;
	//delete pInt;
	//pInt=0;//�˴���pIntָ�����ڴ��ַ0x000000��
	//long *pLong=new long;
	//*pLong=90000;
	//cout<<"*pLong: "<<*pLong<<endl;
	//*pInt=20;//��ͼ���ڴ��ַ0��д��ֵ�������
	//cout<<"*pInt: "<<*pInt<<endl;
	//cout<<"*pLong: "<<*pLong<<endl;
	//delete pLong;



	/**************end************/
	/*@dgz#9**���������ַ���������abdbcc��abc������ڶ����ַ����ڵ�һ���ַ����е����Ӵ��򡣼����125,126,145,146�����������㷨�����ҵ��ڶ����ַ����и����ַ��ֱ���ֵ�λ�ã�������λ�ù�������������������ɵĶ��������Ӧ����ϣ������������õ�a��b��c��Դ���г��ֵ�λ�����зֱ�Ϊ{1}��{2��4}��{5��6}���������Ӧ�����Ϊ��
			1
		2			4
	5		6	5		6*/
	/*char ParString[]="abdbcca";
	char SonString[]="abc";
	ConnetSequence(ParString,SonString);
*/


	/**************end************/
	/*@dgz#10**test recursion */
	/*cout<<f(5,5)<<endl;*/
	/*�����A���xֵRECURSION��NO_RECURSION�x�񺯔�����*/

	/**************end************/
	/*@dgz#11**test circulate -for*/
	/*int x=10;
	int y=10;
	int i;
	for(i=0;x>8;y=i++){
		printf("%d,%d,",x--,y);
	}*/
	/*y=i++��ѭ�h�f���l������һ��ѭ�h�r�Kδ���У������ڵڶ���ѭ�h�_ʼ�r���У�������Y����10,10,9,0*/

	/**************end************/
	/*@dgz#12**��ӡ������ʽ�Ķ�ά����
	*zigzag��jpeg������ȡ�������ݵ�����˳��
	0,1,5
	2,4,6
	3,7,8*/
	//int N;
	//int s,i,j;
	//int squa;
	//printf("please input the number of N...\n");
	//scanf("%d",&N);
	//int **a=(int **)malloc(N*sizeof(int));
	//if(a==NULL)
	//	return 0;
	//for(i=0;i<N;i++){
	//	if((a[i]=(int *)malloc(N*sizeof(int)))==NULL){
	//		while(--i>=0)
	//			free(a[i]);
	//		free(a);
	//		//getchar();
	//		return 0;
	//	}
	//}
	///*���鸳ֵ*/
	//squa=N*N;
	//for(i=0;i<N;i++)
	//	for(j=0;j<N;j++){
	//		s=i+j;
	//		if(s<N)
	//			a[i][j]=s*(s+1)/2+(((i+j)%2!=0)?i:j);
	//		else {
	//			s=(N-1-i)+(N-1-j);
	//			a[i][j]=squa-s*(s+1)/2-(N-(((i+j)%2!=0)?i:j));
	//		}
	//	}
	//for(i=0;i<N;i++){
	//	for(j=0;j<N;j++){
	//		printf("%6d",a[i][j]);
	//	}
	//	printf("\n");
	//}
	/*##@dgz##ͨ���۲�zigzag���飬���Է��֣��Խ�����(i+j)Ϊ��������Ϊs��s=i+j������iΪ������jΪ������
	��Ϊ�����Ǻ������������ִ���
	���������ǣ�ÿһ��б���ϵĸ�������һ�ж�һ�����ң�ÿ��б���ϵĵ�һ��Ԫ�ر�ʾ�˸�б��֮ǰԪ�صĸ��������õȲ�������͹�ʽ����ÿһб�ߵ�һ��Ԫ�ص�ֵΪ (1 + (i+j)) * (i+j) / 2 = (1 + s) * s / 2
	б���е�����Ԫ�ؿɱ�ʾΪs*��s+1��/2+i���˴�������ż�жϾ�֪���Ǽ�i���Ǽ�j�ˡ�����ô�Ͳ����������� a[i][j] = s*(s+1)/2 + (((i+j)%2 == 0)? j : i);�ĺ����ˡ�

	���������ǣ�б����Ԫ�صĸ����ǵݼ��ġ������������Կ����ǵ����ģ�����Ȼ�������õȲ�������͹�ʽ�����ʣ�µ�Ԫ�صĸ���������Ԫ�ظ�����ȥʣ�µ�Ԫ�ظ������ǵ�ǰб���ϵĵ�һ��Ԫ��ֵ��
	����֪������Ԫ�صĸ�����n*n�����б�ߵĵ�һ��Ԫ��ֵΪn*n - s*(s+1)/2���˴���s�Ͳ���i+j�ˣ�����(n-1-i)+(n-1-j)������Ҳ������������s = (N-1-i) + (N-1-j);  a[i][j] = squa - s*(s+1)/2 - (N - (((i+j)%2 == 0)? j : i));����ĺ����ˡ�@##*/
	/**************end************/
	/*@dgz#13**�ȳ�����Ԫ��ƥ��*/
	/*int a[10]={1,2,3,4,5,6,7,8,9,10};
	int b[10]={10,7,9,6,5,3,2,4,1,8};
	int k=sizeof(a)/sizeof(int);
	matching(a,b,k);*/
	/*************end***************/
	/*@dgz#14**��������*/
	//int x,y;
	//int c;//��������Ȧ��
	//cout<<"������Ҫ��ӡ����������Ȧ��c��ֵ������������"<<endl;
	//scanf("%d",&c);
	//for(y=-c;y<=c;y++){
	//	for(x=-c;x<=c;x++)
	//		printf("%5d",SpiralQueue(x,y));
	//	printf("\n");
	//}
	//cout<<"��������ֵ���Կո�ֿ�(���������������)������"<<endl;
	//while(scanf("%d%d",&x,&y)==2)
	//	printf("%d\n",SpiralQueue(x,y));
	/****************end************/
	/*@dgz#14**��ӡ���¾���˳ʱ���������󣩣�
	1 2 3
	8 9 4
	7 6 5
	*/
	/*int n,i,j;
	cout<<"����Ҫ��ӡ�ľ���������N��ֵ��"<<endl;
	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++)
			arr[i][j]=0;
	}
	Inc_Arr(n);
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			cout<<setw(6)<<right<<arr[i][j]<<" ";
		}
		cout<<endl;
	}*/
	/*************end*****************/
	/*@dgz#15**���ʲ���***/
	//int rgnC=0;
	//for(int i=0;i<LOOP;i++){
	//	int x=rand();
	//	int y=rand();
	//	if(x*x+y*y<RAND_MAX*RAND_MAX)//�൱����һ��1/4Բ�����һ�����������֮�ȣ����뾶ΪR=RAND_MAX
	//		rgnC++;
	//}
	//cout<<"RAND_MAX: "<<RAND_MAX<<endl;
	//printf("%d\n",rgnC);

	/**************end**************/
	/*@dgz#16#test vector-1*****/
	/*vector<int> vec;
	vec.push_back(34);
	vec.push_back(23);
	print_vec(vec);
	vector<int>::iterator p;
	p=vec.begin();
	*p=68;
	*(p+1)=69;
	print_vec(vec);
	vec.pop_back();
	print_vec(vec);
	vec.push_back(101);
	vec.push_back(102);
	int i=0;
	while(i<vec.size())
	cout<<vec[i++]<<" ";
	cout<<endl;
	vec[0]=1000;
	vec[1]=1001;
	vec[2]=1002;
	i=0;
	while(i<vec.size())
	cout<<vec[i++]<<" ";
	print_vec(vec);*/
	/*@dgz#16#test vector-2*****/
	/*tvector<int> v;
	int i,j,n=0;
	for(i=0;i<1000;++i)
		v.push(i);
	for(i=0;i<1000;++i){
		if(n%15==0)
			cout<<endl;
		n++;
		cout<<setw(4)<<v[i]<<" ";
	}*/
	/**********end***********/
	
	/*@dgz#17#**������base�ĳ�Ա������Test�����Ԫ����***/
	/*base obj(98);
	cout<<obj.get_i()<<" || "<<obj.get_j()<<endl;*/
	/*��ĳ�Ա�����ĳ�ʼ��˳���Ǹ��ݳ�Ա����������˳����ִ�е�**/
	/*Test<int> t(2);
	cout<<t;*/
	/*����ʧ�ܡ�����Ԫ����ȱ������˵��������������*/
	/**********end***********/

	/*@dgz#18#*������ָ��Ͷ��ؼ̳�*/
	
	/*cout<<"sizeof(a_1): "<<sizeof(a_1)<<endl;
	
	cout<<"sizeof(b_1): "<<sizeof(b_1)<<endl;
	
	cout<<"sizeof(c_1): "<<sizeof(c_1)<<endl;*/
	
	
	/**********end***********/
	/*@dgz#19#*c�����ʽ����***/
	//printf("%f \n",5);
	///*����%f����������Ϊ����Ӧ����double�ͣ�printf������float�Զ�תΪdouble������˴�stack�ж�ȡ8�ֽڣ��ڴ����Խ��������Ϊ0.000000*/
	//printf("%d\n",5.01);
	///* */
	//printf("%f \n",5.01);
	//printf("%d\n",5);
	/*************end**********/
	/*@dgz#20#*�Ϸ��ַ������ԡ���***/
	/*cout<<validstring(2,3)<<endl;  
	cout<<validstring(3,4)<<endl;*/
	/*δͨ���Ĳ��ԣ�������������������������8*/
	/**************end**************/
	/*@dgz#21#test ��λ*/
	//unsigned short int i=0;
	//int j=8,p;
	//p=j<<1;
	//i=i-1;
	//cout<<"j<<1 = "<<p<<endl<<"unsigned (-1) = "<<i<<endl<<"sizeof(unsigned short)"<<sizeof(unsigned short int)<<endl;
	////�޷���short int ռ2���ֽڣ������� -1 �����ܱ�ʾ�����ֵ65535

	//u.i=0xf0f1f2f3;
	//cout<<hex<<u.i<<endl;//16���Ƹ�ʽ���iΪf0f1f2f3
	//cout<<hex<<int(u.a)<<endl;
	////��Ϊ�ڴ������ݴ洢�ǵ�λ�ֽڴ���͵�ַ����λ�ֽڴ���ߵ�ַ�������ݵ�ַ���õ͵�ַ��ʾ��a��Ϊi��λ�ֽڵ�f3
	//cout<<sizeof(u)<<" || "<<sizeof(u.i)<<" || "<<sizeof(u.a)<<endl;
	//
	//int *pa=NULL;//��paָ���ַ0��
	//int *pb=pa+15;//pbΪ15*4���ֽڣ�=60��תΪ16�������Ϊ3c
	//printf("%x\n",pb);

	char *ptr;
	if((ptr=(char *)malloc(0))==NULL)
		puts("got a null pointer");
	else
		puts("got a valid pointer");
	cout<<"sizeof(ptr)"<<sizeof(ptr)<<" || "<<endl;
	cout<<"strlen(ptr)"<<strlen(ptr)<<endl;
	cout<<*ptr<<endl;
	cout<<ptr<<endl;
	char ch='E';
	cout<<"E ��ӦASCII��->0x"<<hex<<static_cast<int>(ch)<<endl;
	//cout<<hex<<92<<endl;
	/**********end***********/

	/////////////////////////////////*****bottom*****////////////////////////////
	cout<<endl<<"please press the Enter key to exit.... "<<endl;
	getchar();
	return 0;
}