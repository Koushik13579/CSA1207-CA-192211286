#include <stdio.h>
#include<math.h>
long long octal(long long b){
	int dec=0,i=0,oct=0;
	while(b!=0){
		dec+=(b%10)*pow(2,i);
		i++;
		b/=10;
	}
	while(dec!=0){
		int rem=dec%8;
		oct=(oct*10)+rem;
		dec/=10;	
	}
	dec=oct;
	oct=0;
	while(dec!=0){
		oct=(oct*10)+(dec%10);
		dec/=10;
	}
	return oct;
}
int main(){
	long long bin;
	printf("Enter a binary number:");
	scanf("%lld",&bin);
	printf("Decimal number is %lld",octal(bin));
	
	return 0;
}
