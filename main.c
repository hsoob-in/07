#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int flag = 1;
  int y; // y에 변수의 범위 주의(지역변수의 범위) 
  while(flag!=0)
  {
    int y;
    y = 3;
    flag = 0;
  }
  y = 4;
                
  system("PAUSE");	
  return 0;
}
