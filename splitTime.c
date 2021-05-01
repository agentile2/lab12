#include <stdio.h> 

void split_time(long totalSec, int *hr, int *min, int *sec){
	*hr= (int)(totalSec/(3600)); 
	totalSec = totalSec%(3600);
	*min = (int)(totalSec/60);
	*sec = (totalSec%60);
}
	int main() {
		int n, hr, min, sec;
		printf("Enter seconds:");
		scanf("%d",&n);
		split_time(n,&hr,&min,&sec);
		printf("Converted format: %d hour %d minutes %d seconds \n",hr,min,sec);
	return 0;
}
