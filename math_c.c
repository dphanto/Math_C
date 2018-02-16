#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int add()
{
	int answer;

	int addition, num1, num2;

	printf("[*]Addition? [1 for yes, 0 for no] ");
	scanf("%i", &answer);

	if(answer == 1)
	{

		printf("[*]First number: ");
		scanf("%i", &num1);

		printf("[*]Second number: ");
		scanf("%i", &num2);

		addition = num1 + num2;

		printf("%i + %i = %i \n", num1, num2, addition);

	}
	else
	{

		exit(1);

	}

return 0;
}

int subtraction()
{
	int answer;

	int subtraction, num1, num2;

	printf("[*]Subtraction? [1 for yes, 0 for no] ");
	scanf("%i", &answer);

	if(answer == 1)
	{

		printf("[*]First number: ");
		scanf("%i", &num1);

		printf("[*]Second number: ");
		scanf("%i", &num2);

		subtraction = num1 - num2;
		printf("%i - %i = %i \n", num1, num2, subtraction);

	}
	else
	{

		exit(1);

	}
return 0;
}

int multiply()
{
	int answer;

	int multiply, num1, num2;


	printf("[*]Multiplication? [1 for yes, 0 for no] ");
	scanf("%i", &answer);

	if(answer == 1)
	{

		printf("[*]First number: ");
		scanf("%i", &num1);

		printf("[*]Second number: ");
		scanf("%i", &num2);

		multiply = num1 * num2;
		printf("%i x %i = %i \n", num1, num2, multiply);

	}
	else
	{

		exit(1);

	}

return 0;
}

int divide()
{
	int answer;

	int divide, num1, num2;

	printf("[*]Division? [1 for yes, 0 for no] ");
	scanf("%i", &answer);

	if(answer == 1)
	{

		printf("[*]First number: ");
		scanf("%i", &num1);

		printf("[*]Second number: ");
		scanf("%i", &num2);

		divide = num1 / num2;
		printf("%i / %i = %i \n", num1, num2, divide);

	}
	else
	{

		exit(1);

	}

return 0;
}

int main()
{

	char answer;

	printf("[*]Enter in operation [1 for addition, 2 for subtraction, 3 for multiplication, 4 for division]: ");
	scanf("%i", &answer);

	if(answer == 1)
	{

		add();

	}

	if(answer == 2)
	{

		subtraction();

	}

	if(answer == 3)
	{

		multiply();

	}

	if(answer == 4)
	{

		divide();

	}

	if(answer == 0)
	{

		exit(1);

	}

return 0;
}
