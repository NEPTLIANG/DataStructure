#include <iostream>
#include <string.h>
#include <cstdio>
using namespace std ;

int calc(char a[1000] , int num[36])
{
    //static int num[36] ;
    for ( int i=0 ; a[i] ; i++ )
    {
        if ( a[i]>='0' && a[i]<='9' )
        {
            num[a[i]-48]++ ;
        }
        if ( a[i]>='A' && a[i]<='Z' )
        {
            num[a[i]-55]++ ;
        }
    }
    return 0 ;
}

int main()
{
    static int i , num[36] ;
    char y , a[1000] ;
    gets(a) ;
    calc(a , num) ;
    for ( int i=0 ; i<36 ; i++ )
    {
        if ( num[i]>0 && i<10 )
        {
            y = i+48 ;
            cout << "字符" << y << "出现的频度为" << num[i] << endl ;
        }
        if ( num[i]>0 && i>=10 )
        {
            y = i+55 ;
            cout << "字符" << y << "出现的频度为" << num[i] << endl ;
        }
    }
}
