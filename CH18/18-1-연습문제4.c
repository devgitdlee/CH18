#include <stdio.h>

/*
fgetc : 문자 입력 
fputc : 문자 출력
*/

int main(void) {
	FILE *ifp, *ofp;
	char src[80], des[80];
	int ch;

	printf("복사할 파일명 : ");
	scanf("%s", src);
	printf("복사받을 파일명 : ");
	scanf("%s", des);
	
	ifp = fopen(src, "r");
	if (ifp == NULL) {
		printf("# %s파일이 없습니다.\n", src);
		return 1;
	}
	ofp = fopen(des, "w");
	if (ofp == NULL) {
		printf("# %s파일이 없습니다.\n", des);
		return 1;
	}


	while (ch = fgetc(ifp)!= EOF) { //복사할 파일의 문자를 하나씩 읽어 
		fputc(ch, ofp);  //복사받을 파일에 출력
	}
	printf("# %s파일을 %s파일로 복사했습니다.");
	return 0;
}