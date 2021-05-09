#include<stdio.h>
int lcm(int,int);
main()
{
	int a,b,result;
	printf("First input number: ");
	scanf("%d",&a);
	printf("second input number: ");
	scanf("%d",&b);
	result=lcm(a,b);
	printf("LCM of %d and %d is %d",a,b,result);
	
}
int lcm(int a,int b)
{
    static int m=0;
	m=m+a;
	if(m%a==0 && m%b==0)
	  return m;
	return lcm(a,b);
	
}

