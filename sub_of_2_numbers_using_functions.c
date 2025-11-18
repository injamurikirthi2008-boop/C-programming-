#include <stdio.h>
 void sub(int,int);
 int main()
 {
 	int x=10,y=20;
 	sub(x,y);
 	return 0;
 }
 void sub(int x,int y)
 {
 	int z;
 	z=x-y;
 	printf("sub=%d",z);
 }
 
