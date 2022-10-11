#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int sumTwo(int a,int b)
{
	return(a+b);
}

int square(int n)
{
	return(n*n);
}

int get_max(int x,int y)
{
	if (x>y)
		return (x);
	else
		return (y);
}

int main()
{
	int res_sum,res_square,res_get_max;
	
	res_sum=sumTwo(2,3);
	res_square=square(5);
	res_get_max=get_max(10,-20);
	
	printf("두 정수의 합 :  %d\n",res_sum);
	printf("정수의 제곱 : %d\n",res_square);
	printf("두개의 정수 중 큰 수는 : %d\n",res_get_max);
	
}
