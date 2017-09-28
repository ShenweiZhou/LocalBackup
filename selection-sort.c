//This is a program to do selection-sort in an array.

#include <stdio.h>

int main(void){
	int A[6]={23,24,53,214,12,52};
	int i;
	int j;
	int s;
	int k;
	
	//before sorting
	
	printf("Before sorting A= ");
	for(i=0;i<6;i++){
		printf("%d ",A[i]);
	}
	printf("\n");
	
	//Sorting starts
	for(i=0;i<5;i++){
		s=i;
		for(j=i+1;j<6;j++){
			if(A[s]>A[j]){
				s=j;
			}
		
		}
		k=A[s];
		A[s]=A[i];
		A[i]=k;
	}
	
	//show results
	printf("The result of sorting is ");
	for(i=0;i<6;i++){
		printf("%d ",A[i]);
	}
	printf("\n");
	
	getchar();
	getchar();
	
	return 0;
}