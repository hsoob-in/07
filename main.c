#include <stdio.h>
#include <stdlib.h>

void f(void);

int i;
int main(void)
{
  for(i=0; i<5; i++)
  {
    f(); //한 번만 실행됨, 같은 전역 변수를 사용하고 있음
    printf("\n"); 
  }
  system("PAUSE");
  return 0;
}
void f(void)
{        
  int j;
  for (j=0; j<10; j++)
  printf("#");
}
