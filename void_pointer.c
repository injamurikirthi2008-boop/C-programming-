#include <stdio.h>
 int main()
 {
 	int x=10;
 	char ch='x';
 	void *ptr;
 	ptr=&x;
 	printf("value of ptr =%d",*(int*)ptr);
 	ptr=&ch;
 	printf("\nvalue of ptr = %c",*(char*)ptr);
 	return 0;
 }
