#include <stdio.h>

int main(void) {
	FILE *ifp, *ofp;
	int num, input, size;

	ifp = fopen("a.txt", "r");
	if (ifp == NULL) return -1;


	ofp = fopen("b.txt", "wb");
	if (ofp == NULL) return -1;

	input = fscanf(ifp, "%d", &num);
	while (1) {
		if (input == EOF) break;
		size += fwrite(&num, 1, sizeof(num), ofp);
		input = fscanf(ifp, "%d", &num);
	}

	printf("�Է� ������ ũ�� : %d����Ʈ\n", size);
	printf("��� ������ ũ�� : %d����Ʈ\n", size);

	fclose(ifp);
	fclose(ofp);

	return 0;
}