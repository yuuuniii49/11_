#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

	int i = 10;
	int *ptr = &i;
	
	printf("%i = %d, pi : %p\n", i, ptr);
	
	(*ptr)++;	// �����Ͱ� ����Ű�� �� ���� 
	printf("%i = %d, pi : %p\n", i, ptr);
	
	*ptr++;		// ������ ��ü�� ����, 4byte��ŭ ��ġ�̵� 
	printf("%i = %d, pi : %p\n", i, ptr);
	
	return 0;
}
