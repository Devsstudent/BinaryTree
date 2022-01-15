#include <stdio.h>
#include <stdlib.h>
#include "build.c"
#include "display.c"
#include "convert_to_double_circular_list.c"

void	ft_display_li(struct Node *li)
{
	struct Node *buff;
	buff = malloc(sizeof(*buff));
	buff = li;
	int i;
	i = 1;
	while (li->right != buff)
	{
		printf("node %i : %i\n", i, li->value);
		li = li->right;
		i++;
	}
	printf("node %i : %i\n", i, li->value);
	return;
}


