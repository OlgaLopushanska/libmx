#include <stdio.h>
#include <stdlib.h>
char *mx_strnew(const int size);
char *mx_nbr_to_hex(unsigned long nbr);
/*int main(){
	unsigned long e=0;
	char *u=mx_nbr_to_hex(e);
	printf("%s\n",u);
	return 0;
}*/

char *mx_nbr_to_hex(unsigned long nbr){
	unsigned long n=nbr;
	int p=1;
	if(n<16)
		p=1;
	else{
	for(;n/16>0;p++)
		n=n/16;
    }
	//printf("%d\n",p);
 	char *e = mx_strnew(p);
	for(int a=p-1;a>=0;a--){
	int t=nbr%16;

	//printf("%d  ",t);
	//e[a]=t;
	if(t>=0 && t<=9){
	     e[a]=t+48;
	     //a++;
	     //printf("%c\n",e[a]);
	 }
	 else if(t>=10 && t<=16){
	    e[a]=(t+97-10);
	    //a++;
	    //printf("%c\n",e[a]);
	}
	nbr=nbr/16;
   }
  // printf("%s",e);
return e;
}

