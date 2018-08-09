#include <iostream>
using namespace std ;
typedef char elemType ;
typedef int status ;
#define MAXSIZE 100
#define OK 1 ;
#define ERROR 0 ;
#define OVERFLOW -1 ;

typedef struct ArcNode
{
    elemType data ;
    int ArcWeig ;
    ArcNode *next ;
} Node ;

typedef struct VertexNode
{
    elemType data ;
    Node *next ;
} VNode , AdjList[MAXSIZE] ;

typedef struct
{
    AdjList list ;
    int realLeng , arcNum ;
} Graph ;

status InsertVex(Graph &G , elemType v)
{
    //G->list[G->realLeng++]->next = new Node ;
    G.realLeng++ ;
    G.list[G.realLeng-1].data = v ;
    //G->list[LJList->realLeng]->next = NULL ;
    //cout<<G.list[G.realLeng].data<<endl;
    return OK ;
}

int locate(Graph G , elemType data)
{
    for ( int i=0 ; i<G.realLeng ; i++ )
    {
        if ( G.list[i].data == data )
        {
            return i ;
        }
    }
}

status create(Graph &G)
{
    int nodeNum , edgeNum , newArcWeig ;
    elemType originData , destinationData ;
    G.realLeng = G.arcNum = 0 ;
    cin >> nodeNum ;
    for ( int i=0 ; i<nodeNum ; i++ )
    {
        cin >> G.list[i].data ;
        G.list[i].next = NULL ;
        G.realLeng++ ;
    }
    cin >> edgeNum ;
    for ( int i=0 ; i<edgeNum ; i++ )
    {
        cin >> originData >> destinationData >> newArcWeig ;
        int originSubscript = locate(G , originData) , destinationSubscript = locate(G , destinationData) ;
        Node *newArcNode = new Node ;
        newArcNode->data = destinationData ;
        newArcNode->ArcWeig = newArcWeig ;
        newArcNode->next = G.list[originSubscript].next ;
        G.list[originSubscript].next = newArcNode ;
        G.arcNum++ ;
        /*
        List p = &G->list[j] ;
        while ( p->next )
        {
             p = p->next ;
        }
        p->next = new Node ;
        p = p->next ;
        p->next->data = node2 ;
        p->next->edgeweig = edgeweig1 ;
        p->next->next = NULL ;
        */
    }
    return OK ;
}

int print(Graph G)
{
    //cout<<G.list[G.realLeng];
    for ( int i=0 ; i<G.realLeng ; i++ )
    {
        //cout<<i<<" ";
        cout << G.list[i].data << "|" ;
        Node *p = G.list[i].next ;
        while ( p )
        {
            cout << p->data << " ";
            p = p->next ;
        }
        cout << endl ;
    }
    //cout<<G.realLeng<<" "<<G.list[G.realLeng].data;
}

/*
status print(LJPoin G , int i)
{
    cout << G->list[i]->data << endl ;
    Node *p = G->list[i]->next ;
    if ( p )
    {
        //cout << p->data ;
        print(G , locate(G , p->data) ) ;
    }
    if ( p->next )
    {
        print(G , locate(G , p->next->data) ) ;
    }
}
*/

int main ()
{
    elemType v ;
    Graph *G = new Graph ;
    create(*G) ;
    cin >> v ;
    print(*G) ;
    InsertVex(*G , v) ;
    print(*G) ;
    return 0 ;
}
