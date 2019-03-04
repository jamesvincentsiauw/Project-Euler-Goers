#include <stdio.h>
int main(){
	long x;
	long fib1,fib2,fibsum;
	long even=1;
	long i=0;
	
	fib1=1;
	fib2=2;
	scanf("%ld",&x);
	while(i<x-2){
		fibsum=fib1+fib2;
		if(fibsum%2==0){
			even++;
		}
		fib1=fib2;
		fib2=fibsum;
		i++;
	}
	printf("%ld",even);
}
