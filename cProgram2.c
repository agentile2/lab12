#include <stdio.h>

int main() {
	int val1;
	printf("Enter an integer: %d\n",val1);
	scanf("%d",&val1);

	int newVal = (val1<<3)+(~val1);

	printf("the new integer after shifting 3 bits and adding: %d\n", newVal);
}

