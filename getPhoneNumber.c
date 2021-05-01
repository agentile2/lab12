#include <stdio.h>

int main() {
	int first;
	int middle;
	int end;

	printf("please enter your number: ");
	scanf("(%d) %d-%d", &first, &middle, &end);
	printf("you entered: %d-%d-%d\n", first,middle,end);

return 0;
}
