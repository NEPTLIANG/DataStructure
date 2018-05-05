#include <iostream>
using namespace std ;

int calc(int num[])  //以可修改方式传递数组地址值给子函数时不用加&，数组名后要加中括号
//计算字符出现频度函数
{
    char a ;
    while ( (a=getchar())!='#' )  //既然用gets()各种麻烦就不要用了，用getchar()输入一个判断一个，直到遇到终止符#为止
    {
        if ( a>='0' && a<='9' )
        {
            num[a-48]++ ;  //算法核心：利用数组存放大量数据的值，直接对字符自身的性质——ASCII码值按照一定规律转换为数组下标
        }
        if ( a>='A' && a<='Z' )
        {
            num[a-55]++ ;
        }
    }
    return 0 ;
}

int main()
{
    static int i , num[36] ;  //利用声明静态变量会自动把变量的值初始化为零的性质声明变量
    char y ;
    calc(num) ;  //调用算法实现函数
    for ( int i=0 ; i<36 ; i++ )
    {
        if ( num[i]>0 && i<10 )
        {
            y = i+48 ;  //通过把字符对应的ASCII码值赋给字符变量来实现在输出流中输出ASCII码值对应的字符
            cout << "字符" << y << "出现的频度为" << num[i] << endl ;
        }
        if ( num[i]>0 && i>=10 )
        {
            y = i+55 ;
            cout << "字符" << y << "出现的频度为" << num[i] << endl ;
        }
    }
}
