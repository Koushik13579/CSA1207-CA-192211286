#include <stdio.h>
int main(){
	int n;
	printf("Enter length of set:");
	scanf("%d", &n);
	int array[n],i;
	printf("Enter %d elements of set:",n);
	for (i=0;i<n;i++){
		scanf("%d",&array[i]);
	}
	int min=array[0];
	for (i=0;i<n;i++){
		for(int j=i;j<n;j++){
			if (array[j]<=min){
				min=array[j];
			}
		}
	}
	printf("The minimum number in the set is %d",min);
	
	return 0;
}
