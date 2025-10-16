#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int i;
  //여기에 int temp=1 선언해도 결과는 동일 
  for (i=0; i<5; i++)
  {
    int static temp=1; //temp=1~5까지 출력되게 수정 
    printf("temp=%d\n", temp);
    temp++;
  }
            
  system("PAUSE");	
  return 0;
}
