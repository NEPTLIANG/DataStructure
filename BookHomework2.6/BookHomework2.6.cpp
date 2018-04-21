#include <iostream>
using namespace std;
//课本P53第二章习题2.(6):设计一个算法，通过一遍遍历确定长度为n的单链表中值最大的结点
//不写注释过了一个星期真的不知道自己写的啥杰宝玩意了。。。怕了怕了

struct Node
//定义结构体Node
{
    int data ;  //数据域
    Node *next ;  //指针域，构造一个Node指针next用以保存下一个节点的地址值
} ;  //LNode ;  //定义一个Node变量LNode

Node Find(Node *L)
//算法实现：查找值最大的结点并返回之
{
    Node *p=L->next , *max=p ;
    //int max=p->data ;
    while ( p )  //p才是整型值，才能用于条件判断；*p是Node类型，不能用于判断
    {
        if ( p->data > max->data )
        {
            max->data = p->data ;
        }
        p = p->next ;
    }
    return max ;
}

/*  你这TM是顺序表的操作
int Find(int n , Node list[])
//算法实现函数，找出表中的最大值
{
    int max=list[0].data ;
    for ( int i=0 ; i<n ; i++ )
    {
        if ( list[i].data>max )
        {
            max = list[i].data ;
        }
    }
    return max ;
}
*/

int main()
{
    Node *L = new Node ;  //生成一个空链表的头结点并定义头指针L指向之
    L->next = NULL ;  //将空链表的尾指针（此处也是头指针）的数据域设为空值以便算法实现函数中的循环判断是否已遍历完链表
    Node *r = L ;  //定义尾指针r指向头结点
    //p = L->next ;  //定义指针p指向首元结点
    int n ;
    cout << "请输入表的长度：" ;
    cin >> n ;
    //Node list[n] ;  //定义一个Node数组list //你这TM是顺序表的操作
    cout << "请输入各节点的数据并以空格间隔：" ;
    /* for ( int i=0 ; i<n ; i++ )
    {
        scanf("%d" , &list[i].data) ;
    }  */
    for ( int i=0 ; i<n ; i++ )
    {
        Node *p = new Node ;  //生成新结点并定义Node指针p指向之
        cin >> p->data ;
        r->next = p ;  //将新结点*p插入尾结点*r之后
        p->next = NULL ;  //将新的尾结点*p的指针域设为空值
        r = p ;  //r指向新的尾结点*p
        //p = p->next ;  //移动指针p使之指向下一结点
    }
    Node *returnNode=Find(L) ;
    cout << returnNode->data ;
}
