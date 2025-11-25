#include <stdio.h>
 void fib(int);
  int main()
  {
  	int n,f=0,s=1,t;
  	printf("enter n value");
  	scanf("%d",&n);
  	printf("%d %d",f,s);
  	fib(n);
  	return 0;
  }
  void fib(int n)
  {  
     int f=0,s=1,t;
  	t=f+s;
  	while(t<=n)
  	{
  		printf(" %d",t);
  		f=s;
  		s=t;
  		t=f+s;
	  }
  }
 
