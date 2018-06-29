#include <iostream>
using namespace std ;
//课本第8章习题-3.(1)
typedef int elemType ;  //使用typedef定义数据类型方便日后修改数据类型
typedef int status ;  //使用typedef提高代码可读性
#define MAXSIZE 100 ;  //定义常量方便日后修改对应的值
#define OK 1 ;
#define ERROR 0 ;
#define OVERFLOW -1 ;  //定义状态码常量提高代码可读性

typedef struct Node
//定义结点结构体
{
    elemType data ;  //数据域
    Node *next ;  //指针域
} Node , *List ;  //链表一般不用像线性表一样另外定义一个结构体作表，直接通过判断当前指针是否置空判断是否遍历完成

status Sort(List &L)
//简单选择排序算法的实现，每次找出q后面的子表中的最小值后与q的值交换位置
{
    List q = L->next ;  //定义结点指针q指向首元结点
    while ( q )  //链表未遍历完，q结点还有下一个结点时，进入循环
    {
        List p = q->next ;  //定义结点指针p指向第一个子表的第一个结点
        List minAddr = q ;  //定义结点指针minAddr用于指向子表中的最小结点以便交换最小值与q的值，此处先使其指向q
        while ( p )  //子表未遍历完，当前结点非空时，进入循环
        {
            if ( minAddr->data>p->data )  //判断当前结点值是否比之前找出的最小值小
            {
                minAddr = p ;
            }//if(>)
            p = p->next ;  //无论上面的判断是否成立，都向后移动p指针，故置于判断之外
        }//while(p)
        if ( minAddr!=q )  //加个判断判断是否在子表中找到了比q小的值，如果没找到则无需交换
        {
            elemType a = minAddr->data ;
            minAddr->data = q->data ;
            q->data = a ;  //交换q结点值与子表中的最小值
        }//if(!=)
        q = q->next ;  //无论上面的判断是否成立，都向后移动q指针，故置于判断之外
    }//while(q)
    return OK ;
}//Sort()

status Print(List L)
//依次输出表中的值
{
    List p = L->next ;
    while ( p )
    {
        cout << p->data << endl ;
        p = p->next ;
    }//while(p)
    return OK ;
}//Print()

int main()
{
    cout << "简单选择排序算法实现" << endl << "请输入结点数：" ;
    int lengthInput ;
    cin >> lengthInput ;
    List L = new Node ;  //new一个结点作头结点并定义头指针L指向之
    L->next = NULL ;  //头结点的next指针分量置空
    List p = L ;  //定义结点指针p指向头结点
    cout << "请输入各结点的值并以空格间隔:" ;
    for ( int i=0 ; i<lengthInput ; i++ )  //依次输入各个结点的值
    {
        p->next = new Node ;  //new新结点并使p的next指针分量指向之
        p = p->next ;  //p指向新结点
        cin >> p->data ;  //输入新结点的值
        p->next = NULL ;  //新结点的next指针分量置空
    }//for(i)
    Sort(L) ;  //调用简单选择排序函数进行排序
    cout << "排序后表中的值依次为：" << endl ;
    Print(L) ;  //调用输出函数依次输出表中的值
    return 0 ;
}//main()
