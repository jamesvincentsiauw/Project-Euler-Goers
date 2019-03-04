#include <stdio.h>

long double numberOfPaths(int m, int n) { 
	if (m == 0 || n == 0){
		return 1; 
	}
	return numberOfPaths(m-1, n) + numberOfPaths(m, n-1); 
}
  
int main() { 
	int m,n;
	scanf("%d",&m);
	scanf("%d",&n);
    printf("%ld\n",numberOfPaths(m,n)); 
} 
