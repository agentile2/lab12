#include <stdio.h>
#include <string.h>


	int main() {
		//declaring varibales
		char ch[10]; //initilazing password string length of 10
		int length;
		int points;
		int newLength;

		//user inputs password
		printf("Please enter your password: ");
		scanf("%s", ch);
		length = strlen(ch);// initilizes string length of entered password as length variable

		//check entered password length
		if(length !=10) { // if length does not equal 10 characters then
			newLength=10-length; //declares new length as the missing number of characters
			points = 5*newLength; // declares points as 5 times the new length

		if(points>30) { // if points is greater than 30 then print
			printf("deduction: %d \nyour password is unsafe, reset!", points);
		}
		else{ // else if points is less than 30 
			printf("your password is safe");
			}
		} // else if length equals 10
		else{
			printf("your password is safe");
		}
		return 0;
	}

