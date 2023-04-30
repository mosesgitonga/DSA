#include <stdio.h>
#include <stdlib.h>
int main()
{

	struct node{
	int num;
	struct node *next;
	};
	struct node *head = NULL, *newnode = NULL, *temp = NULL;

	int digit, sum = 0;

	printf("enter a digit ");
	
	
	while (scanf("%d", &digit) == 1 && getchar() != '\n')
	{
		newnode = (struct node *)malloc(sizeof(struct node));
		newnode->num = digit;
		newnode->next = NULL;

		if (head == NULL)
		{
			head = newnode;
			temp = newnode;
		}
		else
		{
			temp->next = newnode;
			temp = newnode;
		}
	}
	temp = head;

	while (temp != NULL)
	{
		printf("sum of %d\n ", temp->num);
		sum += temp->num;
		temp = temp->next;
	}
	printf(" is %d\n", sum);
	temp = head;
	
	while (temp != NULL)
	{
		head = temp->next;
		free(temp);
		temp = head;
	}
	
	return (0);
}
