#include <stdio.h>
void mx_printstr(const char *s);
void mx_print_strarr(char **arr, const char *delim);
/*int main(){
	//char *arr[6]={"eee","gytuy","gghjghjkhk","gu","i",NULL};
	//const char *del=" ";
	char *arr[] = {"o8QoHOgz", "VCnJdkseB3RGoTKFLQXh07k6kseB3YDUBx", "qhg", "OsekseB39Ul", 
	"Gl5TquMkseB3FaiHx", "DGhq", 
	"OkseB3de35ljt3e5qrunkseB3l7hCrUgmPIC4kseB3WqqUVjP1NQXkseB3iww3E1ifwookseB3miDCRzzsvQBjCEkseB3rFrVQkEM16kseB3WtSlMwpPkvtkseB3rPhoWIDKifkseB3FeCwxrnH2AgO1", NULL};
	char *delim = "*";
	mx_print_strarr(arr,delim);
	return 0;
}*/
void mx_print_strarr(char **arr, const char *delim){
	
	if(arr == NULL || delim == NULL || *arr == NULL)
		return ;
	for(int y=0;arr[y]!=NULL;y++){
	    mx_printstr(arr[y]);
	    if (arr[y + 1])
	    	mx_printstr(delim);
    }
   mx_printstr("\n");	
}	


	
