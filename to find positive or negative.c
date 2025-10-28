#include <stdio.h>
 int main()
 {
 	int a;
 	printf("enter a value:");
 	scanf("%d",&a);
 	switch((a>0)-(a<0))
 	{
 		case 1:printf("a is positive");
 		break;
 		case -1:printf("a is negative");
 		break;
	 }
	 return 0;
 }
