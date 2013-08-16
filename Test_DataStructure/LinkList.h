/*单链表*/
typedef struct student
{
	int data;
	struct student *next;
}node;
//node *mid;
node *creat();
int length(node *head);
void print(node *head);
node *del(node *head,int num);
node *insert(node *head,int num);
node *sort(node *head);
node *reverse(node *head);
node *searchmid(node *head,node *mid);
/**end**/

/*双链表*/
typedef struct student_d
{
	int data;
	struct student_d *next;
	struct student_d *pre;
}dnode;
dnode *creat_d();
dnode *del_d(dnode *head,int mum);
dnode *insert_d(dnode *head,int num);
int length_d(dnode *head);
void print_d(dnode *head);
/**end**/

/*循环链表。。约瑟夫环问题解决**/
#define  ERROR 0
typedef struct LNode{
	int data;
	struct LNode *link;
}LNode,*LinkList;
void JOSEPHUS(int n, int k,int m);
/*end*/

//队列的插入与删除
typedef struct student_q{
	int data;
	struct student_q *next;
}qnode;
typedef struct linkqueue{
	qnode *first,*rear;
}queue;

queue *insert_q(queue *HQ,int x);
queue *del_q(queue *HQ);