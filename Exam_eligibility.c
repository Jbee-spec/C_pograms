#include <stdio.h>

int main(){
	float attendance, marks;
	
	printf("Enter attendance\t");
	scanf("%f", &attendance);
	
	printf("Enter marks\t");
	scanf("%f", &marks);
	
	if(attendance >= 75 && marks>=40){
		printf("Eligble\n");
	}
	else{printf("not Eligble\n");
	}
		
		return 0;
}