#include <stdio.h>
#include <stdlib.h>
void mx_strdel(char **str);
/*int main() {

	char **str =(char**)malloc(20);
	*str="dffgg ftfh gfhjgh";
	printf("%s\n",*str);
	mx_strdel(str);
	printf("%s\n",*str);
	return 0;
}*/
void mx_strdel(char **str) {
	*str = NULL;
	free(*str);
}

