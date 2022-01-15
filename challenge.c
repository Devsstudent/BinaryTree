#include <stdio.h>
#include <stdlib.h>
#include "challenge.h"

int	main(int argc,   char *argv[])
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
	
	return 1;
}


