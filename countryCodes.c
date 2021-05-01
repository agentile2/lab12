#include <stdio.h>

	struct dialing_code {
		char name[20]; //declaring 20 spots for country names
		int countryCode; // declaring country code numbers as a variable
};
	int main(){
		const struct dialing_code country_codes[] = {
	{"Argentina", 54}, {"Brazil", 55}, {"China", 86}, {"Philippines", 63}, {"Mexico", 52}, {"Italy", 39}, {"Germany", 49}, {"France", 33}, {"India", 91}, {"Russia", 7}, {"Spain", 34}, {"United Kingdom", 44}, {"Japan", 81}, {"Thailand", 66}, {"United States", 1}, {"Vietnam", 84}, {"Iran", 98}, {"Indonesia", 62}, {"Colombia", 57}, {"Egypy", 20}};
	int countryCode;
	//prompt user to enter country code they want to search
	printf("enter the country code: ");
	scanf("%d", &countryCode);
	
	
	int search = 0;
	//loops through each element in country code array to find 
	//if entered countrycode is in the array
	for(int i = 0; i < 20; i++){
		// if country code is found then print country name
		if(country_codes[i].countryCode == countryCode){
		printf("Country: %s\n", country_codes[i].name);
		search = 1;
		break;
		}
	} // if code is not found when searched, print statement
	if(!search) {
		printf("Country not found");
	}
	return 0;
}	
