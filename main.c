#include <stdio.h>
#include <stdlib.h>


void sub(void)
{        
  int auto_count = 0; //초기화됨(자동할당) 
  static int static_count = 0; //static 변수는 값을 계속 저장함(정적할당) 
  auto_count++;
  static_count++;
  
  printf("auto_count = %d\n", auto_count);
  printf("static_count = %d\n", static_count);

}

int main(void)
{
  int i;
  for(i=0; i<3; i++)
  sub();
  
  system("PAUSE");
  return 0;
}

