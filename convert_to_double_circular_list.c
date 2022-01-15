

/* Sort list while its not in order */


int	ft_check(struct Node *li)
{
	struct Node *buff;
	buff = malloc(sizeof(*buff));
	buff = li;
	while ( li->right != buff)
	{
		if ( li->value > li->right->value)
		{
			return 0;
		}
		li = li->right;
	}
	return 1;
}

void	ft_sort_li(struct Node *li)
{
	struct Node *buff;
	int i;
	int buffer;
	buff = malloc(sizeof(*buff));
	buff = li;
	while( ft_check(li) != 1)
	{
		i = 0;
		while (li->right !=buff)
		{
			if (li->value > li->right->value)
			{
				buffer = li->value;
				li->value = li->right->value;
				li->right->value = buffer;
				if (i == 0)
				{
					buff = li;
				}
			}
			li = li->right;
			i++;
		}
		li = buff;
	}
	return;
		
}

/* Push to the end of the list */

void	push_to_li(struct Node *li, int value)
{
	struct Node *new_node;
	new_node = malloc(sizeof(*new_node));
	new_node->value = value;
	new_node->right = li;
	while(li->right != new_node->right)
	{
		li = li->right;
	}
	new_node->left = li;
	li->right = new_node;
	return;
}

/* Browse the binary tree and use push to li for each node of the tree */

void	insert_into_li(struct Node *node, struct Node *li)
{
	if (node == NULL)
	{
		return;
	}
	else
	{
		push_to_li(li, node->value);
	}
	if (node->left != NULL)
	{
		insert_into_li(node->left, li);
	}
	if (node->right != NULL)
	{
		insert_into_li(node->right, li);	
	}
	return;
}

/* Use all previous func together + case of the head of the list */

struct Node	*tree_to_link_list(struct Node *tree)
{
	struct Node *linked_li;
	linked_li = malloc(sizeof(linked_li));	
	if (tree != NULL)
	{
		linked_li->value = tree->value;
		linked_li->right = linked_li;
		linked_li->left = linked_li;
	}
	insert_into_li(tree, linked_li);
	ft_sort_li(linked_li);
	return linked_li;
}
