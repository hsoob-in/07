#include <stdio.h>
#include <stdlib.h>

//���������� ������ �ٸ� ���ϱ��� ���� extern���� �ҷ��;ߵǱ��� 

static int all_files; //static���� �����ϸ� linker error ��
// ������ ���ѵǸ鼭 sub.c�� �����ϰ��� �ϴ� ������ ���ٰ� �Ǵ� 
extern void sub(); //extern�� ���ؼ� ����� �Լ�, sub�� ���� �����ؾߵ� 

int main(void)
{        
  sub();
  printf("%d\n", all_files);
  
  system("PAUSE");
  return 0;
}

