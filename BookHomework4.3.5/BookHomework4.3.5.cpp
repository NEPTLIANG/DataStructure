#include <iostream>
using namespace std ;
//判断二维数组中所有元素是否互不相同

int comp(int m,int n,int x,int y,int a[3][4])
//comparison,将当前a[x][y]与后面各元素对比，判断是否相同
{
    for ( int j=y ; j<n ; j++ )
    {
        for ( int i=x ; i<m ; i++ )
        {
            if ( a[i][j]==a[x][y] )  //判断
            {
                return 0 ;
            }
        }
    }
    return 1 ;
}

int trav(int m,int n,int a[3][4])
//traverse,遍历数组，通过comp()子函数将各元素与其后面的元素对比
{
    for ( int y=1 ; y<=n ; y++ )
    {
        for ( int x=1 ; x<=m ; x++ )
        {
            if ( comp(m,n,x,y,a)==0 )  //调用comp()子函数
            {
                return 0 ;
            }
        }
    }
    return 1 ;
}

/*
int comp(int x,int y,int a)
{
    for ( int j=y ; j<n ; j++ )
    {
        for ( int i=x ; i<m ; i++ )
        {
            if ( a[i][j]==a[x][y] )
            {
                return 0 ;
            }
        }
    }
}
*/

int main()
{
    int a[3][4] ;
    int m=3 , n=4 ;
    a[1][1] = 1 ;
    a[1][2] = 2 ;
    a[1][3] = 3 ;
    a[1][4] = 4 ;
    a[2][1] = 5 ;
    a[2][2] = 6 ;
    a[2][3] = 7 ;
    a[2][4] = 8 ;
    a[3][1] = 9 ;
    a[3][2] = 10 ;
    a[3][3] = 11 ;
    a[3][4] = 12 ;
    if ( trav(m,n,a)==0 )  //调用trav()子函数
    {
        cout << "no" << endl ;
    }
    else
    {
        cout << "yes" << endl ;
    }
}
