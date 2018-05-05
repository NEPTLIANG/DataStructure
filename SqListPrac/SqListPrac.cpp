#include <iostream>
//在志愿者亭闲来无事，练习一下顺序表操作
using namespace std ;

struct Sqlist {  //定义顺序表结构体
	int data ;
} ;

int input(Sqlist *L , int n)
//输入
{
	for ( int i=0 ; i<n ; i++ )
	{
		cin >> L[i].data ;
	}
	return 0 ;
}

int output(Sqlist *L , int n)
//输出
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
