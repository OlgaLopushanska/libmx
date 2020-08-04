#include <stdio.h>
int mx_get_char_index(const char *str, char c);
/*int main() {
	char *str4 = "dont read my commits";
	char s = 'r';
	char s1 = 'd';
	char s2 = 'c';
	printf("%d\n", mx_get_char_index(str4, s));
	printf("%d\n", mx_get_char_index(str4, s1));
	printf("%d\n", mx_get_char_index(str4, s2));
	return 0;
}*/
int mx_get_char_index(const char *str, char c) {
	int y = -1;
	if (str == NULL) y = -2;
	else {
 		for (int a = 0; str[a] != '\0' || y!=-1; a++) {
			if (str[a] == c) {
				y = a;
				break;
			}
		}
	}
	return y;
}
