#include <stdio.h>
int mx_get_substr_index(const char *str, const char *sub);
/*int main() {
	//const char *str = "McDonalds";
	//const char *sub = "on";
	printf("%d\n", mx_get_substr_index("McDonalds", "Don"));
	printf("%d\n", mx_get_substr_index("McDonalds Donuts", "on"));
	printf("%d\n", mx_get_substr_index("McDonalds", "Donatello"));
	printf("%d\n", mx_get_substr_index("McDonalds", NULL));
	printf("%d\n", mx_get_substr_index(NULL, "Don"));
	return 0;
}*/
int mx_get_substr_index(const char *str, const char *sub) {
	int u = -1;
	
	if (str==NULL || sub==NULL) 
		u=-2;
	else {
		for (int a = 0; str[a] != '\0'; a++) {
			int priznak = 0;
			if (str[a] == sub[0]) {
				for (int b = 0; sub[b] != '\0'; b++) 
					if (str[a + b] != sub[b])
						priznak++;
				if (priznak == 0){
					u=a;
					break;
				}
			}		
		}
	}
	return u;
}



