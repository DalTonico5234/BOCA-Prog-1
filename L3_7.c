#include <stdio.h>

int area (int x1, int y1, int x2, int y2);
int area_total (int r1_x1, int r1_y1, int r1_x2, int r1_y2, int r2_x1, int r2_y1, int r2_x2, int r2_y2);

int area_total (int r1_x1, int r1_y1, int r1_x2, int r1_y2, int r2_x1, int r2_y1, int r2_x2, int r2_y2)
{
  int A1, A2, Ainter=0;

  A1 = area (r1_x1, r1_y1, r1_x2, r1_y2);
  A2 = area (r2_x1, r2_y1, r2_x2, r2_y2);

  if (r2_x1 > r1_x2 || r2_y1 > r1_y2)
  {
    return A1 + A2;
  }
  else
  {
    Ainter = (r1_x2 - r2_x1) * (r1_y2 - r2_y1);
    return A1 + A2 - Ainter;
  }
}

int area (int x1, int y1, int x2, int y2)
{
  return (x2 - x1)*(y2 - y1);
}

void main()
{
  int r1_x1, r1_y1, r1_x2, r1_y2;
  int r2_x1, r2_y1, r2_x2, r2_y2;
  int A1, A2, AT;
  scanf("%d %d %d %d", &r1_x1, &r1_y1, &r1_x2, &r1_y2);
  scanf("%d %d %d %d", &r2_x1, &r2_y1, &r2_x2, &r2_y2);
  AT = area_total (r1_x1, r1_y1, r1_x2, r1_y2, r2_x1, r2_y1, r2_x2, r2_y2);
  printf("RESP:%d", AT);
}
