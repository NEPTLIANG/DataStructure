//算法5.1 中序遍历的递归算法
#include<iostream>
using namespace std;
typedef struct BiNode{				//结点类型定义
	char data;  //数据域
	struct BiNode *lchild,*rchild;  //指针域：左子树、右子树
}BiTNode,*BiTree;  //定义指向结点的结构体名、指向树根的结构体指针

//用算法5.3 先序遍历的顺序建立二叉链表
void CreateBiTree(BiTree &T){	
	//按先序次序输入二叉树中结点的值（一个字符），创建二叉链表表示的二叉树T
	//逐个输入数据到临时变量后赋给新结点数据域，然后递归调用创建二叉树函数分别创建左右子树，直到遇到#结束当前子树
	char ch;
	cin >> ch;
	if(ch=='#')  T=NULL;			//遇#结束当前子树，否则继续创建左右子树
	else{							
		T=new BiTNode;				//生成新结点作根节点并使主函数传递进来的节点指针指向之
		T->data=ch;					//数据域赋值
		CreateBiTree(T->lchild);	//递归创建左子树
		CreateBiTree(T->rchild);	//递归创建右子树
	}								//else
}									//CreateBiTree

void InOrderTraverse(BiTree T){  
	//中序遍历二叉树T的递归算法
	//当T非空，递归调用子树遍历函数遍历左子树，直到左子树为空，输出当前结点的数据域，然后返回父结点输出数据域并递归调用子树遍历函数遍历右子树
	if(T){							
		InOrderTraverse(T->lchild);	//遍历左子树
		cout << T->data;			//输出数据域
		InOrderTraverse(T->rchild);	//遍历右子树
	}
}

void main(){
	BiTree tree;					//定义结点指针
	cout<<"请输入建立二叉链表的序列：\n";
	CreateBiTree(tree);				//调用建立二叉树函数并将结点指针传递进去
	cout<<"中序遍历的结果为：\n";
	InOrderTraverse(tree);			//调用遍历二叉树函数
	cout<<endl;
}
