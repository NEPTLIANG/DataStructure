#include <iostream>
using namespace std ;
//在志愿者亭闲来无事，写会BUG，练习一下链表操作  2018.04.21.SAT

struct Node {  //定义结点结构体
	int data ;
	Node *next ;
} ;

int input(int n , Node *p)
//输入
{
	//Node *p = L ;
	for ( int i=0 ; i<n ; i++ )
	{
		cin >> p->data ;
		p->next = new Node ;
		p = p->next ;
	}
	return 0 ;
}

int output(int n , Node *p)
//输出
{
	cout << "Data of the link list:" ;
	while ( p->next )
	{
		cout << p->data << " " ;
		p = p->next ;
	}
	cout << endl ;
	return 0 ;
}

int insert(int n , int a , Node *p)
//插入结点
{
	for ( int i=0 ; i<a ; i++ )
	{
		p = p->next ;
	}
	return 0 ;
}

int main()
{
	int n ;
	Node *L = new Node ;
	L->next = NULL ;
	cout << "Please input the length of the link list:" ;
	cin >> n ;
	cout << "Please input the data of the node:" ;
	input(n , L) ;
	output(n , L) ;
	return 0 ;
}
