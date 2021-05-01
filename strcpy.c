#include <stdio.h>

char *strcpy(char* strDest, const char* strSrc) {
	int i = 0;
	while(strSrc[i] !=0){
		strDest[i] = strSrc[i];
		i++;
	}
	strDest[i]=0;
	return strDest;
	}
	int main(){
		char src[] = "copy this phrase";
		char dest[100];
		strcpy(dest, src);	
		printf("source is %s\n",src);
		printf("destination is %s\n", strcpy(dest,src));
		return 0;
}

