#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int i;
  //���⿡ int temp=1 �����ص� ����� ���� 
  for (i=0; i<5; i++)
  {
    int static temp=1; //temp=1~5���� ��µǰ� ���� 
    printf("temp=%d\n", temp);
    temp++;
  }
            
  system("PAUSE");	
  return 0;
}
