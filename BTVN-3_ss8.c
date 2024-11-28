#include<stdio.h>
int main(){
	int n;
	printf("Moi nhap so hang va so cot ");
	scanf("%d",&n); 
	int num[n][n];
	for(int i=0;i<n;i++){
		for(int j=0; j<n;j++){
		printf("\nMoi nhap vao so nguyen thu %d cua hang %d: ",j+1,i+1);
		scanf("%d",&num[i][j]); 
		} 
	}
	for(int i=0;i<n;i++){
		for(int j=0; j<n;j++){
			printf("%d\t",num[i][j]);
		}
		printf("\n"); 
	}
	return 0; 
} 
