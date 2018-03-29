#include <iostream>
using namespace std ;

int dele(int *p,int item)
{
	for ( int i=0 ; *p[i] ; i++ )
	{
		if ( *p[i]==item )
		{
			*p[i] = *p[i+1] ;
			cout << *p[i] ;
		}
		else
		{
			cout << *p[i] ;
		}
	}
	return 0 ;
}

int main()
{
	int a[100] , item ;
	cout << "请输入item及a[i]的内容" ;
	cin >> item >> a[100] ;
	dele(&a,item) ;
	return 0 ;
}
