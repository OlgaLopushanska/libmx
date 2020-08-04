#include <stdbool.h>
bool mx_space(char c);
char *mx_strnew(const int size);
char *mx_write_str(const char *str, int end, int r, int start) {
	char *u = mx_strnew(r + 1);
	int priznak = 0;
	int white = 0;
	int t = 0;

	for (int a = start; a <= end; a++) {
		white = 0;
		for (int b = 0; b <= 5; b++)
			if (mx_space(str[a]) == true) 
				white++;
		if (white == 0) {
			u[t++] = str[a];
			priznak = 1;
		}
		if (white > 0 && priznak == 1) {
			u[t++] = ' ';
			priznak = 0;
		}
	}
	return u;
}

