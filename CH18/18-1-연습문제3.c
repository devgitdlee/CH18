#include <stdio.h>

int main(void) {
	FILE *fp;

	fp = fopen("a.txt", "r");
	if (fp == NULL) {
		printf("������ ���� ���߽��ϴ�.");
	}

	return 0;
}