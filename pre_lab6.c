#include<stdio.h>

void display_option()
{
	printf("Options:....\n");	
}

int check_option(int option)
{
	if(option<=3 && option>=1)
		return 1;
	return 0;
}

int check_year(int year)
{
	if(year>=1 && year<=10)
		return 1;
	return 0;
}


int check_amount(float amount)
{
	if(amount>0)
		return 1;
	return 0;
}

int main()
{
	int option,year;
	float amount;
	char *op_name[3];
	op_name[0]="Checking";
	op_name[1]="Saving";
	op_name[2]="Fix Deposit";
		

	while(1)
	{
		display_option();
		scanf("%d",&option);
		if(check_option(option))
			break;
		printf("incorrect option\n");
	}
	
	while(1)
	{
		printf("select year:\n");
		scanf("%d",&year);
		if(check_year(year))
			break;
		printf("incorrect year\n");
	}

	while(1)
	{
		printf("input amount\n");
		scanf("%f",&amount);
		if(check_amount(amount))
			break;
		printf("incorrect amount\n");
	}
	
	printf("%s\n",op_name[option-1]);
	printf("Year: %d\n",year);
	printf("amount: %.2f\n",amount);
	return 1;

}


