#include<stdio.h>

long long binary(int n){
	int bin=0;
	while(n!=0){
		bin=(bin*10)+(n%10);
		n/=10;
	}
	return bin;
}

int main(){
	int n;
	printf("Enter a decimal number:");
	scanf("%d",&n);
	
}
