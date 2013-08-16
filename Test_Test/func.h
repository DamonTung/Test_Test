#include <vector>
using namespace std;
//int  a=4;
void removecomment(char *buf,size_t size);
int  &f(int  x);
void swap(int x,int y);
class A
{
public:
	A();/*{m_a=1;m_b=2;};*/
	~A(){};
	void fun();
	//{
	//	//printf("%d%d",m_a,m_b);
	//}
private:
	int m_a;
	int m_b;
};

class B
{
public:
	B()/*{m_c=3;}*/;
	~B(){};
	void fun();
	//{
	//	//printf("%d",m_c);
	//}
private:
	int m_c;

};
struct S{
	int i;
	//int j;//此处多余一个空间则可以通过
	int *p;
};

void PrintfArray(char *p_str,char *s_str,int *print_arr,int p_len,int s_len,int print_arr_num,int p_start_num,int s_start_num);
void ConnetSequence(char *p_str,char *s_str);

#define  RECURSION 0
#define  NO_RECURSION 1
#define SIMPLE 1
#define SIMPLE_N 0

int f(int m,int n);

void matching(int a[],int b[],int k);

//#define max(a,b) ((a)<(b)?(b):(a))
//#define abs(a) ((a)>0?(a):-(a))

int SpiralQueue(int x,int y);
extern int arr[10][10];
void Inc_Arr(int n);

#define LOOP 1000

struct aircraft
{
	int wingspan;
	int passengers;
	union 
	{
		float fuel_load;
		float bomb_load;
		int pallets;
	};
};
union u_1
{
	float fuel_load;
	float bomb_load;
	int pallets;
};

void print_vec(vector<int> v);


template<typename t>
struct tcontainer{
	virtual void push(const t&)=0;
	virtual void pop()=0;
	virtual const t& begin()=0;
	virtual const t& end()=0;
	virtual size_t size()=0;
};
template<typename t>
struct tvector:public tcontainer<t>{
	static const size_t _step=100;
	tvector(){
		_size=0;
		_cap=_step;
		buf=0;
		re_capacity(_cap);
	};
	~tvector(){
		free(buf);
	};
	void re_capacity(size_t s){
		if(!buf)
			buf=(t*)malloc(sizeof(t)*s);
		else
			buf=(t*)realloc(buf,sizeof(t)*s);
	}
	virtual void push(const t& v){
		if(_size>=_cap)
			re_capacity(_cap+=_step);
		buf[_size++]=v;
	}
	virtual void pop(){
		if(_size)
			_size--;
	}
	virtual const t& begin(){
		return buf[0];
	}
	virtual const t& end(){
		if(_size)
			return buf[_size-1];
	}
	virtual size_t size(){
		return _size;
	}
	const t& operator[] (size_t i){
		if(i>=0&&i<_size)
			return buf[i];
	}
private:
	size_t _size;
	size_t _cap;
	t* buf;
};

class a_1
{
	char k[3];
public:
	virtual void aa(){};
};
class b_1:public virtual a_1
{
	char j[3];
public:
	virtual void bb(){};
};
class c_1:public virtual b_1
{
	char i[3];
public:
	virtual void cc(){};
};

//int validstring(int n,int m);  
//bool in_array(string needle, string s[]);  
//string AZ="0abcdefghijklmnopqrstuvwxyz";  
//const int N=26;  

