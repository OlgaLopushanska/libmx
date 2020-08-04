#include <stdio.h>
#include <stdlib.h>
typedef struct s_list{
	void *data;
	struct s_list *next;
}	t_list;
t_list *mx_create_node(void *data);
void mx_printstr(const char *s);
/*int main(){
	char *d="gjghj";
	t_list *t=mx_create_node(d);
	mx_printstr(t->data);
	return 0;

	}*/
t_list *mx_create_node(void *data){
	t_list *p=malloc(sizeof(t_list));
	if(!p) return NULL;
	p->data=data;
	p->next=NULL;
	return p;
}

