/* Write a C program to find out the quotient and remainder of two numbers. (Without using modulus
( % ) operator)*/



#include <stdio.h>

int main()
{
	int x, n, p, q, m;
	printf("Question: Write a C program to find out the quotient and remainder of two numbers. (Without using modulus(%) operator)\n\nAnswer:\n\n\n\n\n");

	printf("Enter x and n: ");
	scanf("%d%d",&x,&n);

	q=x/n;
	p=q*n;
	m=x-p;


	printf("Modulus: %d\n",m);


	getch();
	return 0;
}
