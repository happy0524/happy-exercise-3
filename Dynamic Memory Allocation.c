# include <stdio.h>
# include <stdlib.h>
# include <string.h>

int main(void) {

	int i;
	int* pi = &i;
	
	float f;
	float* pf = &f;

	pi = (int*)malloc(sizeof(int));
	pf = (float*)malloc(sizeof(float));

	*pi = 1024;
	*pf = 3.14;

	printf("an integer = %d, a float = %f\n", *pi, *pf);
	free(pi);
	free(pf);

	return 0;
}