#include<stdio.h>
int main(){
	int num[4][5]={{22,12,48,75,64},{68,37,88,86,36},{72,49,52,54},{15,87,94,72,78}};
	int max; 
	for(int i=0;i<4;i++){
		for(int j=0; j<5;j++){
		if(max<num[i][j]){
			max=num[i][j];
		} 
		} 
	}
	printf(" Max = %d",max); 
	return 0; 
}  
