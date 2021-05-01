#include <stdio.h>
int factorial(int n) {
	if( n<=1) {
		return 1;
	}
	return n*factorial(n-1);
}

int main() {
	int n;
	printf("please enter a number: ");
	scanf("%d",&n);
	printf("the factorial of %d will be = %d\n",n,factorial(n));
	return 0;
}
