#include <stdio.h>
#include <stdlib.h>
struct node{
	int data;
	struct node *next;
};

void print_list(struct node *curr)
{
	while (curr != NULL)
	{
		printf("%d\n", curr->data);
		curr = curr->next;
	}
}

int main()
{
	struct node *head = NULL;
	
	struct node *Node1 = (struct node *)malloc(sizeof(struct node));
	struct node *Node2 = (struct node *)malloc(sizeof(struct node));
	struct node* Node3 = (struct node *)malloc(sizeof(struct node));
	
	Node1->data = 4;
	Node2->data = 8;
	Node3->data = 99;

	head = Node1;
	Node1->next = Node2;
	Node2->next = Node3;
	Node3->next = NULL;

	print_list(head);

	free(head);
	return (0);
}
