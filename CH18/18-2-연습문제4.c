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
	printf("�й��� �Է��ϼ���");
	while (1) {
		
		scanf("%d", &num);
		printf("�̸� :");
		scanf("%d", &num);
		printf("���� : ");
		scanf("%d", &num);
		printf("Ű : ");
		scanf("%lf", &height);
		printf("�ּ� : ");
		scanf("%s", addr);
	}

	fclose(fp);

	return 0;

}