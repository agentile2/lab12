#include <stdio.h>
#include <string.h>


	int main() {
		//declaring varibales
		char ch[10]; //initilazing password string length of 10
		int length;
//		int points;
//		int newLength;
		int lowerCount, capitalCount, numCount, conseqCount;
		
		//user inputs password
		printf("Please enter your password: ");
		scanf("%s", ch);
		length = strlen(ch);// initilizes string length of entered password as length variable
		
		int points = 0;
	//loops through to check length of each element in entered password
		for(int i = 0; i<length; i++){
				// checks for lower case and adds to lowercase count if found
			if(ch[i] >= 'a' && ch[i] <= 'z') {		
			lowerCount+=1;
		}
	}	
			// if no lower case letters are found, add 20 to points variable
			if(lowerCount <= 0) {
				 points += 20;
	}
		//checks for capital letters in password, if found adds to capital count
		for(int i=0; i<length; i++) {
			if(ch[i] >= 'A' && ch[i] <= 'Z') {
			capitalCount +=1;
		}
	}			
			// if capital letters are not found, add 20 points
			if(capitalCount <= 0) {
				points +=20;
	}
		// checks for numbers in entered password, if found add point to numcount
		for(int i = 0; i<length; i++){
			if(ch[i] <= '0' && ch[i]<= '9') {
			numCount +=1;
		}
	}	
			//if no numbers are found, add 20 points
			if(numCount <=0) {
				points +=20;
	}	
		//check for consequetive values 
		for(int i = 0; i<length; i++) {
			for(int j=i+1; j<length; j++) {
				if(ch[j]-ch[i] ==1) {
					conseqCount +=1;
			}
		}
	}
			//if there are two or more, add 20 points
		if(conseqCount >=2) {
			points +=20;
	}
		//check entered password length
//		if(length !=10) { // if length does not equal 10 characters then
//			newLength=10-length; //declares new length as the missing number of characters
//			points = 5*newLength; // declares points as 5 times the new length

		if(points>30) { // if points is greater than 30 then print
			printf("deduction: %d \nyour password is unsafe, reset!", points);
		}
		else{ // else if points is less than 30 
			printf("your password is safe\n");
			}
		 // else if length equals 10
	//	else{
	//		printf("your password is safe");
	//	}
		return 0;
	}

