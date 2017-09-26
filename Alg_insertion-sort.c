//This is a program to achieve insertion sort by c.
//It is assumed that the numbers are already given.
#include <stdio.h>
int main(void){
    int n[]={13,233,21,3,234,85,34};
    int i;
    int j;
	int k;
	
	for(i=1;i<6;i++){
		j=i-1;
		while(n[j]>n[i]){
			k=n[j];
			n[j]=n[i];
			n[i]=k;
			i--;
			j--;
		}
	}
	
	printf("The result of sorting is .\n");
	for (i=0;i<6;i++){
		printf("%d ",n[i]);
	}
	
	printf("\n");
	
	getchar();
	getchar();
	
	return 0;
}



