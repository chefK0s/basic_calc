#include <stdio.h>
//Welcome to my first project
// For now it's only this basic calc
int main(void)
{
	char operator;
	int var1, var2;
	printf("Welcome to my basic calculator!\n");
	printf("if you want to exit you need to press CTRL + c\n");
	while (1){
	    printf("Enter your expression: ");
		scanf("%d %c %d",&var1, &operator, &var2);
		if (operator == '+') printf("%d %c %d = %d\n", var1, operator,var2, var1 + var2);
		if (operator == '-') printf("%d %c %d = %d\n", var1, operator, var2, var1 - var2);
		if (operator == '/') printf("%d %c %d = %d\n", var1, operator,var2, var1 / var2);
		if (operator == '*') printf("%d %c %d = %d\n", var1, operator, var2, var1 * var2);
		if (operator == '%') printf("%d %c %d = %d\n", var1, operator, var2, var1 % var2);
	}
	return 0;


}
