/* Affichage de l'ordered tree (un peu particulier mais fonctionnel et understable) */


void	print_level(struct Node *node)
{
	printf("\n");
	if(node->left != NULL && node->right != NULL)
	{
		printf("  %i  <- %i ->  %i  ", node->left->value, node->value, node->right->value);
	}
	else if (node->left == NULL && node->right != NULL)
	{
        	printf("  %i ->  %i  ", node->value, node->right->value);
	}
	else if (node->left != NULL && node->right == NULL)
	{
		printf("  %i  <- %i  ", node->left->value, node->value);
	}
	return;
}


void    ft_display(struct Node *tree) { 
        struct Node *buffer; 
        buffer = malloc(sizeof(*buffer)); 
        if( tree == NULL) 
        {        
                return; 
        } 
        else { 
		print_level(tree);
        } 
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
