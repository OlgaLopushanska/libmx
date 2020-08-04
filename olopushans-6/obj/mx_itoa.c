#include <stdlib.h>
#include <stdio.h>
char *mx_strnew(const int size);
char *mx_itoa_dop(char *r, int t, int number);
char *mx_itoa(int number);
/*int main(){
	int num=214748;
	char *r=mx_itoa(num);
	printf("%s",r);
}*/
char *mx_itoa(int number) {
	char *r = NULL;

	if(number==-2147483648){
		r=mx_strnew(11);
		r="-2147483648";
	}
	else{
		int n = number;
		int t = 1;
		if (n < 0) {
			t++;
			n = n * (-1);
		}
		for (; n >= 10; t++) 
			n = n / 10;
		r = mx_itoa_dop(r, t, number);
	}
	return r;
}

char *mx_itoa_dop(char *r, int t, int number){
	int a = t - 1;
	int b = 0;
	r = mx_strnew(t);

	if (number < 0) 
		b = 1;
	for (; a >= b; a--) {
		if (number < 0) {
			r[0] = '-';
			number = number * (-1);
		}
		r[a] = number % 10 + 48;
		number = number / 10;
	}
	return r;
}

