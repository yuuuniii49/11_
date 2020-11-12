#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

char *proverb = "All that glisters is not gold.";

int main(void)
{
	char **p;
	
	p = &proverb;
	
	printf("%s\n",*p);


	return 0;	
}
