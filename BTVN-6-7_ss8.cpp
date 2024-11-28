#include<stdio.h>
int main(){
	int sum; 
	int num[3][3]={{2,3,4},{6,4,7},{7,4,5}};
	for(int i=0;i<3;i++){
		for(int j=0;j<i;j++){
		printf("\t");
		}
		printf("%d",num[i][i]);
		sum+=num[i][i];
		printf("\n");
		}
		printf("Tong cua cac phan tu la: %d",sum); 
		
		return 0;
	}

