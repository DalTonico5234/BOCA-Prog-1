#include <stdio.h>

int main(int argc, char const *argv[]) {
    int a, i;
    i = 1;
    scanf("%d", &a);


    while(i < a)
    {
        if(i % 2 == 0) {printf("%d ", i);}
        else if(i % 3 == 0) {printf("%d ", i);}
        i++;
    }
   
    return 0;
}
