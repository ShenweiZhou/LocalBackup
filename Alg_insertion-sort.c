//This is a program to achieve insertion sort by c.
//It is assumed that the numbers are already given.
#include <stdio.h>
int main(void){
	const int n[]=[13.24.52.34.46.47];
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
	
	printf("The result of sorting is %d.\n", n[]);
	
	return 0;
}



