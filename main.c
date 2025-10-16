#include <stdio.h>
#include <stdlib.h>

//전역변수의 범위는 다른 파일까지 닿음 extern으로 불러와야되긴함 

static int all_files; //static으로 제한하면 linker error 뜸
// 범위가 국한되면서 sub.c가 연결하고자 하는 변수가 없다고 판단 
extern void sub(); //extern을 통해서 연결된 함수, sub를 먼저 정의해야됨 

int main(void)
{        
  sub();
  printf("%d\n", all_files);
  
  system("PAUSE");
  return 0;
}

