#include <stdio.h>

int main()
{
	int i;
	int j = 1;
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 9; j++) {
			printf("%dx%d=%d ", i, j, i * j);
		}
	}

	return 0;
}

