#include <stdio.h>

int main(void) {
	FILE *ifp, *ofp;
	char name[80];
	double weight, height, bmi;

	ifp = fopen("a.txt", "r");
	if (ifp == NULL) return -1;

	ofp = fopen("b.txt", "w");
	if (ofp == NULL) return -1;

	fgets(name, sizeof(name), ifp);
	name[strlen(name) - 1] = '\0';
	fscanf(ifp, "%lf%lf", &weight, &height);

	bmi = weight / ((height / 100)*(height / 100));

	fprintf(ofp, "�̸� : %s, BMI : %.1lf\nü�� : %.1lfkg, Ű : %.1lfcm\n", name, bmi, weight, height);

	/*
	while (1) {

	}
	*/
	fclose(ifp);
	fclose(ofp);

	return 0;
}