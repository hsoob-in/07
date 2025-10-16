#include <stdio.h>
#include <stdlib.h>

int inc(int counter); 
int counter;

int main(void)
{
  int i=10;
  printf("함수 호출전 i=%d\n", i);
  
  i = inc(i); //반환값을 i에다가 집어넣는 효과 
  
  printf("함수 호출후 i=%d\n", i);
  
  system("PAUSE");	
  return 0;
}
  int inc(int counter)
{        
  counter++; //매개변수는 함수의 지역변수이기 때문에 호출이 안됨 
  return counter;
}
