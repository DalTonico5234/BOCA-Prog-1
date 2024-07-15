#include <stdio.h>
#include <stdlib.h>

void main ()
{
    int nn,n1,n2,n3,n4,n5,n6,n7,n8,n9,n,i;
    char c,aspa;
    scanf("%d", &nn);
    for (i = 1; i <= nn; i++)
    {
        switch(i)
        {
            case 1: scanf("%d ", &n1); break;
            case 2: scanf("%d ", &n2); break;
            case 3: scanf("%d ", &n3); break;
            case 4: scanf("%d ", &n4); break;
            case 5: scanf("%d ", &n5); break;
            case 6: scanf("%d ", &n6); break;
            case 7: scanf("%d ", &n7); break;
            case 8: scanf("%d ", &n8); break;
            case 9: scanf("%d ", &n9); break;
        }
    }
    scanf("%c", &aspa);
    while(1)
    {
        scanf("%c", &c);
        if (c  == '"') break;
        if (c == '%')
        {
            scanf("%d", &n);
            if (n  > nn || n < 1) printf ("ERRO");
            else
            {
                switch(n)
                {
                    case 1: printf("%d", n1); break;
                    case 2: printf("%d", n2); break;
                    case 3: printf("%d", n3); break;
                    case 4: printf("%d", n4); break;
                    case 5: printf("%d", n5); break;
                    case 6: printf("%d", n6); break;
                    case 7: printf("%d", n7); break;
                    case 8: printf("%d", n8); break;
                    case 9: printf("%d", n9); break;
                }
            }
        } 
        else if (c != '"' ) printf("%c", c);
    }
}