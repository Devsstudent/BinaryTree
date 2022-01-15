#include "node.h"

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
	ft_assign(2, root);
	ft_insert(7, root);
	ft_insert(4, root);
	ft_insert(67, root);
	ft_insert(12, root);
	ft_insert(90, root);
	ft_insert(9, root);
	ft_insert(0, root);
	ft_insert(1, root);
	ft_insert(3, root);
	return root;
}
