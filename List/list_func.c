#include <stdio.h>
#include <stdlib.h>
#include "List_func.h"

int List_add(List **L, int x)
{
	List * p = (List*)malloc(sizeof(List));
	if (p == NULL) return 1;
	p -> n = x;
	p -> next = *L;
	*L = p;
	return 0;
}

int List_remove(List **L, int x)
{
	List *p2, *p = *L;
	if (p -> n == x)
	{
		p2 = p -> next;
		free(p);
		*L = p2;
		return 0;
	}
	while (p -> next != NULL)
	{
		if (((p -> next) -> n) == x)
		{
			p2 = p -> next -> next;
			free(p -> next);
			p -> next = p2;
			return 0;
		}
		p = p -> next;
	}
	return 1;
}

void List_print(List **L)
{
	List *p = *L;
	while (p != NULL)
	{
		printf("%i", p -> n);
		if (p -> next != NULL)
			printf(", ");
		p = p -> next;
	}
	printf("\n");
	return;
}

void List_delList(List **L)
{
	List *p = *L, *p2;
	while (p != NULL)
	{
		p2 = p->next;
		free(p);
		p = p2;
	}
	return;
}

int List_reverse(List **L)
{
	List *p = *L, *list2 = NULL;
	while (p != NULL)
	{
		if (List_add(&list2, p -> n) == 1)
		{
			List_delList(&list2);
			return 1;
		};
		p = p -> next;
	}
	*L = list2;
	List_delList(&list2);
	return 0;
}
