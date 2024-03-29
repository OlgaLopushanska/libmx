#include <unistd.h>
#include <wchar.h>
void mx_print_unicode(wchar_t c);
int mx_strlen(const char *s);
static void	print_unicode_dop2(char s[4], wchar_t c);

static void print_unicode_dop1(char s[4], wchar_t c);

static void print_unicode_dop(char s[4], wchar_t c);
//static void	print_unicode_dop(char s[4], wchar_t c);
/*int main(){
	wchar_t c=0x72d7;
	//wchar_t c=504;
	mx_print_unicode(c);
	return 0;
}*/

void mx_print_unicode(wchar_t c) {
    char s[5];

    if (c < 0x80) {
        s[0] = (c >> 0 & 0x7F) | (0x00);
        s[1] = '\0';
        s[2] = '\0';
        s[3] = '\0';
        s[4] = '\0';
    }
    else if (c < 0x0800) 
        print_unicode_dop(s, c);
    else if (c < 0x10000) 
        print_unicode_dop1(s, c);
    else if (c < 0x110000) 
        print_unicode_dop2(s, c);
    write(1, s, mx_strlen(s));
}

static void print_unicode_dop(char s[4], wchar_t c) {
    s[0] = ((c >> 6 & 0x1F) | (0xC0));
    s[1] = ((c >> 0 & 0x3F) | (0x80));
    s[2] = '\0';
    s[3] = '\0';
    s[4] = '\0';
}

static void	print_unicode_dop2(char s[4], wchar_t c) {
    s[0] = ((c >> 18 & 0x07) | (0xF0));
    s[1] = ((c >> 12 & 0x3F) | (0x80));
    s[2] = ((c >> 6 & 0x3F) | (0x80));
    s[3] = ((c >> 0 & 0x3F) | (0x80));
    s[4] = '\0';
}

static void print_unicode_dop1(char s[4], wchar_t c) {
    s[0] = ((c >> 12 & 0x0F) | (0xE0));
    s[1] = ((c >> 6 & 0x3F) | (0x80));
    s[2] = ((c >> 0 & 0x3F) | (0x80));
    s[3] = '\0';
    s[4] = '\0';
}

// void mx_print_unicode(wchar_t c){
// 	char s[4];
// 	if(c < 0x80){
//  		s[0]=(c>>0 & 0x7F) | (0x00);
// 	   	write(1, &s, 1);
// 	}
// 	else if(c < 0x0800){
// 	   s[0]=((c>>6 & 0x1F) | (0xC0));
// 	   s[1]=((c>>0 & 0x3F) | (0x80));
// 	   write(1, s, 2);
// }
// 	else if(c < 0x10000){
// 	   s[0]=((c>>12 & 0x0F) | (0xE0));
//  	   s[1]=((c>>6 & 0x3F) | (0x80));
// 	   s[2]=((c>>0 & 0x3F) | (0x80));
// 	   write(1, s, 3);
// }
// 	else if(c < 0x110000){
// 	   s[0]=((c>>18 & 0x07) | (0xF0));
//  	   s[1]=((c>>12 & 0x3F) | (0x80));
// 	   s[2]=((c>>6 & 0x3F) | (0x80));
// 	   s[3]=((c>>0 & 0x3F) | (0x80));
// 	   write(1, s, 4);
// 	}
// } 


// void mx_print_unicode(wchar_t c) {
// 	char s[4];

// 	if (c < 0x80) {
// 		s[0] = (c >> 0 & 0x7F) | (0x00);
// 		write(1, &s, 1);
// 	}
// 	else if (c < 0x0800) {
// 		s[0] = ((c >> 6 & 0x1F) | (0xC0));
// 		s[1] = ((c >> 0 & 0x3F) | (0x80));
// 		write(1, s, 2);
// 	}
// 	else if (c < 0x10000) {
// 		s[0] = ((c >> 12 & 0x0F) | (0xE0));
// 		s[1] = ((c >> 6 & 0x3F) | (0x80));
// 		s[2] = ((c >> 0 & 0x3F) | (0x80));
// 		write(1, s, 3);
// 	}
// 	else if (c < 0x110000) 
// 		print_unicode_dop(s, c);
// }

// static void	print_unicode_dop(char s[4], wchar_t c) {
// 		s[0] = ((c >> 18 & 0x07) | (0xF0));
// 		s[1] = ((c >> 12 & 0x3F) | (0x80));
// 		s[2] = ((c >> 6 & 0x3F) | (0x80));
// 		s[3] = ((c >> 0 & 0x3F) | (0x80));
// 		write(1, s, 4);
// }

