#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "header/My_string.h"
int main(){
	struct My_string s;
	s=str_init("hello world");
	printf("%s %d\n",s.str,s.length);
	S_append(&s,'a');

	printf("%s %d\n",s.str,s.length);
	return 0;
}
