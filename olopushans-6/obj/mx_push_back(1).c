#include <stdlib.h>
#include <stdio.h>
typedef struct s_list{
	void *data;
	struct s_list *next;
}	t_list;
void mx_printstr(const char *s);
t_list *mx_create_node(void *data);
void mx_push_back(t_list **list, void *data);
/*int main(){
	char *data1="dtggh";
	t_list *t1=mx_create_node(data1);
	char *data2="uiyhjh";
	t_list *t2=mx_create_node(data2);
	char *data3="sdsdx";
	t_list *t3=mx_create_node(data3);
	char *data4="ppkkj";
	t_list *t4=mx_create_node(data4);
	t1->next=t2;
	t2->next=t3;
	t3->next=t4;
	//char *data5="wfddfd";
	//mx_push_back(&t1,data5);
	while(t1){
		mx_printstr(t1->data);
		mx_printstr("\n");
		t1=t1->next;
	}
	return 0;
}*/
void mx_push_back(t_list **list, void *data){
	t_list *p=mx_create_node(data);
	if(p==NULL || list==NULL)
		return;
	
	
	p->data=data;
	p->next=NULL;
	if(*list==NULL)
		*list=p;
	else{
	t_list *bi=*list;
	while(bi->next!=NULL)
		bi=bi->next;
	
	bi->next=p;
}
}

