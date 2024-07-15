#include <stdio.h>

int main ()
{
  int x,y,x1,y1;
  scanf("%d %d %d %d", &x, &y, &x1, &y1);
    if(x<x1 && y<y1){
    printf("(%d,%d)(%d,%d)(%d,%d)(%d,%d)",x,y1,x,y,x1,y,x1,y1);}
    if(x<x1 && y>y1){
    printf("(%d,%d)(%d,%d)(%d,%d)(%d,%d)",x,y,x,y1,x1,y1,x1,y);}
    if(x>x1 && y<y1){
    printf("(%d,%d)(%d,%d)(%d,%d)(%d,%d)",x1,y1,x1,y,x,y,x,y1);}
    if(x>x1 && y>y1){
    printf("(%d,%d)(%d,%d)(%d,%d)(%d,%d)",x1,y,x1,y1,x,y1,x,y);}
    return 0;
    }
