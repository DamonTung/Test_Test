#include "func.h"
#include <string>
#include <iostream>

using namespace std;
static int a=4;
int  &f(int  x)

{
	a=a+x;

	return  a;

}

void swap(int x,int y){

	cout <<"交换之前:x="<<x<<",y="<<y<<endl;

	x=x^y;
	y=x^y;
	x=x^y;

	cout <<"交换之后:x="<<x<<",y="<<y<<endl;
}

void removecomment(char *buf,size_t size)
{
	char *p,*end,c;
	char *sq_start,*dq_start;
	char *lc_start,*bc_start;
	size_t len;
	p=buf;
	end=p+size;
	sq_start=NULL;
	dq_start=NULL;
	lc_start=NULL;
	bc_start=NULL;

	while(p<end)
	{
		c=*p;
		switch(c)
		{
		case '\'':
			if(dq_start||lc_start||bc_start)
			{
				p++;
				continue;
			}
			if(sq_start==NULL)
			{
				sq_start=p++;
			}
			else
			{
				len=p++ -sq_start;
				if(len==2&&*(sq_start +1)=='\\')
				{
					continue;
				}
				sq_start =NULL;
			}
			break;
		case '\"':
			if(sq_start||lc_start||bc_start){
				p++;
				continue;
			}
			if(dq_start==NULL){
				dq_start=p++;
			}else{
				if(*(p++ -1)=='\\'){
					continue;
				}
				dq_start=NULL;
			}
			break;
		case '/':
			if(sq_start||dq_start||lc_start||bc_start){
				p++;
				continue;
			}
			c=*(p+1);
			if(c=='/'){
				lc_start=p;
				p+=2;
			}else if (c=='*'){
				bc_start=p;
				p+=2;
			} else {
				p++;
			}
			break;
		case '*':
			if(sq_start||dq_start||lc_start||bc_start==NULL){
				p++;
				continue;
			}
			if(*(p+1)!='/'){
				p++;
				continue;
			}
			p+=2;
			memset(bc_start,' ',p-bc_start);
			bc_start=NULL;
			break;
		case '\n':
			if(lc_start==NULL){
				p++;
				continue;
			}
			c=*(p-1);
			memset(lc_start,' ',(c=='\r'?(p++ -1):p++)-lc_start);
			lc_start=NULL;
			break;
		default:
			p++;
			break;

		}
	}
	if(lc_start){
		memset(lc_start,' ',p-lc_start);
	}
}
//class A
//{
//public:
//	A(){m_a=1;m_b=2;};
//	~A(){};
//	void fun(){
//		printf("%d%d",m_a,m_b);
//	}
//private:
//	int m_a;
//	int m_b;
//};
//
//class B
//{
//public:
//	B(){m_c=3;};
//	~B(){};
//	void fun(){printf("%d",m_c);}
//private:
//	int m_c;
//
//};
A::A(){
	m_a=1;m_b=2;
}
B::B(){
	m_c=3;
}
void A::fun(){
	printf("%d%d",m_a,m_b);
}
void B::fun(){
	printf("%d",m_c);
}

void PrintfArray(char *p_str,char *s_str,int *print_arr,int p_len,int s_len,int print_arr_num,int p_start_num,int s_start_num){
	int pStartNum=p_start_num;
	int sStartNum=s_start_num;
	int printNum=print_arr_num;

	if(printNum==s_len){
		for(int i=0;i<s_len;i++){
			cout<<*(print_arr+i);
			cout<<" ";
		}
		cout<<endl;
		return ;
	}
	for(int i=pStartNum;i<p_len;i++){
		for(int j=sStartNum;j<s_len;j++){
			if(*(p_str+i)==*(s_str+j)){
				print_arr[printNum]=i+1;
				pStartNum=i;
				sStartNum=j;
				PrintfArray(p_str,s_str,print_arr,p_len,s_len,printNum+1,pStartNum+1,sStartNum+1);
			}
		}
	}
}
void ConnetSequence(char *p_str,char *s_str){
	int p_len=strlen(p_str);
	int s_len=strlen(s_str);
	int *print_arr=new int[s_len];
	unsigned int print_arr_num=0;

	if(NULL==p_str &&NULL==s_str){
		cout<<"string error"<<endl;
		return;
	}
	if(NULL==print_arr){
		cout<<"allocate error"<<endl;
		return;
	}
	PrintfArray(p_str,s_str,print_arr,p_len,s_len,0,0,0);
}



#if RECURSION
int f(int m,int n){
	if(1==m){
		return n;
	}
	if(1==n){
		return m;
	}
	return f(m-1,n)+f(m,n-1);
}
#endif

#if NO_RECURSION
int f(int m,int n){
	int a[10][10];
	for(int i=0;i!=m;++i){
		a[i][0]=i+1;
	}
	for(int i=0;i!=n;++i){
		a[0][i]=i+1;
	}
	for(int i=1;i!=m;++i)
		for(int j=1;j!=n;++j)
			a[i][j]=a[i-1][j]+a[i][j-1];
	return a[m-1][n-1];
}
#endif

/*等长数组元素匹配*/
void matching(int a[],int b[],int k){
	int i=0;
	while(i<=k-1){
		int j=0;
		while(j<=k-1){
			if(a[i]==b[j]){
				cout<<"a["<<i<<"] match b["<<j<<"]"<<endl;
				break;
			}
			j++;
		}
		i++;
	}
	cout<<endl;
}

/*螺旋队列 */
#if SIMPLE_N
int SpiralQueue(int x,int y){
	//cout<<"调用SIMPLE_N....."<<endl;
	int t=max(abs(x),abs(y));
	int u=t+t;
	int v=u-1;
	v=v*v+u;
	if(x==-t)
		v+=u+t-y;
	else if(y==-t)
		v+=3*u+x-t;
	else if(y==t)
		v+=t-x;
	else
		v+=y-t;
	return v;
}
#endif

#if SIMPLE
int SpiralQueue(int x,int y){
	//cout<<"调用SIMPLE....."<<endl;
	int c=max(abs(x),abs(y));
	int max=(2*c+1)*(2*c+1);
	if(x==-c)
		max+=3*x-y;
	else if(y==-c)
		max+=x+y;
	else if(y==c)
		max+=-x-5*y;
	else
		max+=y-7*x;
	return max;
}
#endif

/*顺时针依次增大矩阵*/
void Inc_Arr(int n){
	int m=1,j,i;
	for(i=0;i<n/2;i++){
		for(j=0;j<n-i;j++)
		{
			if(arr[i][j]==0)
				arr[i][j]=m++;
		}
		for(j=i+1;j<n-i;j++){
			if(arr[j][n-1-i]==0)
				arr[j][n-1-i]=m++;
		}
		for(j=n-i-1;j>i;j--){
			if(arr[n-i-1][j]==0)
				arr[n-i-1][j]=m++;
		}
		for(j=n-i-1;j>i;j--){
			if(arr[j][i]==0)
				arr[j][i]=m++;
		}
		if(n%2==1)
			arr[n/2][n/2]=m;
	}
}

void print_vec(vector<int> v){
	cout<<"\n vector size is: "<<v.size()<<endl;
	vector<int>::iterator p=v.begin();
}

//template<typename t>


//int validstring(int n,int m)  
//{  
//	// 尾数长度  
//	int j=0;  
//	string ws[N];  
//	//string fws[N];  
//	// 截断长度  
//	int cut=0;  
//	// 非尾数长度  
//	double size=0.0;  
//	// 交换介质  
//	string tmp;  
//	for(int i=1;i<=n;i++){  
//		tmp = AZ.at(i);  
//		if(2*i>n){  
//			ws[j]=tmp;  
//			//fws[i]=tmp;  
//			j++;  
//			size++;  
//		}  
//		if(2*i<=n){  
//
//			if((i+1)>= 2*i && !in_array(tmp, ws)){  
//				//fws[i]=tmp;  
//				cut++;  
//				size++;  
//			}  
//		}  
//	}  
//	//int W=sizeof(ws);  
//	//int F=sizeof(fws);  
//	int C=int(pow(size, (m-1)));  
//
//	cut = (m-1<=2)?cut:(C/size-((size-cut)*(m-2)))*cut;  
//
//	return (C-cut)*j;  
//}  
//
//bool in_array(string needle, string s[])  
//{  
//	for(int i=0;i<26;i++)  
//	{  
//		if(s[i]!="" && s[i] == needle)  
//		{  
//			return true;  
//		}  
//	}  
//	return false;  
//}  