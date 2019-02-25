#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
	char title[80];
	double price;
	int cnt;
	double total;

}Books;

int check(char *title, Books *ary, int cnt) {

	int i;

	for (i = 0; i < cnt; i++) {
		if (strcmp(title, ary[i].title) == 0) return i;
	}

	return -1;
}

int main(void) {
	FILE *ifp, *ofp;
	Books ary[10];
	char title[50];
	int i, j, cnt, index, mxa;
	i = 0;
	ifp = fopen("a.txt", "r");
	if (ifp == NULL) return -1;
	ofp = fopen("b.txt", "wb");
	if (ofp == NULL) return -1;
	int i, j, cnt, index, mxa;
	i = 0;
	fgets(title, sizeof(title), ifp);
	while (!feof(ifp)) {
		title[strlen(title) - 1] = '';
		fscanf(ifp, "%lf%d", &price, &num);
		fgetc(ifp);
		index = check(title, ary, i);
		if (index >= 0) {
			ary[index].total += (price);
		}
		else
		{
			strcpy(ary[i].title, title);
		}
	}
	return 0;

}