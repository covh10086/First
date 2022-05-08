#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE 100
#define OK 1
#define ERROR 0
//、顺序存储结构的C语言定义
void InitList();
int ListLength();
typedef int ElemType;
	typedef struct
       {                          
        ElemType elem[MAXSIZE];                         
        int last;
		int length;                         
         }SeqList;                
//2、初始化
void InitList(SeqList *L)
{
       int * head;                          
       int length;
	   int  size ;                    
}
//3、判断是否为空和显示结果
//bool ListEmpty(SeqList *L)
//{
                            
                                 
//}
int DispList(SeqList *L)
{
    if(ListEmpty(L))
        return 0;

    for(int i=0; i<L->last; i++){
		printf("%d ",L->elem[i]);
	}   
    printf("\n");
}
//、求线性表的长度
int ListLength(SeqList *L)
{
   Return (L->length);
}
//5、存取值
int GetElem(SeqList *L,int i,ElemType &e)
{
    if(              ){
	    return 0;      
	}
	i--;
                  
    return true;
}
//6、释放空间
void DestroyList(SeqList *L)
{
    free(L);
}
//8、插入元素
int  InsList(SeqList *L,int i, ElemType e)
{ 
	int k=0;
	if((i<1) || (i>L->last+2)) 
	{
		printf("插入位置i不合法");
		return(ERROR);
	}
	if(L->last>= MAXSIZE-1)
	{
		printf("表已满,无法插入");
		return(ERROR);
	}

	for(k=L->last;k>=i-1;k--)   
		 L-elem[k+1]=L->elem[k]                            
	     L->elem{i-1}=e                        
	      L->last++                       
	return(OK);
}
//9、删除元素
int DelList(SeqList *L,int i, ElemType e)   
{ 
    int j;
    if(i<1||i>L->last)
	{
        return false;
    }
    
    i--;
    e=L->elem[i];
    for(j=i; j<L->last-1; j++)
	{
         L->elem{k-1]=L->elem[k]                                  
    }
    L->last--;
    printf("删除的元素为:%d\n",e);
    return true;
}
//主程序
main(){

    SeqList *L;
    ElemType e;
    printf("(1)顺序表初始化L\n");
    InitList(L);
    printf("(2)依次插入a,b,c,d,e元素\n");
    InsList(L);
    InsList(L,2,11);
    InsList(L,3,12);
    InsList(L,4,13);
    InsList(L,5,14);
    printf("(3)印出顺序表L\n");
    DispList(L);
    printf("(4)印出顺序表的长度%d\n",ListLength(L));
    printf("(5)判断线性表为:%s\n",(ListLength(L)==0)?"空":"非空");
    GetElem(L,3,e);
    printf("(6)印出线性表第3个元素%d\n",e);
    printf("(7)印出a的位置:%d\n",Locate(L,10));
    printf("(8)在第4个元素位置上插入元素999\n");
    InsList(L,4,999);
    printf("(9)印出线性表：\n");
    DispList(L);
    printf("(10)删除L的第3个元素\n");
    DelList(L,3,e);
    printf("(11)印出线性表L\n");
    DispList(L);
    printf("(12)释放顺序表L\n");
    DestroyList(L);
}
