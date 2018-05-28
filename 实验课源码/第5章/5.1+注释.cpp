//�㷨5.1 ��������ĵݹ��㷨
#include<iostream>
using namespace std;
typedef struct BiNode{				//������Ͷ���
	char data;  //������
	struct BiNode *lchild,*rchild;  //ָ������������������
}BiTNode,*BiTree;  //����ָ����Ľṹ������ָ�������Ľṹ��ָ��

//���㷨5.3 ���������˳������������
void CreateBiTree(BiTree &T){	
	//�������������������н���ֵ��һ���ַ������������������ʾ�Ķ�����T
	//����������ݵ���ʱ�����󸳸��½��������Ȼ��ݹ���ô��������������ֱ𴴽�����������ֱ������#������ǰ����
	char ch;
	cin >> ch;
	if(ch=='#')  T=NULL;			//��#������ǰ�������������������������
	else{							
		T=new BiTNode;				//�����½�������ڵ㲢ʹ���������ݽ����Ľڵ�ָ��ָ��֮
		T->data=ch;					//������ֵ
		CreateBiTree(T->lchild);	//�ݹ鴴��������
		CreateBiTree(T->rchild);	//�ݹ鴴��������
	}								//else
}									//CreateBiTree

void InOrderTraverse(BiTree T){  
	//�������������T�ĵݹ��㷨
	//��T�ǿգ��ݹ����������������������������ֱ��������Ϊ�գ������ǰ����������Ȼ�󷵻ظ������������򲢵ݹ��������������������������
	if(T){							
		InOrderTraverse(T->lchild);	//����������
		cout << T->data;			//���������
		InOrderTraverse(T->rchild);	//����������
	}
}

void main(){
	BiTree tree;					//������ָ��
	cout<<"�����뽨��������������У�\n";
	CreateBiTree(tree);				//���ý��������������������ָ�봫�ݽ�ȥ
	cout<<"��������Ľ��Ϊ��\n";
	InOrderTraverse(tree);			//���ñ�������������
	cout<<endl;
}
