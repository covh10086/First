#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE 100
typedef int ElemType;
//˳������ݣ�
//1.����Ԫ��   2.����Ԫ�ظ���
typedef struct
{
 ElemType elem[MAXSIZE];
 int length;                             //Ԫ�ظ���
}SqList;

//���Ա�����㷨���ڵ� i��Ԫ��֮ǰ����Ԫ��e
int ListInsert(SqList *L,int i,ElemType e)
{
 int k;
 if(i<1 || i>L->length+2) //����λ�ò���ȷ�����벻�ɹ�
     return 0;
 if(L->length>=MAXSIZE-1)   //˳����������벻�ɹ�
     return 0;
 //1.������(i~length-1)����
 for(k=L->length;k>=i-1;k--)
   L->elem[k+1]=L->elem[k] ;                                
 //2.��e���뵽��i��λ��
   L->elem[i-1]=e;                       
 //3.�޸�˳�����
   L->length++;                        
    return 1; 
}
//���Ա�ɾ���㷨��ɾ���� i��Ԫ��
int ListDelete(SqList *L,int i)
{
 int k;
 
 if(L->length==0)    //��գ�ɾ�����ɹ�
     return 0; 
 if(i<0 || i>=L->length)  //ɾ��λ�ò���ȷ��ɾ�����ɹ�
     return 0;
    
 //1.����i+1��Ԫ�ص���length-1��Ԫ����ǰ��
 for(k=i+1;k<L->length;k++)
     L->elem[k+1]=L->elem[k] ;                               
 
 //2.˳�����-1
     L->length--;                      
 
 return 1;
}
void merge(SqList *LA,SqList *LB,SqList *LC)
{   int i=0,j=0,k=0;
    while(i<=LA->length&&j<=LB->length)
       if(LA->elem[i]<=LB->elem[j])
    {LC->elem[k]=LA->elem[i];i++;k++;}
    else
    {LC->elem[k]=LB->elem[j];j++;k++;}
     while(i<=LA->length) /*����LA���򽫱�LA���µ�Ԫ�ظ�����LC*/
     { LC->elem[k]=LA->elem[i];i++;k++;}
     while(j<=LB->length)  /*����LB���򽫱�LB���µ�Ԫ�ظ�����LC*/
     { LC->elem[k]=LB->elem[j];j++;k++;}
 	LC->length=LA->length+LB->length+1;                        
}

//���˳��������Ԫ��
void printList(SqList *L)
{
 int i;
 for(i=0;i<L->length;i++)
   printf("%4d",L->elem[i]);
 return; 
}
int main()
{
 SqList *LA,*LB,*LC;
 int i;
 LA=(SqList *)malloc(sizeof(SqList)); 
 LA->length=0 ;       // ��ʼ��˳��� LA
 LB=(SqList *)malloc(sizeof(SqList)); 
 LB->length=0;       // ��ʼ��˳���LB
 LC=(SqList *)malloc(sizeof(SqList));
 LC->length=0;      // ��ʼ��˳��� LC        
 
//��������LA
 ListInsert(LA,1,2);
 ListInsert(LA,2,2);
 ListInsert(LA,3,3);
//��������LB
 ListInsert(LB,1,1);
 ListInsert(LB,2,3);
 ListInsert(LB,3,3);
 ListInsert(LB,4,4);
 printf("�����\n");
 printf("LA:");
 printList(LA);    //���˳���
 printf("\nLB:");
 printList(LB);    //���˳���
 merge(LA,LB,LC);    //�ϲ�LA,LB
 printf("\nLC:");
 printList(LC);    //���˳���
}
