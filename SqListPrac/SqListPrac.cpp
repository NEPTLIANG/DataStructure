#include <iostream>
using namespace std ;

struct Sqlist {
	int data ;
} ;

int input(Sqlist *L , int n)
{
	for ( int i=0 ; i<n ; i++ )
	{
		cin >> L[i].data ;
	}
	return 0 ;
}

int output(Sqlist *L , int n)
{
	for ( int i=0 ; i<n ; i++ )
	{
		cout << L[i].data ;
	}
	return 0 ;
}

int main()
{
	int n ;
	//Sqlist *L = new Sqlist ;
	Sqlist a[n] ;
	cin >> n ;
	input(a , n) ;
	output(a , n) ;
	return 0 ;
}
