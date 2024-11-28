#include<stdio.h>
int main(){
	int num[8]={41,37,18,13,4,20,13,6,82,87};
	
	for(int i=7; i>=0;i--){
		printf("\nnum [%d] = %d ",i+1,num[i]); 
	}
	return 0; 
} 
