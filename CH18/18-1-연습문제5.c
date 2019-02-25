#include <stdio.h>

int main(void) {
	FILE *fp;
	int ch, cnt = 0;

	fp = fopen("a.txt", "r");
	if (fp == NULL) return 1;
	while (1) {
		ch = fgetc(fp);
		if (ch == EOF) break;
		putchar(ch);
		if (ch == '.') {
			putchar('\n');
			cnt++;
			if (cnt % 2 == 0) {
				putchar('\n');
			}
		}
	}
	fclose(fp);

	return 0;
}