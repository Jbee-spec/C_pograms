#include <stdio.h>

int main(){
	char name[20];
	int age;
	float income;
	
	printf("Enter your name\t");
	scanf("%19s", name);
	
	printf("Enter your age\t");
	scanf("%d",&age);
	
	printf("Enter your salary\t");
	scanf("%f", &income);
	
	if (age >= 21 && income >= 21000){
		printf(" %s, congratulation you qualify for a loan\n", name);
}else {printf("%s Unfortunetly, we are unable to offer you a loan at this time", name);}
       return 0;
	   	}
