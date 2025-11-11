#include <stdio.h>
 int main()
 {
 	int bs,hra,da,gs;
 	printf("enter bs value");
 	scanf("%d",&bs);
 	if(bs>=10000)
 	{
 		da=bs*10/100;
 		hra=bs*15/100;
	 }
	 else
	 {
	 	da=bs*15/100;
	 	hra=bs*20/100;
	 }
	 gs=da+hra+bs;
	 printf("gross salary=%d",gs);
	 return 0;
 }
