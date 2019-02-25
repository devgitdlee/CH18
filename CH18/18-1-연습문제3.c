#include <stdio.h>

int main(void) {
	FILE *fp;

	fp = fopen("a.txt", "r");
	if (fp == NULL) {
		printf("파일을 열지 못했습니다.");
	}

	return 0;
}