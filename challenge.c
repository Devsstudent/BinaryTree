#include <stdio.h>
#include <stdlib.h>
#include "challenge.h"

/* We create a binary tree, and a convert it to a circular double linked list ordered */

int	main()
{
	struct Node *list;
	list = malloc(sizeof(*list));
	struct Node *tree;
	tree = malloc(sizeof(*tree));
	tree = build123();
	ft_display(tree);
	list = tree_to_link_list(tree);
	printf("\n\n\n");
	printf("Linked List :\n");
	ft_display_li(list);
	return 0;
}


