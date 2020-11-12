#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

	int i = 10;
	int *ptr = &i;
	
	printf("%i = %d, pi : %p\n", i, ptr);
	
	(*ptr)++;	// 포인터가 가리키는 값 증가 
	printf("%i = %d, pi : %p\n", i, ptr);
	
	*ptr++;		// 포인터 자체가 증가, 4byte만큼 위치이동 
	printf("%i = %d, pi : %p\n", i, ptr);
	
	return 0;
}
