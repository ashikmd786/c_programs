#include<stdio.h>
int main()
{
	int a = 50;
	int b = 5;
	int result = 0;
	result = a |b;
	printf("binary OR operator of a and b is %d\n",result);
	result = a & b;
	printf("binary AND operator of a and b is %d\n",result);
	result = a ^ b;
	printf("binary XOR operator of a and b is %d\n",result);
	result = ~a;
	printf("binary Ones complement operator of a and b is %d\n",result);
	result = a << 2;
	printf("binary left shift operator of a is %d\n",result);
	result = a >> 2;
	printf("binary right shift operator of a is %d\n",result);
	return 0;
}
