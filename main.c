#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int combination(int n,int r)
{
	return (factorial(n)/(factorial(n-r)*factorial(r)));
}

int factorial(int n)
{
	int res=1;
	int i;
	for (i=1;i<=n;i++)
		res=(res*i);
	return res;
}

int get_integer()
{
	int n;
	printf("������ �Է��Ͻÿ� : ");
	scanf("%d",&n);
	return n;
}

int main(void)
{
	int a;
	int b;
	
	a=get_integer();
	b=get_integer();
	
	printf("C(%d,%d)=%d\n",a,b,combination(a,b));
}
