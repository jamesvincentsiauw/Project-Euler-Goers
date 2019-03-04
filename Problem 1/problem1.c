#include <stdio.h>

int main(){
	long x;
	long i;
	long sum=0;
	
	scanf("%ld",&x);
	for(i=0;i<x;i++){
		if((i+1)%3==0||(i+1)%5==0){
			sum+=i+1;
		}
	}
	printf("%ld",sum);
}
