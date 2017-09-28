//This is a program to achieve insertion sort by c.
//It is assumed that the numbers are already given.
#include <stdio.h>
int main(void){
    int n[]={13,233,21,3,234,85,34};
    int i;
    int j;
	int k;
	
	//before sorting
	printf("Before sorting A= ");
	for(i=0;i<6;i++){
		printf("%d ",n[i]);
	}
	printf("\n");
	
	//sorting starts
	for(i=1;i<6;i++){
		j=i-1;
		k=n[i];
		while(j>=0 && n[j]>k){
			n[j+1]=n[j];
			--j;
		}
		n[j+1]=k;
	}
	
	//show the result of sorting
	printf("The result of sorting is .\n");
	for (i=0;i<6;i++){
		printf("%d ",n[i]);
	}
	
	printf("\n");
	
	getchar();
	getchar();
	
	return 0;
}



