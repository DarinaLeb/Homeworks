#include <stdio.h>
#include "Errors.h"

void error(int value)
{
	printf("\n");
	switch(value)
	{
		case LIST_IS_EMPTY:
			printf("== ERROR: list is empty.\n");
			break;

		case NOT_ENOUGHT_MEMORY:
			printf("== ERROR: not enought memory.\n");
			break;

		case INCORRECT_ARGUMENT:
			printf("== ERROR: incorrect argument.\n");
			break;

		case INCORRECT_EXPRESSION:
			printf("== ERROR: incorrect expression.\n");
			break;

		case UNKNOWN_COMMAND:
			printf("== ERROR: unknown command.\n");
			break;

		case STACK_IS_EMPTY:
			printf("== ERROR: stack is empty.\n");
			break;

		case DIVISION_BY_ZERO:
			printf("== ERROR: integer division by zero.\n");
			break;

		case STACK_IS_TOO_SMALL:
			printf("== ERROR: not enough elements in stack.\n");
			break;
	}
	return;
}
