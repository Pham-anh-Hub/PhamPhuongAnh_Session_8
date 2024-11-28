#include<stdio.h>
int main(){
	int sum;  
	int num[3][3]={{2,3,4},{6,4,7},{7,4,5}};
	for(int i=2;i>=0;i--){
		for(int j=0;j<(2-i);j++){
		printf("\t");
		}
		printf("%d",num[i][3-i-1]);
		sum+=num[i][3-i-1];
		printf("\n");
		}
		printf("Tong cua cac phan tu la: %d",sum); 
		
		return 0;
	}

