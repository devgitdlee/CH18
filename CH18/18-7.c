#include <stdint.h>
#include <stdio.h>
#include <string.h>

int main(void) {
	FILE *fp;
	char str[20];

	fp = fopen("a.txt", "a+");
	if (fp == NULL) {
		printf("파일을 만들지 못했습니다.\n");
		return -1;
	}

	while (1) {
		printf("과일 이름 :");
		scanf("%s", str);
		if (strcmp(str, "end") == 0) break;
		else if (strcmp(str, "list") == 0) { 
			fseek(fp, 0, SEEK_SET); //버퍼 위치 지시자를 맨 처음으로 이동
			if (feof(fp))break;
			printf("%s", str); 
		}
		else fprintf(fp, "%s\n", str); //입력한 과일 이름을 파일에 출력
	}
	fclose(fp);

	return 0;
}