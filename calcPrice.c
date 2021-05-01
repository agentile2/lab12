#include <stdio.h>
	int main() {

	int item;
	int quantity;
	double price;
	char date[12];

	printf("Please enter the item number:");
	scanf("%d",&item);

	printf("please enter unit price:");
	scanf("%lf", &price);
	
	printf("please enter quantity:");
	scanf("%d", &quantity);

	printf("please enter the purchase date:");
	scanf("%s", &date);
	
	printf("item\tprice\t\tquantity\tdate\t\ttotal\n");
	printf("%d\t%9.2lf\t%d\t%s\t%9.2lf",item, price, quantity, date, price*quantity);
return 0;
}

