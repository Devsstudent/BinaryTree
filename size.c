#include <stdio.h>
#include <stdlib.h>

struct Node {
	int value;
	struct Node *left;
	struct Node *right;
};
void	ft_display(struct Node *tree)
{
	struct Node *buffer;
	buffer = malloc(sizeof(*buffer));
	if( tree == NULL)
	{	
		return;
	}
	else {
		printf("%i", tree->value);
	}
	printf("\n");
	if ( tree->left != NULL )
	{
		ft_display(tree->left);
	}
	if ( tree->right != NULL)
	{
		ft_display(tree->right);
	}
	return;
}


void	ft_assign(int val, struct Node *head)
{ 	
	if (head == NULL)
	{
		head = malloc(sizeof(*head));
	}
	head->value = val;
	head->left = NULL;
	head->right = NULL;
	return;
}
void	ft_insert(int to_insert, struct Node *tree)
{
	struct Node *new;
	new = malloc(sizeof(*new));
	new->value = to_insert;
	new->left = NULL;
	new->right = NULL;
	if ( to_insert <= tree->value )
        {       
		if (tree->left != NULL)
                	ft_insert(to_insert, tree->left);
		else
		{
			tree->left = new;
		}
        }
        else
        {       
               	if (tree->right != NULL) 
			ft_insert(to_insert, tree->right);
		else
		{
			tree->right = new;
		}
        }
        return;
}

struct Node *build123(void)
{
	struct Node *root;
	root = malloc(sizeof(*root));
	ft_display(root);
	return root;
}

void	size (struct Node *node, int *i)
{
	struct Node *buffer;
	buffer = malloc(sizeof(*buffer));
	if(node == NULL)
	{
		return;
	}
	else
	{
		if(node->left != NULL)
		{
			(*i)++;
			size(node->left, i);		
		}		
		if(node->right != NULL)
		{
			(*i)++;
			size(node->right, i);
		}
	}
}

int	main( int argc, char *argv[])
{
	struct Node *one_two_three;
	int i;
	i = 0;
	int *i_ptr;
	i_ptr = &i;
	one_two_three = malloc(sizeof(*one_two_three));
	one_two_three = build123();
	if (one_two_three != NULL)
	{
		i++;
	}
	size(one_two_three, i_ptr);
	printf("%i",i);
	return 1;
}

