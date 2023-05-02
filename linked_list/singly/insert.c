#include <stdio.h>
#include <stdlib.h>

struct node{
	int data;
	struct node *next;
};

void insert(struct node **head, int data)
{
	struct node *new_node;
	new_node = (struct node *)malloc(sizeof(struct node));
	
	if (new_node == NULL)
	{
		printf("error: out of memory");
	}	
	new_node->data = data;
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
	
	}
	else
	{
		struct node *curr = malloc(sizeof(struct node));
		curr = *head;
		while (curr->next != NULL)
		{
			curr = curr->next;
		}
		curr = new_node;
		printf("%d\n", curr->data);
	}
	
}

int main()
{
	struct node *head = NULL;
	insert(&head, 50);
	insert(&head, 60);	
	struct node *curr;
	curr = head;
	while (curr != NULL)
	{
		printf("%d", curr->data);
		curr = curr->next;
	}
	printf("\n");
	return (0);
}
