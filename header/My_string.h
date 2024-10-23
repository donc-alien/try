#ifndef _MY_STRING_H_
#define _MY_STRING_H_

struct My_string{
	char *str;
	unsigned int length;
	unsigned int bound;
};
struct My_string str_init(const char *str);
void S_append(struct My_string *obj,char A);
#endif
