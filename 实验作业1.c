#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE 100
#define OK 1
#define ERROR 0
//��˳��洢�ṹ��C���Զ���
void InitList();
int ListLength();
typedef int ElemType;
	typedef struct
       {                          
        ElemType elem[MAXSIZE];                         
        int last;
		int length;                         
         }SeqList;                
//2����ʼ��
void InitList(SeqList *L)
{
       int * head;                          
       int length;
	   int  size ;                    
}
//3���ж��Ƿ�Ϊ�պ���ʾ���
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
//�������Ա�ĳ���
int ListLength(SeqList *L)
{
   Return (L->length);
}
//5����ȡֵ
int GetElem(SeqList *L,int i,ElemType &e)
{
    if(              ){
	    return 0;      
	}
	i--;
                  
    return true;
}
//6���ͷſռ�
void DestroyList(SeqList *L)
{
    free(L);
}
//8������Ԫ��
int  InsList(SeqList *L,int i, ElemType e)
{ 
	int k=0;
	if((i<1) || (i>L->last+2)) 
	{
		printf("����λ��i���Ϸ�");
		return(ERROR);
	}
	if(L->last>= MAXSIZE-1)
	{
		printf("������,�޷�����");
		return(ERROR);
	}

	for(k=L->last;k>=i-1;k--)   
		 L-elem[k+1]=L->elem[k]                            
	     L->elem{i-1}=e                        
	      L->last++                       
	return(OK);
}
//9��ɾ��Ԫ��
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
    printf("ɾ����Ԫ��Ϊ:%d\n",e);
    return true;
}
//������
main(){

    SeqList *L;
    ElemType e;
    printf("(1)˳����ʼ��L\n");
    InitList(L);
    printf("(2)���β���a,b,c,d,eԪ��\n");
    InsList(L);
    InsList(L,2,11);
    InsList(L,3,12);
    InsList(L,4,13);
    InsList(L,5,14);
    printf("(3)ӡ��˳���L\n");
    DispList(L);
    printf("(4)ӡ��˳���ĳ���%d\n",ListLength(L));
    printf("(5)�ж����Ա�Ϊ:%s\n",(ListLength(L)==0)?"��":"�ǿ�");
    GetElem(L,3,e);
    printf("(6)ӡ�����Ա��3��Ԫ��%d\n",e);
    printf("(7)ӡ��a��λ��:%d\n",Locate(L,10));
    printf("(8)�ڵ�4��Ԫ��λ���ϲ���Ԫ��999\n");
    InsList(L,4,999);
    printf("(9)ӡ�����Ա�\n");
    DispList(L);
    printf("(10)ɾ��L�ĵ�3��Ԫ��\n");
    DelList(L,3,e);
    printf("(11)ӡ�����Ա�L\n");
    DispList(L);
    printf("(12)�ͷ�˳���L\n");
    DestroyList(L);
}
