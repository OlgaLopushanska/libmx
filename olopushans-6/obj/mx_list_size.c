#include <stdlib.h>
#include <stdio.h>
typedef struct s_list{
	void *data;
	struct s_list *next;
}	t_list;
int mx_list_size(t_list *list);
void mx_printstr(const char *s);
t_list *mx_create_node(void *data);
/*int main(){
	char *data1="uhkjk";
	t_list *t1=mx_create_node(data1);
	char *data2="popolk";
	t_list *t2=mx_create_node(data2);
	char *data3="waads";
	t_list *t3=mx_create_node(data3);
	char *data4="kjkhjjkjk";
	t_list *t4=mx_create_node(data4);
	t1->next=t2;
	t2->next=t3;
	t3->next=t4;
	t4->next=NULL;
	printf("%d\n",mx_list_size(t1));
	while(t1){
		mx_printstr(t1->data);
		mx_printstr("\n");
		t1=t1->next;
	}
	return 0;
}*/



int mx_list_size(t_list *list) {
	int size = 1;

	if (list == NULL)
		return 0;
	t_list *tempor = list;
	while (tempor->next != NULL) {
		tempor = tempor->next;
		size++;
	}
	return size;
}
