#include<stdio.h>
 
int main(){
	int n;
	int i = 3;
	int count;
	int c;
	int sum=2;
	
	scanf("%d",&n);
	for(count=2;count<=n;){
		for (c=2;c<= i-1;c++ ){
			if ( i%c == 0 ){
				break;
			}
		}
		if ( c == i ){
			sum+=i;
			count++;
		}
		i++;
	}
	printf("%d\n", sum);
}
