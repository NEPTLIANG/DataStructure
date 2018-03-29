#include <iostream>  //C++输入输出流头文件
#include <fstream>  //文件处理头文件
#include <string>  //字符串头文件
#include <iomanip>  //控制输出格式
using namespace std ;
#define OK 1  //定义几个常量作状态码
#define ERROR 0
#define OVERFLOW -2  //溢出
typedef int Status ; ///Status是函数返回值类型，其值是函数结果状态代码（定义Status作int)
typedef int ElemType ; ///ElemType为可定义的数据类型，此设为int类型（定义ElemType作int）

#define MAXSIZE 100  ///顺序表可能达到的最大长度
struct Book
//定义结构体Book
{
	string id ;  //书籍的ISBN
	string name ;  //书名
	double price ;  //书籍的定价
} ;  //别忘了定义结构体后要加分号
