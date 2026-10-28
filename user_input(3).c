# include <stdio.h>

int main(){
	float Height;
	double balance;
	int phone;
	
	printf("Enter Height(in meters): ");
	scanf("%f", &Height);
	
	printf("Enter Bank balance(in ksh): ");
	scanf("%lf", &balance);
	
	printf("Enter phone number: ");
	scanf("%d", &phone);

	printf("Height       : %.2fm\n", Height);
	printf("Bank balnce  :ksh %.2lf\n", balance);
	printf("Phone number :  %d\n", phone);
	printf("=======================\n");
	
	return 0;
}


