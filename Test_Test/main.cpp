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

/*模板类友元测试失败。。。/
//template<class T>
//ostream & operator << (ostream & out, const Test<T>& obj);      // 模板类友元前置声明 
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
/*测试失败。。。*/
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
	cout<<"函数调用开始。。。。"<<endl;
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
	/*测试 union 和struct */
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
	cout<<"int **a[3][4]所占内存大小为： "<<sizeof(a)<<" 个字节。"<<endl;
	cout <<"string 类型大小为： "<<sizeof(string)<<" 个字节。"<<endl;
	/*sizeof(string) 一般为4，此处于编译器相关*/
	/*cout<<"sizeof(A):"<<sizeof(A)<<endl;
	cout<<"sizeof(B):"<<sizeof(B)<<endl;
	cout<<"sizeof(C):"<<sizeof(C)<<endl;
	cout<<"sizeof(D):"<<sizeof(D)<<endl;*/
	/******************end******************/
	/*@dgz#5**test reference & pointer*/
	/*A c_a;
	B *c_b=(B*)(&c_a);
	c_b->fun();*/
	/*结果为1，野蛮的强制转换将a地址内容看成是b类对象，c_b指向的a类的存储空间，当调用fun是编译器对其认识就是m_c对于首地址的偏移量，对应于a中m_a对a地址的偏移量*/
	/*************end**************/
	/*@dgz#6**test pointer*/
	/*int *ptr;
	ptr=(int*)0x8000;
	*ptr=0xaabb;*/
	/*Test_Test.exe中的0x011449c8 处有未经处理的异常:0xC0000005: 写入位置0x00008000时发生访问冲突:运行时错误， 这种做法是对指针分配一个随意的地址， 应禁止此用法*/
	/************** end ************/

	/*@dgz#7**begin struct*/
	
	//S s;
	//cout<<"s.i地址："<<&s.i<<"|| length："<< sizeof(s.i)<<endl;
	//cout<<"s.p地址："<<&s.p<<"|| length："<< sizeof(s.p)<<endl;
	//cout<<"s.i的值："<<s.i<<"||s.p的值："<<s.p<<endl;
	//cout<<"sizeof(int)："<<sizeof(int) <<endl;
	//int *p = &s.i;
	//cout << "sizeof(p)："<<sizeof(p) <<endl;
	//p[0] = 4;
	//p[1] = 3;
	//cout<<"p[0]地址："<<&p[0]<<"||p[0]的值："<<p[0]<<endl;
	//cout<<"p[1]地址："<<&p[1]<<"||p[1]的值："<<p[1]<<endl;
	//cout<<"p 地址："<<&p<<"||p 的值："<<p<<endl;
	//cout<<"s.i的值："<<s.i<<"||s.p的值："<<s.p<<endl;
	//s.p = p;
	//cout<<"s.p地址："<<&s.p<<"||s.p的值："<<s.p<<endl;
	//s.p[1] = 1;
	//cout<<"执行s.p[1]=1之后。。。"<<endl;
	//cout<<"s.p地址："<<&s.p<<"||s.p的值："<<s.p<<endl;
	//cout<<"s.p[1]地址："<<&s.p[1]<<endl;
	////cout<<"s.p[1]的值："<<s.p[1]<<endl;//s.p[1]已经不能读取
	////s.p[0] = 2;
	//cout<<"s.p[0]地址："<<&s.p[0]<<endl;
	//cout<<"s.p[0]的值："<<s.p[0]<<endl;
	/*64位系统因为存在数据对齐问题 ，结构体中4字节的int 与8字节的指针之间会空余4字节的空间，此时此程序完全可以运行，若int 与指针型 占同等的内存字节数，则程序运行至最后一句将崩溃：未经处理的异常: 0xC0000005: 写入位置 0x00000001 时发生访问冲突*/
	/**************end************/
	/*@dgz#8**test 空指针  迷途指针*/
	//int *pInt=new int;
	//*pInt=10;
	//cout<<"*pInt: "<<*pInt<<endl;
	//delete pInt;
	//pInt=0;//此处将pInt指向了内存地址0x000000处
	//long *pLong=new long;
	//*pLong=90000;
	//cout<<"*pLong: "<<*pLong<<endl;
	//*pInt=20;//试图向内存地址0处写入值将会出错
	//cout<<"*pInt: "<<*pInt<<endl;
	//cout<<"*pLong: "<<*pLong<<endl;
	//delete pLong;



	/**************end************/
	/*@dgz#9**输入两个字符串，比如abdbcc和abc，输出第二个字符串在第一个字符串中的连接次序。即输出125,126,145,146。解析：此算法是先找到第二个字符串中各个字符分别出现的位置，利用其位置构造多叉树，遍历构造完成的多叉树即相应的组合，例子中搜索得到a、b、c在源串中出现的位置序列分别为{1}、{2、4}、{5、6}，构造的相应多叉树为：
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
	/*根據預定義值RECURSION和NO_RECURSION選擇函數執行*/

	/**************end************/
	/*@dgz#11**test circulate -for*/
	/*int x=10;
	int y=10;
	int i;
	for(i=0;x>8;y=i++){
		printf("%d,%d,",x--,y);
	}*/
	/*y=i++為循環遞增條件，第一次循環時並未執行，而是在第二次循環開始時執行，所以其結果是10,10,9,0*/

	/**************end************/
	/*@dgz#12**打印如下样式的二维数组
	*zigzag（jpeg编码里取像素数据的排列顺序）
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
	///*数组赋值*/
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
	/*##@dgz##通过观察zigzag数组，可以发现，对角线上(i+j)为常数，记为s（s=i+j）。（i为行数，j为列数）
	分为上三角和下三角两部分处理。
	对于上三角，每一个斜线上的个数比上一行多一个。且，每个斜线上的第一个元素表示了该斜线之前元素的个数。运用等差数列求和公式，则每一斜线第一个元素的值为 (1 + (i+j)) * (i+j) / 2 = (1 + s) * s / 2
	斜线中的任意元素可表示为s*（s+1）/2+i（此处来个奇偶判断就知道是加i还是加j了。）那么就不难理解代码中 a[i][j] = s*(s+1)/2 + (((i+j)%2 == 0)? j : i);的含义了。

	对于下三角，斜线上元素的个数是递减的。反过来看可以看成是递增的，就仍然可以套用等差数列求和公式，求出剩下的元素的个数，用总元素个数减去剩下的元素个数就是当前斜线上的第一个元素值。
	我们知道所有元素的个数是n*n，则该斜线的第一个元素值为n*n - s*(s+1)/2。此处的s就不是i+j了，而是(n-1-i)+(n-1-j)。这样也不难理解代码中s = (N-1-i) + (N-1-j);  a[i][j] = squa - s*(s+1)/2 - (N - (((i+j)%2 == 0)? j : i));两句的含义了。@##*/
	/**************end************/
	/*@dgz#13**等长数组元素匹配*/
	/*int a[10]={1,2,3,4,5,6,7,8,9,10};
	int b[10]={10,7,9,6,5,3,2,4,1,8};
	int k=sizeof(a)/sizeof(int);
	matching(a,b,k);*/
	/*************end***************/
	/*@dgz#14**螺旋队列*/
	//int x,y;
	//int c;//螺旋矩阵圈数
	//cout<<"请输入要打印的螺旋矩阵圈数c的值（正整数）："<<endl;
	//scanf("%d",&c);
	//for(y=-c;y<=c;y++){
	//	for(x=-c;x<=c;x++)
	//		printf("%5d",SpiralQueue(x,y));
	//	printf("\n");
	//}
	//cout<<"输入坐标值，以空格分开(输入出错，则程序结束)。。。"<<endl;
	//while(scanf("%d%d",&x,&y)==2)
	//	printf("%d\n",SpiralQueue(x,y));
	/****************end************/
	/*@dgz#14**打印如下矩阵（顺时针依次增大）：
	1 2 3
	8 9 4
	7 6 5
	*/
	/*int n,i,j;
	cout<<"输入要打印的矩阵行列数N的值："<<endl;
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
	/*@dgz#15**概率测试***/
	//int rgnC=0;
	//for(int i=0;i<LOOP;i++){
	//	int x=rand();
	//	int y=rand();
	//	if(x*x+y*y<RAND_MAX*RAND_MAX)//相当于求一个1/4圆面积与一个正方形面积之比，最大半径为R=RAND_MAX
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
	
	/*@dgz#17#**测试类base的成员变量及Test类的友元函数***/
	/*base obj(98);
	cout<<obj.get_i()<<" || "<<obj.get_j()<<endl;*/
	/*类的成员变量的初始化顺序是根据成员变量的声明顺序来执行的**/
	/*Test<int> t(2);
	cout<<t;*/
	/*测试失败。。友元函数缺少类型说明符。。？？？*/
	/**********end***********/

	/*@dgz#18#*测试虚指针和多重继承*/
	
	/*cout<<"sizeof(a_1): "<<sizeof(a_1)<<endl;
	
	cout<<"sizeof(b_1): "<<sizeof(b_1)<<endl;
	
	cout<<"sizeof(c_1): "<<sizeof(c_1)<<endl;*/
	
	
	/**********end***********/
	/*@dgz#19#*c输出格式测试***/
	//printf("%f \n",5);
	///*根据%f，编译器认为参数应该是double型（printf函数中float自动转为double），因此从stack中读取8字节，内存访问越界输出结果为0.000000*/
	//printf("%d\n",5.01);
	///* */
	//printf("%f \n",5.01);
	//printf("%d\n",5);
	/*************end**********/
	/*@dgz#20#*合法字符串测试。。***/
	/*cout<<validstring(2,3)<<endl;  
	cout<<validstring(3,4)<<endl;*/
	/*未通过的测试￥￥￥￥￥￥￥￥￥￥￥￥￥8*/
	/**************end**************/
	/*@dgz#21#test 移位*/
	//unsigned short int i=0;
	//int j=8,p;
	//p=j<<1;
	//i=i-1;
	//cout<<"j<<1 = "<<p<<endl<<"unsigned (-1) = "<<i<<endl<<"sizeof(unsigned short)"<<sizeof(unsigned short int)<<endl;
	////无符号short int 占2个字节，，其中 -1 即其能表示的最大值65535

	//u.i=0xf0f1f2f3;
	//cout<<hex<<u.i<<endl;//16进制格式输出i为f0f1f2f3
	//cout<<hex<<int(u.a)<<endl;
	////因为内存中数据存储是低位字节存入低地址，高位字节存入高地址，而数据地址采用低地址表示，a即为i低位字节的f3
	//cout<<sizeof(u)<<" || "<<sizeof(u.i)<<" || "<<sizeof(u.a)<<endl;
	//
	//int *pa=NULL;//将pa指向地址0处
	//int *pb=pa+15;//pb为15*4（字节）=60，转为16进制输出为3c
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
	cout<<"E 对应ASCII码->0x"<<hex<<static_cast<int>(ch)<<endl;
	//cout<<hex<<92<<endl;
	/**********end***********/

	/////////////////////////////////*****bottom*****////////////////////////////
	cout<<endl<<"please press the Enter key to exit.... "<<endl;
	getchar();
	return 0;
}