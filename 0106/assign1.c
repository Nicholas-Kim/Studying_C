#include <stdio.h>

int count_chars(char* line);
void reverse(char* str);
int main(int argc, char* argv[]) {

	int num = 0;
	num = argc;
	char* p1 = NULL;
	char* p2 = NULL;
	
	char tmp1[100] = { '\0' };
	char tmp2[100] = { '\0' };

	if (argc < 3) {
		
		while (num < 3) {
			if (num == 1) {
				printf("문자열을 하나도 입력하지 않았습니다.\n");
				printf("첫 번째 문자열 입력: ");
				gets(tmp1);
				num++;
				printf("두 번째 문자열 입력: ");
				gets(tmp2);
				num++;
				p1 = tmp1;
				p2 = tmp2;
			}
			else if (num == 2) {
				p1 = argv[1];

				printf("문자열을 하나만 입력했습니다.\n");
				printf("두 번째 문자열 입력: ");
				gets(tmp2);
				p2 = tmp2;
				num++;
			}
		}
	}
	else if (num == 3) {
		p1 = argv[1];
		p2 = argv[2];
	}
	
	

	printf("%s\n", argv[0]);
	printf("%s\n", p1);
	printf("%s\n", p2);
	printf("%d\n", count_chars(p1));
	printf("%d\n", count_chars(p2));
	reverse(p1);
	reverse(p2);
	printf("%s\n", p1);
	printf("%s\n", p2);
	
	
	for (int i = 0; i < 10; i++) {
		printf("%c", tmp2[i]);

	}
	for (int i = 0; i < 10; i++) {
		printf("%c", tmp1[i]);

	}
	
	return 0;
}

int count_chars(char* line) {
	char* p = line;
	int n = 0;
	while (*p) {
		p++;
		n++;
	}
	return n;
}

void reverse(char* str) {
	int len = strlen(str);
	char c;
	for (int i = 0; i < len/2; i++) {
		c = str[i];
		str[i] = str[len-1-i];
		str[len-1-i] = c;
	}
}


