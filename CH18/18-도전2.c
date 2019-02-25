#include <stdio.h>


int check_char() {
	int i;

	for (i = 0; i < max; i++) {


	}
}

int main(void) {
	FILE *afp, *bfp, *cfp;
	int num, input, size;

	afp = fopen("a.txt", "r");
	if (afp == NULL) return -1;


	bfp = fopen("b.txt", "wb");
	if (bfp == NULL) return -1;

	cfp = fopen("c.txt", "wb");
	if (cfp == NULL) return -1;



	fclose(afp);
	fclose(bfp);
	fclose(cfp);

	return 0;
}