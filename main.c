#include <stdio.h>
#include <stdlib.h>

int inc(int counter); 
int counter;

int main(void)
{
  int i=10;
  printf("�Լ� ȣ���� i=%d\n", i);
  
  i = inc(i); //��ȯ���� i���ٰ� ����ִ� ȿ�� 
  
  printf("�Լ� ȣ���� i=%d\n", i);
  
  system("PAUSE");	
  return 0;
}
  int inc(int counter)
{        
  counter++; //�Ű������� �Լ��� ���������̱� ������ ȣ���� �ȵ� 
  return counter;
}
