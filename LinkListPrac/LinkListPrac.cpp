#include <iostream>
using namespace std ;

struct Node {
	int data ;
	Node *next ;
} ;

int input(int n , Node *p)
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
