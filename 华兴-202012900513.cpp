#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE 100
typedef int ElemType;
//顺序表数据：
//1.数据元素   2.数据元素个数
typedef struct
{
 ElemType elem[MAXSIZE];
 int length;                             //元素个数
}SqList;

//线性表插入算法：在第 i个元素之前插入元素e
int ListInsert(SqList *L,int i,ElemType e)
{
 int k;
 if(i<1 || i>L->length+2) //插入位置不正确，插入不成功
     return 0;
 if(L->length>=MAXSIZE-1)   //顺序表满，插入不成功
     return 0;
 //1.将数据(i~length-1)后移
 for(k=L->length;k>=i-1;k--)
   L->elem[k+1]=L->elem[k] ;                                
 //2.将e插入到第i个位置
   L->elem[i-1]=e;                       
 //3.修改顺序表长度
   L->length++;                        
    return 1; 
}
//线性表删除算法：删除第 i个元素
int ListDelete(SqList *L,int i)
{
 int k;
 
 if(L->length==0)    //表空，删除不成功
     return 0; 
 if(i<0 || i>=L->length)  //删除位置不正确，删除不成功
     return 0;
    
 //1.将第i+1个元素到第length-1个元素往前移
 for(k=i+1;k<L->length;k++)
     L->elem[k+1]=L->elem[k] ;                               
 
 //2.顺序表长度-1
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
     while(i<=LA->length) /*当表LA长则将表LA余下的元素赋给表LC*/
     { LC->elem[k]=LA->elem[i];i++;k++;}
     while(j<=LB->length)  /*当表LB长则将表LB余下的元素赋给表LC*/
     { LC->elem[k]=LB->elem[j];j++;k++;}
 	LC->length=LA->length+LB->length+1;                        
}

//输出顺序表的数据元素
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
 LA->length=0 ;       // 初始化顺序表 LA
 LB=(SqList *)malloc(sizeof(SqList)); 
 LB->length=0;       // 初始化顺序表LB
 LC=(SqList *)malloc(sizeof(SqList));
 LC->length=0;      // 初始化顺序表 LC        
 
//插入数据LA
 ListInsert(LA,1,2);
 ListInsert(LA,2,2);
 ListInsert(LA,3,3);
//插入数据LB
 ListInsert(LB,1,1);
 ListInsert(LB,2,3);
 ListInsert(LB,3,3);
 ListInsert(LB,4,4);
 printf("插入后：\n");
 printf("LA:");
 printList(LA);    //输出顺序表
 printf("\nLB:");
 printList(LB);    //输出顺序表
 merge(LA,LB,LC);    //合并LA,LB
 printf("\nLC:");
 printList(LC);    //输出顺序表
}
