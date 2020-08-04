#include <stdlib.h>
#include <stdio.h>
typedef struct s_list{
	void *data;
	struct s_list *next;
}	t_list;
void mx_printstr(const char *s);
t_list *mx_create_node(void *data);
void mx_push_front(t_list **list, void *data);
/*int main(){
	char *data1="tyu";
	t_list *u=mx_create_node(data1);
	char *data2="rwr";
	t_list *u2=mx_create_node(data2);
	u->next=u2;
	char *data3="uiyiy";
	mx_push_front(&u,data3);
	while(u){
		mx_printstr(u->data);
		mx_printstr("\n");
		u=u->next;
	}
	return 0;
}*/
void mx_push_front(t_list **list, void *data){
	if(list==NULL) return;
	t_list *u=mx_create_node(data);
	if(!u)
		return;
	u->data=data;
	u->next=*list;
	*list=u;
}


