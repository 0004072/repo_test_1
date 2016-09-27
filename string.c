#include <stdio.h>
/*
 *Created by 000407
 */
int my_strlen(const char *s){
	const char *p = s;
	while (*p)
		++p;
	return (p - s);
}

int main(void){
	int i;
	char *s[] = {
		"Git tutorials",
		"Tutorials Point"
	};

	for (i = 0; i < 2; ++i)
		printf("string lenght of %s = %d\n", s[i], my_strlen(s[i]));
	
	return 0;
}
