#include <stdio.h>
#include <string.h>



		int isPalindrone(char str[]) {
			int length = strlen(str);
			int left = 0;
			int right = length-1;
			char ch;
		
		//loops through conditions as long as left is less than right	
		while(left<right) {
			ch = str[left]; // looking at left most  character
		if(((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))){
			left++;
			continue;
		}
			ch = str[right];
		if(((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))) {
			right--;
			continue;
		}
		if(str[left] != str[right]) {
			return 0;
		}
		left++;
		right--;
		}
		return 1;
	}
	
		int main() {
			char str[100];
			printf("enter a word: ");
			scanf("%s", str);
		if(isPalindrone(str)) {
			printf("%s is palindrone\n", str);
		} else {
			printf("%s is not palindrone\n", str);
		}
		return 0;
	}

