#include<stdio.h> 
int main(){
	int num[] = {1,3,5,2,1,9,1,3,1,2,1};
	int maxCount;
	int maxItem;
	int length = sizeof(num) / sizeof(num[0]);
		for(int i = 0; i < length; i++){
			int count = 0;
			for(int j = 0; j<length; j++){
				if(num[i]==num[j]){
					count++; 
				} 
			}
			if(count>maxCount){
				maxCount = count;
				maxItem = num[i]; 
			}
		}
			printf("Phan tu: %d xuat hien nhieu nhat %d lan ", maxItem,maxCount); 
		
		return 0; 
} 
