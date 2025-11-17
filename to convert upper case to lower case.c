#include <stdio.h>
 #include <string.h>
  int main()
  {
  	char s[20];
  	printf("enter string name");
  	gets(s);
  	strupr(s);
  	printf("upper case string is %s",s);
  	return 0;
  }
