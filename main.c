#include <stdio.h>
#include <stdlib.h>

void f(void);

int i;
int main(void)
{
  for(i=0; i<5; i++)
  {
    f(); //�� ���� �����, ���� ���� ������ ����ϰ� ����
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
