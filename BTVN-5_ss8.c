#include<stdio.h>
int main(){		  
	int num[4][5]={{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20}};
	int sum; 
	//Tong hang tren cung  
	 
	for(int i=0; i<5; i++){
		sum+=num[0][i];
	
	}printf("%d\n",sum); 
	//Tong bien ben phai

	for(int i=0; i<4;i++){
		sum+=num[i][3];
		 
	}printf("%d\n",sum);
	//Tong hang duoi cung

	for(int i=0; i<5;i++){
		sum+=num[2][i];
		 
	}printf("%d\n",sum);
	//Tong bien ben trai

	for(int i=0;i<4;i++){
		sum+=num[i][0];
		
	} 
	printf("Tong cac phan tu bien la: %d",sum); 
	return 0; 
} 
