#include <stdlib.h>
#include <stddef.h>
#include "header/My_string.h"

struct My_string str_init(const char *str){
	struct My_string obj;
	unsigned int count=0;
	obj.length=0;
	while(str[count]!='\0'){
		count++;
	}
	obj.str=(char *)calloc(sizeof(char)*count+20,'\0');
	obj.bound=sizeof(char)*count+20;
	while(obj.length<count)
	{
		obj.str[obj.length]=str[obj.length];
		obj.length++;
	}
	return obj;
}

void S_append(struct My_string *obj,char A){
	if(obj->length+1==obj->bound){
		obj->str=(char *)realloc((void *)obj->str,obj->bound+20);
		obj->bound=obj->bound+20;
	}
	obj->str[obj->length]=(char)A;
	++obj->length;
}

