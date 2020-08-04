#include <stdio.h>
int mx_count_substr(const char *str, const char *sub);
/*int main() {
	const char *str = " follow * the white rabbit ";
	const char *sub = "o";
	printf("%d\n", mx_count_substr(str,sub));
	return 0;
}*/
int mx_count_substr(const char *str, const char *sub) {
	int u = 0;
	int r = 0;
	if (str==NULL || sub==NULL) u=-1;
	else {
		for (int a = 0; str[a] != '\0'; a++) {
			int priznak = 0;
			if (str[a] == sub[r]) {
				for (int b = 0; sub[r + b] != '\0'; b++) {
					//int priznak = 0;
					if (str[a + b] != sub[r + b])
						priznak++;
				}
			
		    		if (priznak == 0)
				u++;
				r = 0;
			}		
		}
	}
	return u;
}



