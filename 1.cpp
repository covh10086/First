#include<stdio.h>

int safe(){
	int Finish[100]={0};  //系统是否有足够的资源分配给进程，使之完成运行
	//运行开始时先令Finish[i]=0,当有足够的资源分配给进程时，再令Finish[i]=1
	int i=0;
	for(i=0;i<N;i++){
		work[i]=Available[i];//在执行安全算法开始时，work=Available 
	} 
	int j=0,count=0,k=0,m=0;
	for(i=0;i<M;i++){
		count=0; //遍历完一个进程就将count置为0，对新的i号进程资源达标数进行计数
		for(j=0;j<N;j++){
			//Finish[i]=0表示未执行
			if(Finish[i]==0&&Need[i][j]<=work[j]){
				
			} 
		} 
	}
}

int main(){
	printf("---------------------------------------------------------------------------------\n");
	printf("                                银行家算法                                       \n");
	printf("---------------------------------------------------------------------------------\n");
	
}

