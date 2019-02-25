#include <stdio.h>

int main(void) {
	FILE *fp;
	int num;
	char name[20];
	int age;
	double height;
	char addr[80];

	fp = fopen("a.txt", "w");
	if (fp == NULL) return 1;
	printf("학번을 입력하세요");
	while (1) {
		
		scanf("%d", &num);
		printf("이름 :");
		scanf("%d", &num);
		printf("나이 : ");
		scanf("%d", &num);
		printf("키 : ");
		scanf("%lf", &height);
		printf("주소 : ");
		scanf("%s", addr);
	}

	fclose(fp);

	return 0;

}