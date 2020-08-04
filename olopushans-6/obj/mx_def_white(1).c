#include <stdbool.h>
bool mx_space(char c);
int mx_def_white(const char *str, int end) {
	int priznak = 0;
	int white = 0;
	int r = 0;
	
	for (int a = 0; a <= end; a++) {
		white = 0;
		for (int b = 0; b <= 5; b++) {
			if (mx_space(str[a]) == true) 
				white++;
		}
		if (white == 0) {
			r++;
			priznak = 1;
		}
		if (white > 0 && priznak == 1) {
			r++;
			priznak = 0;
		}
	}
	return r;
}

