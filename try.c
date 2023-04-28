#include <stdio.h>

int main()
{
	int num1;
	int num2;
	char operator;

	printf("please enter first number: ");
	scanf("%d", &num1);
	printf("please enter an operator: ");
	scanf(" %c", &operator);
	printf("please enter second number: ");
	scanf("%d", &num2);

	if(operator == '+')
	{
		printf("%d\n", num1 + num2);
	}
	else if(operator == '-')
	{
		printf("%d\n", num1 - num2);
	}
	else if(operator == '*')
	{
		printf("%d\n", num1 * num2);
	}
	else if(operator == '/')
	{
		printf("%d\n", num1 / num2);
	}
	else
		printf("Error");
	return (0);
}
