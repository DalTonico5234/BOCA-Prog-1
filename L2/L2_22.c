#include <stdio.h>
#include <stdlib.h>

void main ()
{
    int n, dig, s, temp=1;
    scanf("%d", &n);
    printf("RESP:");
    while (s > 9 || temp == 1) 
    {
        s = 0;
        while (n)
        {
            dig = n % 10;
            n /= 10;
            s += dig;
        }
        if (s > 9)
        {
            n = s;
        } 
        temp--;
    } 
    printf("%d", s);
}