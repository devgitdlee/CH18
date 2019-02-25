#include <stdio.h>

main() {
	int x, y;
	int month[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	char *day[7] = { "SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT" };
	while (1) {
		scanf("%d%d", &x, &y);
		for (int i = 0; i < x - 1; i++)
			y += month[i];

		printf("%s\n", day[y % 7]);
	}
	return 0;
}