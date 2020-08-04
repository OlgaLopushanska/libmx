#include <stdio.h>
#include <string.h>
/*void *mx_memmem(const void *big, size_t big_len, const void *little, size_t little_len);
int main(){
	char *d="ddgfhghhjkjk yu ghgj";
	char *r="yu";
	size_t big_len=20;
	size_t little_len=2;
	printf("%s\n",memmem(d,big_len,r,little_len));
	printf("%s\n",mx_memmem(d,big_len,r,little_len));
	return 0;
}*/
static char *memmem_dop(char *b, size_t big_len,
char *l, size_t little_len);

void *mx_memmem(const void *big, size_t big_len,
const void *little, size_t little_len) {
    char *b = (char*)big;
    char *l = (char*)little;
    char *m = NULL;
    
    if (little_len==0)
        return b;   
    if(!big || !little || big_len==0 || big_len < little_len)
        return NULL;
    m=memmem_dop(b, big_len, l, little_len);
    return m;
}

static char *memmem_dop(char *b, size_t big_len, char *l, size_t little_len) {
    int priznak = 0;
    char *m = NULL;

    for (unsigned long a = 0; a < big_len; a++) {
        if (b[a] == l[0]) {
            priznak = 0;
            for (unsigned long c = 0; c < little_len ; c++)
                if (b[a + c] != l[c] || a + c >= big_len)
                    priznak = 1;
            if (priznak == 0) {
                m = &b[a];
                a = big_len;
            }
        }
    }
    return m;
}
