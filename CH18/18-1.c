#include <stdio.h>

int main(void) {
	FILE *fp;


	fp = fopen("a.txt", "r");
	if (fp == NULL) {
		printf("������ ������ �ʾҽ��ϴ�.\n");
		return 1;
	}

	printf("������ ���Ƚ��ϴ�.");
	fclose(fp);

	return 0;
}