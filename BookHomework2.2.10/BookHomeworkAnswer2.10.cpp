#include <iostream>
using namespace std ;
//作业答案

void Delete(int A[],int n)
//A是有n个元素的一维数组，本算法删除A中所有值为item的元素
{
		int item ;
		cin >> item ;
		int i = 1 , j = n ;  //设置数组低、高端指针（下标）
		while ( i<j )
		{
				while ( i<j && A[i]!=item )
				{
						i++;  //若值不为item,左移指针
				}
				if ( i<j )
				{
						while ( i<j && A[j]==item )
						{
								j--;  //若右端元素为item,指针左移
						}
				}
				if ( i<j )
				{
						A[i++] = A[j--];
				}
		}
}

int main()
{
		int n=5 , i , A[5] ;
		for ( i=0 ; i<5 ; i++ )
		{
				cin >> A[i] ;
		}
		Delete(A,n) ;
		for ( i=0 ; i<4 ; i++ )
		{
				cout << A[i] ;
		}
		return 0 ;
}
