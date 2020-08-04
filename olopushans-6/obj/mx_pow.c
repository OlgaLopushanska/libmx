#include <stdio.h>
double mx_pow(double n, unsigned int pow);
/*int main(){
	double n=29.83;
	unsigned int pow=1;
	printf("%f",mx_pow(n,pow));
}*/
double mx_pow(double n, unsigned int pow) {
	double v = 1;
	if (pow == 0)
		v = 1;
	for (unsigned int a = 1; a <= pow; a++) {
		v = v * n;
		if (pow == 1)
			v = n;
		}
	return v;
}

