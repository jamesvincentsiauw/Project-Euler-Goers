#include <stdio.h>

int main(void)
{
    unsigned long long num;
    unsigned long long max = 2;
	
	scanf("%llu",&num);
    while (num % 2 == 0)
        num /= 2;

    unsigned long long faktor = 3;
    while (num > 1)
    {
        while (num % faktor == 0)
        {
            num /= faktor;
            max = faktor;
        }
        faktor += 2;
    }
    printf("%llu\n", max);
}
